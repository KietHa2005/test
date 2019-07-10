#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "information.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    wcHN = new worldclock(this);
    wcHN->setCn("Hà Nội");
    wcHN->setTz(7);
    wcLD = new worldclock(this);
    wcLD->setCn("London");
    wcLD->setTz(1);
    wcNY = new worldclock(this);
    wcNY->setCn("NewYork");
    wcNY->setTz(-6);
    ui->setupUi(this);
    ui->label_Cn_HN->setText(wcHN->getCn());
    ui->label_Cn_LD->setText(wcLD->getCn());
    ui->label_Cn_NY->setText(wcNY->getCn());
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
