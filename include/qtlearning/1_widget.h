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
        QApplication::translate("childwidget", "Press me"), &window
    );
    button->move(100, 100);
    button->show();
    return app.exec();
    }
}

namespace glx0103
{
    int main(int argc, char *argv[])
    {
    QApplication app(argc, argv);
    QWidget window;
    QLabel* label = new QLabel(
        QApplication::translate("windowlayout", "Name: ")
    );
    QLineEdit* edit = new QLineEdit();

    QHBoxLayout* layout= new QHBoxLayout();

    layout->addWidget(label);
    layout->addWidget(edit);

    window.setLayout(layout);
    window.setWindowTitle(
        QApplication::translate("windowlayout", "Window layout"));
    window.show();
    return app.exec();
    }
}