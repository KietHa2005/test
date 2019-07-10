#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "worldclock.h"
#include <QDebug>
#include <QThread>
#include "shapedclock.h"
#include "information.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;
    worldclock *wc;
    worldclock *wcHN;
    worldclock *wcLD;
    worldclock *wcNY;
    ShapedClock *clockHN = new ShapedClock(this,7);
    ShapedClock *clockLD = new ShapedClock(this,1);
    ShapedClock *clockNY = new ShapedClock(this,-6);
    Information *inf;

public slots:
    void clock();
private slots:
    void on_pushButton_Add_clicked();
};

#endif // MAINWINDOW_H
