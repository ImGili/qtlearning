/*
 * @Author: ImGili
 * @Description: 
 */
#include<QApplication>
#include"digitalclock.h"
int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Digitalclock clock;

    clock.show();

    return app.exec();
}