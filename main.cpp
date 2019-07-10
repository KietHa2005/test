#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QGroupBox>
#include <QTextEdit>
    
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow window;




    window.show();
    return a.exec();
}
