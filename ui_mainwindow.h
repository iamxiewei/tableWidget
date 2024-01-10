/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *pushButton_InfoList;
    QPushButton *pushButton_ImportData;
    QPushButton *pushButton_Commit;
    QPushButton *pushButton_AddData;
    QPushButton *pushButton_updateData;
    QPushButton *pushButton_selectData;
    QPushButton *pushButton_deleteData;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(852, 487);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(170, 140, 256, 201));
        pushButton_InfoList = new QPushButton(centralwidget);
        pushButton_InfoList->setObjectName(QString::fromUtf8("pushButton_InfoList"));
        pushButton_InfoList->setGeometry(QRect(511, 141, 75, 23));
        pushButton_ImportData = new QPushButton(centralwidget);
        pushButton_ImportData->setObjectName(QString::fromUtf8("pushButton_ImportData"));
        pushButton_ImportData->setGeometry(QRect(511, 315, 75, 23));
        pushButton_Commit = new QPushButton(centralwidget);
        pushButton_Commit->setObjectName(QString::fromUtf8("pushButton_Commit"));
        pushButton_Commit->setGeometry(QRect(511, 286, 75, 23));
        pushButton_AddData = new QPushButton(centralwidget);
        pushButton_AddData->setObjectName(QString::fromUtf8("pushButton_AddData"));
        pushButton_AddData->setGeometry(QRect(511, 170, 75, 23));
        pushButton_updateData = new QPushButton(centralwidget);
        pushButton_updateData->setObjectName(QString::fromUtf8("pushButton_updateData"));
        pushButton_updateData->setGeometry(QRect(511, 228, 75, 23));
        pushButton_selectData = new QPushButton(centralwidget);
        pushButton_selectData->setObjectName(QString::fromUtf8("pushButton_selectData"));
        pushButton_selectData->setGeometry(QRect(511, 257, 75, 23));
        pushButton_deleteData = new QPushButton(centralwidget);
        pushButton_deleteData->setObjectName(QString::fromUtf8("pushButton_deleteData"));
        pushButton_deleteData->setGeometry(QRect(511, 199, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 852, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_InfoList->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\345\210\227\350\241\250", nullptr));
        pushButton_ImportData->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245\346\225\260\346\215\256", nullptr));
        pushButton_Commit->setText(QCoreApplication::translate("MainWindow", "\346\217\220\344\272\244\346\225\260\346\215\256", nullptr));
        pushButton_AddData->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240\346\225\260\346\215\256", nullptr));
        pushButton_updateData->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\346\225\260\346\215\256", nullptr));
        pushButton_selectData->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\346\225\260\346\215\256", nullptr));
        pushButton_deleteData->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
