#include <QtWidgets>
#include <QVariant>
#include <QPushButton>
#include <iostream>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton quit("Quit"); // quit后创建，后析构，会被析构两次
    QWidget window;  // window后创建，先析构，同时析构quit

    quit.setParent(&window);

    return 0;
}