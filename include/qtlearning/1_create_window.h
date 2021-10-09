#pragma once
#include <QtWidgets>
namespace glx0101
{
    int main(int argc, char *argv[])
    {
    QApplication app(argc, argv);
    QWidget window;
    window.resize(320, 240);
    window.show();
    window.setWindowTitle(
        QApplication::translate("toplevel", "Top-level widget"));
    return app.exec();
    }
}
namespace glx0102
{
    int main(int argc, char *argv[])
    {
    QApplication app(argc, argv);
    QWidget window;
    window.resize(320, 240);
    window.show();
    window.setWindowTitle(
        QApplication::translate("childwidget", "Top-level widget"));

    QPushButton* button = new QPushButton(
        QApplication::translate("childwidge", "Press me"), &window
    );
    button->move(100, 100);
    button->show();
    return app.exec();
    }
}