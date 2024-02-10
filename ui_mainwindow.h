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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_InfoList;
    QPushButton *pushButton_AddData;
    QPushButton *pushButton_deleteData;
    QPushButton *pushButton_updateData;
    QPushButton *pushButton_selectData;
    QPushButton *pushButton_Commit;
    QPushButton *pushButton_ImportData;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1228, 588);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(270, 490, 127, 31));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(271, 68, 771, 421));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_InfoList = new QPushButton(widget);
        pushButton_InfoList->setObjectName(QString::fromUtf8("pushButton_InfoList"));

        verticalLayout->addWidget(pushButton_InfoList);

        pushButton_AddData = new QPushButton(widget);
        pushButton_AddData->setObjectName(QString::fromUtf8("pushButton_AddData"));

        verticalLayout->addWidget(pushButton_AddData);

        pushButton_deleteData = new QPushButton(widget);
        pushButton_deleteData->setObjectName(QString::fromUtf8("pushButton_deleteData"));

        verticalLayout->addWidget(pushButton_deleteData);

        pushButton_updateData = new QPushButton(widget);
        pushButton_updateData->setObjectName(QString::fromUtf8("pushButton_updateData"));

        verticalLayout->addWidget(pushButton_updateData);

        pushButton_selectData = new QPushButton(widget);
        pushButton_selectData->setObjectName(QString::fromUtf8("pushButton_selectData"));

        verticalLayout->addWidget(pushButton_selectData);

        pushButton_Commit = new QPushButton(widget);
        pushButton_Commit->setObjectName(QString::fromUtf8("pushButton_Commit"));

        verticalLayout->addWidget(pushButton_Commit);

        pushButton_ImportData = new QPushButton(widget);
        pushButton_ImportData->setObjectName(QString::fromUtf8("pushButton_ImportData"));

        verticalLayout->addWidget(pushButton_ImportData);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1228, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        pushButton_InfoList->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\345\210\227\350\241\250", nullptr));
        pushButton_AddData->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240\346\225\260\346\215\256", nullptr));
        pushButton_deleteData->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        pushButton_updateData->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\346\225\260\346\215\256", nullptr));
        pushButton_selectData->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\346\225\260\346\215\256", nullptr));
        pushButton_Commit->setText(QCoreApplication::translate("MainWindow", "\346\217\220\344\272\244\346\225\260\346\215\256", nullptr));
        pushButton_ImportData->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
