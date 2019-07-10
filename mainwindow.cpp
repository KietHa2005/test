#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "information.h"
#include "shapedclock.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    clockHN = new ShapedClock(this,"Hà Nội",7);
    clockLD = new ShapedClock(this,"London",1);
    clockNY = new ShapedClock(this,"NewYork",-6);
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(getHnTm()));
    timer->start(1000);
    ui->verticalLayout_HN->addWidget(clockHN);
    ui->verticalLayout_LD->addWidget(clockLD);
    ui->verticalLayout_NY->addWidget(clockNY);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clock()
{
    clockHN->show();
    clockLD->show();
    clockNY->show();
}

void MainWindow::on_pushButton_Add_clicked()
{
    inf = new Information;
    inf->show();
}
