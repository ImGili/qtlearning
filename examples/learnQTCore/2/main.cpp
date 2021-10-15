#include<QtWidgets>
#include<QVariant>
#include<QPushButton>
#include<iostream>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton *button = new QPushButton;
    QObject *object = button;

    button->setDown(true);
    object->setProperty("down", true);

    QVariant value = object->property("down");

    return app.exec();
}