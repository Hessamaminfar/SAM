#include "mainwindow.h"
#include "qcustomplot.h"
#include "SOLVERS.h"

void plot_TEMP(QCustomPlot *Plot2D,arma::mat TEMP,QString Label,double z0, double dist,double HZ) {


  Plot2D->clearPlottables() ;
   Plot2D->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom); // this will also allow rescaling the color scale by dragging/zooming
   Plot2D->axisRect()->setupFullAxesBox(true);
   Plot2D->xAxis->setLabel("Streamwise Direction [m]");
   Plot2D->yAxis->setLabel("Boundary Layer Height [m]");

    QCPColorMap *TEMPMAP=new QCPColorMap(Plot2D->xAxis,Plot2D->yAxis);

    TEMPMAP->data()->setSize(TEMP.n_rows,TEMP.n_cols);
    TEMPMAP->data()->setRange(QCPRange(0,dist),QCPRange(z0,HZ));

            for (int xIndex=0;xIndex<TEMP.n_rows;xIndex=xIndex+1){
                for (int yIndex=0;yIndex<TEMP.n_cols;yIndex=yIndex+1){
            TEMPMAP->data()->setCell(xIndex,yIndex,TEMP(xIndex,yIndex));
        }
    }

            QCPColorScale *colorScale = new QCPColorScale(Plot2D);
            Plot2D->plotLayout()->addElement(0, 1, colorScale); // add it to the right of the main axis rect
            colorScale->setType(QCPAxis::atRight); // scale shall be vertical bar with tick/axis labels right (actually atRight is already the default)
            TEMPMAP->setColorScale(colorScale); // associate the color map with the color scale

            colorScale->axis()->setLabel(Label);
            // set the color gradient of the color map to one of the presets:
            colorScale->setDataRange(QCPRange(TEMP.min(),TEMP.max()));
            TEMPMAP->setGradient(QCPColorGradient::gpJet);
            // we could have also created a QCPColorGradient instance and added own colors to
            // the gradient, see the documentation of QCPColorGradient for what's possible.

            // rescale the data dimension (color) such that all data points lie in the span visualized by the color gradient:
            //TEMPMAP->rescaleDataRange();

            // make sure the axis rect and color scale synchronize their bottom and top margins (so they line up):
            QCPMarginGroup *marginGroup = new QCPMarginGroup(Plot2D);
            Plot2D->axisRect()->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);
            colorScale->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);

            // rescale the key (x) and value (y) axes so the whole color map is visible:
            Plot2D->rescaleAxes();


}
void plot_C(QCustomPlot *Plot2D,arma::mat TEMP,QString Label,double z0, double dist,double HZ) {


  Plot2D->clearPlottables() ;
   Plot2D->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom); // this will also allow rescaling the color scale by dragging/zooming
   Plot2D->axisRect()->setupFullAxesBox(true);
   Plot2D->xAxis->setLabel("Streamwise Direction [m]");
   Plot2D->yAxis->setLabel("Boundary Layer Height [m]");

    QCPColorMap *TEMPMAP=new QCPColorMap(Plot2D->xAxis,Plot2D->yAxis);

    TEMPMAP->data()->setSize(TEMP.n_rows,TEMP.n_cols);
    TEMPMAP->data()->setRange(QCPRange(0,dist),QCPRange(z0,HZ));

            for (int xIndex=0;xIndex<TEMP.n_rows;xIndex=xIndex+1){
                for (int yIndex=0;yIndex<TEMP.n_cols;yIndex=yIndex+1){
            TEMPMAP->data()->setCell(xIndex,yIndex,TEMP(xIndex,yIndex));
        }
    }

            QCPColorScale *colorScale = new QCPColorScale(Plot2D);
            Plot2D->plotLayout()->addElement(0, 1, colorScale); // add it to the right of the main axis rect
            colorScale->setType(QCPAxis::atRight); // scale shall be vertical bar with tick/axis labels right (actually atRight is already the default)
            TEMPMAP->setColorScale(colorScale); // associate the color map with the color scale

            colorScale->axis()->setLabel(Label);
            // set the color gradient of the color map to one of the presets:
            //colorScale->setDataRange(QCPRange(TEMP.min(),TEMP.max()));
            TEMPMAP->setGradient(QCPColorGradient::gpJet);
            // we could have also created a QCPColorGradient instance and added own colors to
            // the gradient, see the documentation of QCPColorGradient for what's possible.

            // rescale the data dimension (color) such that all data points lie in the span visualized by the color gradient:
            TEMPMAP->rescaleDataRange();

            // make sure the axis rect and color scale synchronize their bottom and top margins (so they line up):
            QCPMarginGroup *marginGroup = new QCPMarginGroup(Plot2D);
            Plot2D->axisRect()->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);
            colorScale->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);

            // rescale the key (x) and value (y) axes so the whole color map is visible:
            Plot2D->rescaleAxes();


}
