#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QCustomPlot *Plot;
    QCustomPlot *CPlot;
    QCustomPlot *MPlot;

private:
    Ui::MainWindow *ui;

private slots:
    void on_Basic_calculate_clicked();
    void on_ADVC_CAL_clicked();
    void on_actionabout_triggered();
};

#endif // MAINWINDOW_H
