#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QStringList>
using namespace std;


#pragma execution_character_set( "utf-8" )

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    w.show();
    return a.exec();
}
