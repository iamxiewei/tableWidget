#include "databaseexample.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include<QSqlQuery>
#include<QHeaderView>

DatabaseExample::DatabaseExample(QWidget *parent)
    : QWidget(parent), model(nullptr), tableView(nullptr),
    nameLineEdit(nullptr), positionLineEdit(nullptr)
{
    // �������
    createTable();

    // ���� QSqlTableModel
    model = new QSqlTableModel(this);
    model->setTable("employees");
    model->select();

    // ���� TableView
    tableView = new QTableView(this);
    tableView->setModel(model);

    // ���ñ�ͷ
    for (int col = 0; col < model->columnCount(); ++col) {
        tableView->horizontalHeader()->setSectionResizeMode(col, QHeaderView::Stretch);
    }

    // ������������Ͱ�ť
    nameLineEdit = new QLineEdit(this);
    positionLineEdit = new QLineEdit(this);

    QPushButton *addButton = new QPushButton("Add Data", this);
    QPushButton *deleteButton = new QPushButton("Delete Selected Row", this);

    connect(addButton, &QPushButton::clicked, this, &DatabaseExample::addData);
    connect(deleteButton, &QPushButton::clicked, this, &DatabaseExample::deleteSelectedRow);

    // ����
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(tableView);
    layout->addWidget(nameLineEdit);
    layout->addWidget(positionLineEdit);
    layout->addWidget(addButton);
    layout->addWidget(deleteButton);

    setLayout(layout);
}

DatabaseExample::~DatabaseExample()
{
    delete model;
}

void DatabaseExample::createTable() {
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS employees (id INTEGER PRIMARY KEY, name TEXT, position TEXT);");
}

void DatabaseExample::addData() {
    QString name = nameLineEdit->text();
    QString position = positionLineEdit->text();

    if (name.isEmpty() || position.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Name and Position cannot be empty!");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO employees (name, position) VALUES (?, ?);");
    query.bindValue(0, name);
    query.bindValue(1, position);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Insert data failed: " );
    } else {
        model->select(); // ˢ�±��
        nameLineEdit->clear();
        positionLineEdit->clear();
    }
}

void DatabaseExample::deleteSelectedRow() {
    QModelIndexList selectedRows = tableView->selectionModel()->selectedRows();

    if (selectedRows.isEmpty()) {
        QMessageBox::warning(this, "Warning", "No row selected!");
        return;
    }

    int row = selectedRows.first().row();
    model->removeRow(row);
    model->select(); // ˢ�±��
}
