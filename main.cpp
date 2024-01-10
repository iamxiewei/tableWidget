// #include <QApplication>
// #include <QtSql>
// #include <QSqlDatabase>
// #include <QSqlQuery>
// #include <QSqlTableModel>
// #include <QTableView>
// #include <QHeaderView>

// int main(int argc, char *argv[]) {
//     QApplication a(argc, argv);

//     // 连接到数据库
//     QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
//     db.setDatabaseName("example.db"); // 替换为你的数据库文件名
//     if (!db.open()) {
//         qDebug() << "Database connection failed!";
//         return -1;
//     }

//     // 创建 QSqlTableModel
//     QSqlTableModel model;
//     model.setTable("employees"); // 替换为你的表名
//     model.select();

//     // 创建 TableView
//     QTableView tableView;
//     tableView.setModel(&model);

//     // 设置表头
//     for (int col = 0; col < model.columnCount(); ++col) {
//         tableView.horizontalHeader()->setSectionResizeMode(col, QHeaderView::Stretch);
//     }

//     // 显示窗口
//     tableView.setWindowTitle("Employee Database");
//     tableView.show();

//     return a.exec();
// }
