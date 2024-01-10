#ifndef DATABASEEXAMPLE_H
#define DATABASEEXAMPLE_H

#include <QWidget>
#include <QSqlTableModel>
#include <QTableView>
#include <QLineEdit>

class DatabaseExample : public QWidget {
    Q_OBJECT

public:
    DatabaseExample(QWidget *parent = nullptr);
    ~DatabaseExample();

private slots:
    void createTable();
    void addData();
    void deleteSelectedRow();

private:
    QSqlTableModel *model;
    QTableView *tableView;
    QLineEdit *nameLineEdit;
    QLineEdit *positionLineEdit;
};

#endif // DATABASEEXAMPLE_H
