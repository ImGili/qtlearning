#include<QtWidgets>
#include<iostream>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.resize(320, 240);
    window.show();
    window.setWindowTitle(
        QApplication::translate("toplevel", "Top-level widget"));
    std::cout << "test cout" << std::endl;
    return app.exec();
}