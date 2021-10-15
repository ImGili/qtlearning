#include<QtWidgets>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    QLabel *label = new QLabel(
        QApplication::translate(u8"windowlayout", u8"Name: "));
    QLineEdit *edit = new QLineEdit();

    QHBoxLayout *layout = new QHBoxLayout();

    layout->addWidget(label);
    layout->addWidget(edit);

    window.setLayout(layout);
    window.setWindowTitle(
        QApplication::translate(u8"windowlayout", u8"Window layout"));
    window.show();
    return app.exec();
}