#include "information.h"
#include "ui_information.h"

Information::Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
}

Information::~Information()
{
    delete ui;
}

void Information::on_pushButton_OK_clicked()
{

}

void Information::on_pushButton_Cancel_clicked()
{
    this->close();
}
