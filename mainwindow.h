#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "worldclock.h"
#include <QDebug>
#include <QThread>
#include "shapedclock.h"
#include "information.h"
#include "QVBoxLayout"
#include "QLabel"

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
    QVBoxLayout *vertlay;
    QVBoxLayout *vertlay_HN;
    QVBoxLayout *vertlay_LD;
    QVBoxLayout *vertlay_NY;
    QLabel *label_HNn;
    QLabel *label_LDn;
    QLabel *label_NYn;
    QLabel *label_n;
    ShapedClock *clockHN;
    ShapedClock *clockLD;
    ShapedClock *clockNY;
    ShapedClock *clockWC;
    Information *inf;

public slots:
    void clock();
private slots:
    void on_pushButton_Add_clicked();
};

#endif // MAINWINDOW_H
