#include <QApplication>
#include "databaseexample.h"


// https://blog.csdn.net/CLinuxF/article/details/124572871
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    DatabaseExample example;
    example.show();

    return a.exec();
}
