#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTableWidget>
#include <QTableWidgetItem>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ImportData_clicked();

    void on_pushButton_AddData_clicked();

    void on_pushButton_deleteData_clicked();

    void on_pushButton_updateData_clicked();

    void on_pushButton_selectData_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

};




#endif // MAINWINDOW_H
