#define _USE_MATH_DEFINES
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "SOLVERS.h"
#include "2dplot.h"
#include <QImage>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Help_table->setWordWrap(1);
    QTableWidgetItem *header2 = new QTableWidgetItem();
    header2->setFlags(header2->flags() ^ Qt::ItemIsEditable);
    header2->setText("Recommended Values \n if Unavailable");
    ui->Help_table->setHorizontalHeaderItem(2,header2);
    ui->Help_table->horizontalHeader()->setVisible(1);
    ui->Help_table->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->Help_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QTableWidgetItem *Item2 = new QTableWidgetItem();
    Item2->setText("1.5 [Heavy Loading]\n0.5 [Moderated Fuel Loading (grass and tree litter)] \n .1 [light fuel loading (grass)] \n * double values if Fuel moisture Content >40% or on moist ground");
    Item2->setFlags(Item2->flags() ^ Qt::ItemIsEditable);
    ui->Help_table->setItem(1,2,Item2);

    QTableWidgetItem *Item0 = new QTableWidgetItem();
    Item0->setText("20 m [ cold & low wind velocity]\n100 m  [Moderate]\n1000 m [ warm and cloudy night]");
    Item0->setFlags(Item0->flags() ^ Qt::ItemIsEditable);
    ui->Help_table->setItem(6,2,Item0);

    QTableWidgetItem *Item3 = new QTableWidgetItem();
    Item3->setText("1 m [forest]\n0.25 m [low corps] \n0.03 [open flat terrain]");
    Item3->setFlags(Item3->flags() ^ Qt::ItemIsEditable);
    ui->Help_table->setItem(7,2,Item3);



    Plot=ui->Plot2D;
    CPlot=ui->CPLOT;
    MPlot=ui->MX_PLOT;
    ui->tabWidget->setCurrentIndex(1);

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Basic_calculate_clicked(){



    double zmix=ui->HZ->text().toDouble();
    double dist=ui->H_X->text().toDouble();
    int Nx=ui->NX->text().toInt();
    int Nz=ui->NZ->text().toInt();
    double FMC;

    if (ui->FM->currentIndex()==0){
        FMC=1;
    }
    else{
        FMC=2;
    }

    double Qvap;
    double z0;
    if (ui->F_T->currentIndex()==0){
        Qvap = 0.25*FMC*1e-3;
        z0=0.5;
    }
    else if (ui->F_T->currentIndex()==1) {
        Qvap = 0.25*FMC*1e-3;
        z0=0.25;
    }
    else if (ui->F_T->currentIndex()==2){
        Qvap=.05*FMC*1e-3;
         z0=.03;
    }

    double L_mon;

    if (ui->STBLT->currentIndex()==0){
        L_mon=20;
    }
    else if(ui->STBLT->currentIndex()==1){
        L_mon=100;
    }
    else if (ui->STBLT->currentIndex()==2){
        L_mon=1000;
    }
    double ustar = 0.44704*0.1*ui->U_Basic->text().toDouble();

    
    double z1 = 0.5;
    double gm = 0.003;
    double Ts = ui->T_S_BASIC->text().toDouble();
    double RH = ui->RH_Basic->text().toDouble()/100;

    double Qheat = 1.e-03;

    arma::mat Cwater; arma::mat Cliquid; arma::mat TEMP;arma::rowvec X;arma::rowvec Z;

    ui->V_flux->setText(QString::number(Qvap*1000));
    ui->H_flux->setText(QString::number(Qheat*1000));
    ui->T_S->setText(QString::number(Ts));
    ui->RH->setText(QString::number(RH*100));
    ui->Ustar->setText(QString::number(ustar));
    ui->L_MO->setText(QString::number(L_mon));
    ui->z0->setText(QString::number(z0));
    ui->T_Grad->setText(QString::number(gm*1000));



    Diffusion_Solution(zmix,dist,Nx,Nz,ui,z0, gm, Ts, ustar, L_mon, RH, Qvap, Qheat, Cwater, Cliquid, TEMP,Z,X);


    QString LABEL="Temperature";
    plot_TEMP(Plot,TEMP,LABEL,z0,dist,zmix);
    plot_C(CPlot,Cliquid*1000,"LWC",z0,dist,zmix);
    plot_C(MPlot,Cwater,"Mixing",z0,dist,zmix);

    Plot->replot();
    CPlot->replot();
    MPlot->replot();
    arma::rowvec Cliqmax_x=arma::zeros<arma::rowvec>(X.n_cols);
    arma::rowvec Cliq_profile=arma::zeros<arma::rowvec>(X.n_cols);

   // arma::rowvec Cliqmax_x=arma::max(TEMP,0);
    double b=0;
    for(int i=0;i<X.n_cols;i++){
        //qDebug() << "I:" << i;
        Cliqmax_x(i)=arma::max(Cliquid.row(i));
        if (Cliqmax_x(i)<0){
            Cliqmax_x(i)=0;
        }

        for (int j=0;j<Z.n_cols;j++){
            if( Cliquid(i,j)<2e-3){
                Cliq_profile(i)=Z(j);
                b=Z(j);
                break;

            }
        }
    }

    //double b=Cliq_profile(Cliq_profile.n_cols-1);

    if (b>=1){

        ui->BASIC_RES->setText("Superfog is very likely!" );
        ui->BASIC_RES->setStyleSheet("QLabel { background-color : red; color : White; }");
    }
    else if (b<1 & b>=0.5){

        ui->BASIC_RES->setText("Superfog is possible");
        ui->BASIC_RES->setStyleSheet("QLabel { background-color : Orange; color : black; }");
    }
    else if(b<0.5&b>=0.1){

        ui->BASIC_RES->setText("Superfog is not likely");
        ui->BASIC_RES->setStyleSheet("QLabel { background-color : Yellow; color : black; }");
    }
    else {

        ui->BASIC_RES->setText("Zero Superfog Threat");
         ui->BASIC_RES->setStyleSheet("QLabel { background-color : Green; color : white; }");
    }


}
void MainWindow::on_ADVC_CAL_clicked(){
    qDebug()<<"Advanced"<<1;
    double ustar = ui->Ustar->text().toDouble();
    double L_mon = ui->L_MO->text().toDouble();
    double z0 = ui->z0->text().toDouble();
    double gm = ui->T_Grad->text().toDouble()*1e-3;
    double Ts = ui->T_S->text().toDouble();
    double RH = ui->RH->text().toDouble()/100;
    double Qvap = ui->V_flux->text().toDouble()*1e-3;
    double Qheat = ui->H_flux->text().toDouble()*1e-3;

    double zmix=ui->HZ->text().toDouble();
    double dist=ui->H_X->text().toDouble();
    int Nx=ui->NX->text().toInt();
    int Nz=ui->NZ->text().toInt();

    arma::mat Cwater; arma::mat Cliquid; arma::mat TEMP;arma::rowvec X;arma::rowvec Z;
    Diffusion_Solution(zmix,dist,Nx,Nz,ui,z0, gm, Ts, ustar, L_mon, RH, Qvap, Qheat, Cwater, Cliquid, TEMP,Z,X);
    QString LABEL="Temperature";
    plot_TEMP(Plot,TEMP,LABEL,z0,dist,zmix);
    plot_C(CPlot,Cliquid*1000,"LWC",z0,dist,zmix);
    plot_C(MPlot,Cwater,"Mixing",z0,dist,zmix);

    Plot->replot();
    CPlot->replot();
    MPlot->replot();
    arma::rowvec Cliqmax_x=arma::zeros<arma::rowvec>(X.n_cols);
    arma::rowvec Cliq_profile=arma::zeros<arma::rowvec>(X.n_cols);


double b=0;
   for(int i=0;i<X.n_cols;i++){
       //qDebug() << "I:" << i;
       Cliqmax_x(i)=arma::max(Cliquid.row(i));
       if (Cliqmax_x(i)<0){
           Cliqmax_x(i)=0;
       }

       for (int j=0;j<Z.n_cols;j++){
           if( Cliquid(i,j)<2e-3){
               Cliq_profile(i)=Z(j);
               b=Z(j);
               break;

           }
       }
   }


    //double b=Cliq_profile(Cliq_profile.n_cols-1);
    qDebug()<<"B"<<b;
    if (b>=1){
        ui->BASIC_RES->setText("Superfog is very likely!" );
        ui->BASIC_RES->setStyleSheet("QLabel { background-color : red; color : White; }");
    }
    else if (b<1 & b>=0.5){
        ui->BASIC_RES->setText("Superfog is possible");
        ui->BASIC_RES->setStyleSheet("QLabel { background-color : Orange; color : black; }");
    }
    else if(b<0.5&b>=0.1){
        ui->BASIC_RES->setText("Superfog is not likely");
        ui->BASIC_RES->setStyleSheet("QLabel { background-color : Yellow; color : black; }");
    }
    else {
        ui->BASIC_RES->setText("Zero Superfog Threat");
         ui->BASIC_RES->setStyleSheet("QLabel { background-color : Green; color : white; }");
    }


}
void MainWindow::on_actionabout_triggered(){

    QMessageBox::information(this,tr("About SAM"),tr("This work was supported by the USDA Joint Fire Science Program project 09-1-04-5"
                                                 "administered by USDA Forest Service PSW ResearchStation agreement 09-JV-11272166-04\n\n "
                                                 "Superfog Analysis Model is designed by The Laboratory for Environmental Flow Modeling at University of California, Riverside, based on the following publication :\n"
                                                 "Bartolome, C., Princevac, M., Weise, D.R., Mahalingam, S., Ghasemian, M., Venkatram, A., Vu, H. and Aguilar, G., 2019. "
                                                 "\nLaboratory and numerical modeling of the formation of superfog from wildland fires. Fire Safety Journal, 106, pp.94-104."));

}
