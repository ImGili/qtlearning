#include<QtWidgets>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.resize(320, 240);
    window.show();
    window.setWindowTitle(
        QApplication::translate(u8"childwidget", u8"Top-level widget"));

    QPushButton *button = new QPushButton(
        QApplication::translate(u8"childwidget", u8"Press me"), &window);
    button->move(100, 100);
    button->show();
    return app.exec();
}