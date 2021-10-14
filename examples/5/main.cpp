#include<QtWidgets>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QStringList numbers;
    numbers << "One"
            << "Two"
            << "Three"
            << "Four"
            << "Five";

    QAbstractItemModel *model = new QStringListModel(numbers);

    QListView *view = new QListView();
    view->setModel(model);

    view->show();
    return app.exec();
}