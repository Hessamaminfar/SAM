/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionabout;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *ADVNC_TAB;
    QToolBox *toolbox;
    QWidget *INPUT_VAR;
    QGroupBox *S_V;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *V_flux;
    QLabel *label_2;
    QLineEdit *H_flux;
    QGroupBox *AMB_V;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *T_Grad;
    QLineEdit *T_S;
    QLineEdit *RH;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *MET_V;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *L_MO;
    QLineEdit *Ustar;
    QLineEdit *z0;
    QPushButton *ADVC_CAL;
    QWidget *GRID;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_15;
    QLineEdit *HZ;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_16;
    QLineEdit *H_X;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_17;
    QSpacerItem *verticalSpacer_8;
    QLineEdit *NZ;
    QLabel *label_18;
    QLineEdit *NX;
    QWidget *TEMP_PLOT;
    QCustomPlot *Plot2D;
    QWidget *LWC;
    QCustomPlot *CPLOT;
    QWidget *MIXING;
    QCustomPlot *MX_PLOT;
    QWidget *BASC;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_9;
    QComboBox *FM;
    QLabel *label_11;
    QLineEdit *T_S_BASIC;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QComboBox *F_T;
    QLabel *label_12;
    QLineEdit *RH_Basic;
    QSpacerItem *verticalSpacer;
    QLabel *label_13;
    QLineEdit *U_Basic;
    QSpacerItem *verticalSpacer_5;
    QComboBox *STBLT;
    QLabel *label_14;
    QPushButton *Basic_calculate;
    QWidget *tab;
    QTableWidget *Help_table;
    QLabel *BASIC_RES;
    QProgressBar *Basic_Progress;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(439, 873);
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QString::fromUtf8("actionabout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 461, 671));
        ADVNC_TAB = new QWidget();
        ADVNC_TAB->setObjectName(QString::fromUtf8("ADVNC_TAB"));
        toolbox = new QToolBox(ADVNC_TAB);
        toolbox->setObjectName(QString::fromUtf8("toolbox"));
        toolbox->setGeometry(QRect(10, 20, 431, 621));
        INPUT_VAR = new QWidget();
        INPUT_VAR->setObjectName(QString::fromUtf8("INPUT_VAR"));
        INPUT_VAR->setGeometry(QRect(0, 0, 431, 486));
        S_V = new QGroupBox(INPUT_VAR);
        S_V->setObjectName(QString::fromUtf8("S_V"));
        S_V->setGeometry(QRect(0, 10, 411, 111));
        gridLayoutWidget = new QWidget(S_V);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 411, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(100);
        gridLayout->setContentsMargins(10, 0, 10, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        V_flux = new QLineEdit(gridLayoutWidget);
        V_flux->setObjectName(QString::fromUtf8("V_flux"));
        V_flux->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(V_flux, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        H_flux = new QLineEdit(gridLayoutWidget);
        H_flux->setObjectName(QString::fromUtf8("H_flux"));
        H_flux->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(H_flux, 1, 1, 1, 1);

        AMB_V = new QGroupBox(INPUT_VAR);
        AMB_V->setObjectName(QString::fromUtf8("AMB_V"));
        AMB_V->setGeometry(QRect(0, 130, 411, 201));
        AMB_V->setCheckable(true);
        gridLayoutWidget_2 = new QWidget(AMB_V);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 10, 411, 181));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(100);
        gridLayout_2->setContentsMargins(10, 0, 50, 0);
        T_Grad = new QLineEdit(gridLayoutWidget_2);
        T_Grad->setObjectName(QString::fromUtf8("T_Grad"));
        T_Grad->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(T_Grad, 1, 1, 1, 1);

        T_S = new QLineEdit(gridLayoutWidget_2);
        T_S->setObjectName(QString::fromUtf8("T_S"));
        T_S->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(T_S, 0, 1, 1, 1);

        RH = new QLineEdit(gridLayoutWidget_2);
        RH->setObjectName(QString::fromUtf8("RH"));
        RH->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(RH, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        MET_V = new QGroupBox(INPUT_VAR);
        MET_V->setObjectName(QString::fromUtf8("MET_V"));
        MET_V->setGeometry(QRect(0, 330, 411, 121));
        MET_V->setCheckable(true);
        gridLayoutWidget_3 = new QWidget(MET_V);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 20, 411, 101));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_3->setHorizontalSpacing(100);
        gridLayout_3->setContentsMargins(10, 0, 50, 0);
        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        L_MO = new QLineEdit(gridLayoutWidget_3);
        L_MO->setObjectName(QString::fromUtf8("L_MO"));
        L_MO->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(L_MO, 1, 1, 1, 1);

        Ustar = new QLineEdit(gridLayoutWidget_3);
        Ustar->setObjectName(QString::fromUtf8("Ustar"));
        Ustar->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Ustar, 0, 1, 1, 1);

        z0 = new QLineEdit(gridLayoutWidget_3);
        z0->setObjectName(QString::fromUtf8("z0"));
        z0->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(z0, 2, 1, 1, 1);

        ADVC_CAL = new QPushButton(INPUT_VAR);
        ADVC_CAL->setObjectName(QString::fromUtf8("ADVC_CAL"));
        ADVC_CAL->setGeometry(QRect(150, 460, 75, 23));
        toolbox->addItem(INPUT_VAR, QString::fromUtf8("Input Variables"));
        GRID = new QWidget();
        GRID->setObjectName(QString::fromUtf8("GRID"));
        GRID->setGeometry(QRect(0, 0, 431, 486));
        groupBox_2 = new QGroupBox(GRID);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(10, 20, 221, 151));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(true);
        groupBox_2->setChecked(false);
        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 20, 201, 112));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(29);
        formLayout_2->setVerticalSpacing(5);
        formLayout_2->setContentsMargins(0, 0, 30, 0);
        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_15);

        HZ = new QLineEdit(formLayoutWidget_2);
        HZ->setObjectName(QString::fromUtf8("HZ"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, HZ);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(1, QFormLayout::LabelRole, verticalSpacer_6);

        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_16);

        H_X = new QLineEdit(formLayoutWidget_2);
        H_X->setObjectName(QString::fromUtf8("H_X"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, H_X);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(3, QFormLayout::LabelRole, verticalSpacer_7);

        label_17 = new QLabel(formLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_17);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(5, QFormLayout::LabelRole, verticalSpacer_8);

        NZ = new QLineEdit(formLayoutWidget_2);
        NZ->setObjectName(QString::fromUtf8("NZ"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, NZ);

        label_18 = new QLabel(formLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_18);

        NX = new QLineEdit(formLayoutWidget_2);
        NX->setObjectName(QString::fromUtf8("NX"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, NX);

        toolbox->addItem(GRID, QString::fromUtf8("Grid Properties"));
        TEMP_PLOT = new QWidget();
        TEMP_PLOT->setObjectName(QString::fromUtf8("TEMP_PLOT"));
        TEMP_PLOT->setGeometry(QRect(0, 0, 431, 486));
        Plot2D = new QCustomPlot(TEMP_PLOT);
        Plot2D->setObjectName(QString::fromUtf8("Plot2D"));
        Plot2D->setGeometry(QRect(0, 0, 421, 301));
        toolbox->addItem(TEMP_PLOT, QString::fromUtf8("Temperature plots"));
        LWC = new QWidget();
        LWC->setObjectName(QString::fromUtf8("LWC"));
        LWC->setGeometry(QRect(0, 0, 431, 486));
        CPLOT = new QCustomPlot(LWC);
        CPLOT->setObjectName(QString::fromUtf8("CPLOT"));
        CPLOT->setGeometry(QRect(0, 0, 431, 281));
        toolbox->addItem(LWC, QString::fromUtf8("Concentration Plots"));
        MIXING = new QWidget();
        MIXING->setObjectName(QString::fromUtf8("MIXING"));
        MIXING->setGeometry(QRect(0, 0, 431, 486));
        MX_PLOT = new QCustomPlot(MIXING);
        MX_PLOT->setObjectName(QString::fromUtf8("MX_PLOT"));
        MX_PLOT->setGeometry(QRect(0, 0, 431, 331));
        toolbox->addItem(MIXING, QString::fromUtf8("Mixing plots"));
        tabWidget->addTab(ADVNC_TAB, QString());
        BASC = new QWidget();
        BASC->setObjectName(QString::fromUtf8("BASC"));
        groupBox = new QGroupBox(BASC);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 20, 431, 401));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(-10, 20, 475, 371));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(100);
        formLayout->setContentsMargins(20, 0, 100, 0);
        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        FM = new QComboBox(formLayoutWidget);
        FM->addItem(QString());
        FM->addItem(QString());
        FM->setObjectName(QString::fromUtf8("FM"));

        formLayout->setWidget(0, QFormLayout::FieldRole, FM);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_11);

        T_S_BASIC = new QLineEdit(formLayoutWidget);
        T_S_BASIC->setObjectName(QString::fromUtf8("T_S_BASIC"));

        formLayout->setWidget(4, QFormLayout::FieldRole, T_S_BASIC);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer_3);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::LabelRole, verticalSpacer_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::LabelRole, verticalSpacer_2);

        F_T = new QComboBox(formLayoutWidget);
        F_T->addItem(QString());
        F_T->addItem(QString());
        F_T->addItem(QString());
        F_T->setObjectName(QString::fromUtf8("F_T"));

        formLayout->setWidget(2, QFormLayout::FieldRole, F_T);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_12);

        RH_Basic = new QLineEdit(formLayoutWidget);
        RH_Basic->setObjectName(QString::fromUtf8("RH_Basic"));

        formLayout->setWidget(6, QFormLayout::FieldRole, RH_Basic);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::LabelRole, verticalSpacer);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_13);

        U_Basic = new QLineEdit(formLayoutWidget);
        U_Basic->setObjectName(QString::fromUtf8("U_Basic"));

        formLayout->setWidget(8, QFormLayout::FieldRole, U_Basic);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::LabelRole, verticalSpacer_5);

        STBLT = new QComboBox(formLayoutWidget);
        STBLT->addItem(QString());
        STBLT->addItem(QString());
        STBLT->addItem(QString());
        STBLT->setObjectName(QString::fromUtf8("STBLT"));

        formLayout->setWidget(10, QFormLayout::FieldRole, STBLT);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_14);

        Basic_calculate = new QPushButton(BASC);
        Basic_calculate->setObjectName(QString::fromUtf8("Basic_calculate"));
        Basic_calculate->setGeometry(QRect(170, 440, 75, 23));
        tabWidget->addTab(BASC, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        Help_table = new QTableWidget(tab);
        if (Help_table->columnCount() < 3)
            Help_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Help_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Help_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Help_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (Help_table->rowCount() < 8)
            Help_table->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Help_table->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Help_table->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Help_table->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Help_table->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Help_table->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Help_table->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Help_table->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        Help_table->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QFont font;
        font.setPointSize(10);
        font.setStyleStrategy(QFont::NoAntialias);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        __qtablewidgetitem11->setFont(font);
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(0, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(0, 2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(1, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(1, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(1, 2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(2, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(2, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(2, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(3, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(3, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(3, 2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(4, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(4, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(4, 2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(5, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(5, 1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(5, 2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(6, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(6, 1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(6, 2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(7, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(7, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        Help_table->setItem(7, 2, __qtablewidgetitem34);
        Help_table->setObjectName(QString::fromUtf8("Help_table"));
        Help_table->setGeometry(QRect(0, 0, 421, 541));
        Help_table->setAlternatingRowColors(true);
        Help_table->setSelectionMode(QAbstractItemView::MultiSelection);
        Help_table->setGridStyle(Qt::SolidLine);
        Help_table->horizontalHeader()->setVisible(false);
        Help_table->horizontalHeader()->setCascadingSectionResizes(false);
        Help_table->horizontalHeader()->setMinimumSectionSize(100);
        Help_table->horizontalHeader()->setHighlightSections(true);
        Help_table->horizontalHeader()->setStretchLastSection(false);
        Help_table->verticalHeader()->setVisible(false);
        tabWidget->addTab(tab, QString());
        BASIC_RES = new QLabel(centralWidget);
        BASIC_RES->setObjectName(QString::fromUtf8("BASIC_RES"));
        BASIC_RES->setGeometry(QRect(10, 720, 421, 81));
        QFont font1;
        font1.setPointSize(26);
        BASIC_RES->setFont(font1);
        BASIC_RES->setAlignment(Qt::AlignCenter);
        Basic_Progress = new QProgressBar(centralWidget);
        Basic_Progress->setObjectName(QString::fromUtf8("Basic_Progress"));
        Basic_Progress->setGeometry(QRect(10, 680, 431, 23));
        Basic_Progress->setValue(0);
        Basic_Progress->setTextVisible(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 439, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionabout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        toolbox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SAM V.0 alpha", nullptr));
        actionabout->setText(QApplication::translate("MainWindow", "About", nullptr));
        S_V->setTitle(QApplication::translate("MainWindow", "Smoldering Properties ", nullptr));
        label->setText(QApplication::translate("MainWindow", "Vapor Flux [g/ m^2 s]", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Heat Flux [kW /m^2]", nullptr));
        AMB_V->setTitle(QApplication::translate("MainWindow", "Ambient Conditions", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Surface Temperature [K]", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Temperature Gradient [K/km]", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Relative Humidity [%]", nullptr));
        MET_V->setTitle(QApplication::translate("MainWindow", "Meteorology", nullptr));
        label_6->setText(QApplication::translate("MainWindow", " Friction Velocity", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Roughness lenght [m]", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Monin\342\200\223Obukhov length [m]", nullptr));
        ADVC_CAL->setText(QApplication::translate("MainWindow", "Calculate", nullptr));
        toolbox->setItemText(toolbox->indexOf(INPUT_VAR), QApplication::translate("MainWindow", "Input Variables", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Grid Properties", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Mixture Height", nullptr));
        HZ->setText(QApplication::translate("MainWindow", "10", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Distance", nullptr));
        H_X->setText(QApplication::translate("MainWindow", "30", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Grid points in Z", nullptr));
        NZ->setText(QApplication::translate("MainWindow", "51", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Grid Points in X", nullptr));
        NX->setText(QApplication::translate("MainWindow", "100", nullptr));
        toolbox->setItemText(toolbox->indexOf(GRID), QApplication::translate("MainWindow", "Grid Properties", nullptr));
        toolbox->setItemText(toolbox->indexOf(TEMP_PLOT), QApplication::translate("MainWindow", "Temperature plots", nullptr));
        toolbox->setItemText(toolbox->indexOf(LWC), QApplication::translate("MainWindow", "Concentration Plots", nullptr));
        toolbox->setItemText(toolbox->indexOf(MIXING), QApplication::translate("MainWindow", "Mixing plots", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ADVNC_TAB), QApplication::translate("MainWindow", "Advance", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Input Variables", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Fuel Moisture", nullptr));
        FM->setItemText(0, QApplication::translate("MainWindow", "Dry (fmc<30%)", nullptr));
        FM->setItemText(1, QApplication::translate("MainWindow", "Wet(fmc>30%)", nullptr));

        label_11->setText(QApplication::translate("MainWindow", "Surface Temperature", nullptr));
        T_S_BASIC->setText(QApplication::translate("MainWindow", "273", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Fuel Type ", nullptr));
        F_T->setItemText(0, QApplication::translate("MainWindow", "Thick Brush", nullptr));
        F_T->setItemText(1, QApplication::translate("MainWindow", "Grass and Tree Litter", nullptr));
        F_T->setItemText(2, QApplication::translate("MainWindow", "Grass", nullptr));

        label_12->setText(QApplication::translate("MainWindow", "Relative Humidity [%]", nullptr));
        RH_Basic->setText(QApplication::translate("MainWindow", "50", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Wind speed ", nullptr));
        U_Basic->setText(QApplication::translate("MainWindow", "1", nullptr));
        STBLT->setItemText(0, QApplication::translate("MainWindow", "Cold and Low Wind Speed", nullptr));
        STBLT->setItemText(1, QApplication::translate("MainWindow", "Moderate", nullptr));
        STBLT->setItemText(2, QApplication::translate("MainWindow", "Warm and Cloudy", nullptr));

        label_14->setText(QApplication::translate("MainWindow", "Atmospheric Stability", nullptr));
        Basic_calculate->setText(QApplication::translate("MainWindow", "Calculate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(BASC), QApplication::translate("MainWindow", "Basic", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Help_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Model input parameter", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Help_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Help_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Recommended Values \\n if Unavailable", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Help_table->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Help_table->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Help_table->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = Help_table->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = Help_table->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = Help_table->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = Help_table->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = Help_table->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "8", nullptr));

        const bool __sortingEnabled = Help_table->isSortingEnabled();
        Help_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem11 = Help_table->item(0, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Heat Flux [kW m^-2]", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = Help_table->item(0, 1);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Heat produced by smoldering fuel bed", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = Help_table->item(0, 2);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "1 kW m^-2", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = Help_table->item(1, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Water Vapor Flux [g m^-2 s^-2", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = Help_table->item(1, 1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Water Vapor produced from smoldering fuel bed", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = Help_table->item(1, 2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "1.5 [Heavy Loading],0.5 [Moderated Fuel Loading (grass and tree litter)] .1 [light fuel loading (grass)] , * double values if Fuel moisture Content .40% or on moist ground", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = Help_table->item(2, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Surface Temperature", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = Help_table->item(2, 1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Ambient Ground Temperature ", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = Help_table->item(2, 2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "274-350 k", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = Help_table->item(3, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Temperature Gradient", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = Help_table->item(3, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "Temperature changes of stable ambient atmosphere with height", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = Help_table->item(3, 2);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "3 K/km^-1", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = Help_table->item(4, 0);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Ambient Humidity[%]", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = Help_table->item(4, 1);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "Ambient realtive humidity", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = Help_table->item(4, 2);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "50-95 %", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = Help_table->item(5, 0);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "Friction Velocity [m s^-1]", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = Help_table->item(5, 1);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "Shear Velocity ", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = Help_table->item(5, 2);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "10% of current wind speed", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = Help_table->item(6, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "Monin\342\200\223Obukhov length [m]", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = Help_table->item(6, 1);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "Atmospheric stability ", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = Help_table->item(6, 2);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "20 m [ cold & low wind velocity]           100 m  [Moderate]         1000 m [ warm and cloudy night]", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = Help_table->item(7, 0);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "Roughness Lenght [m]", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = Help_table->item(7, 1);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "Roughness Height based on fuel bed height", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = Help_table->item(7, 2);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "1 m [forest] 0.25 m [low corps] 0.03 [open flat terrain]", nullptr));
        Help_table->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Information", nullptr));
        BASIC_RES->setText(QString());
        menuMenu->setTitle(QApplication::translate("MainWindow", "Application", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
