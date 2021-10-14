#include <QtWidgets>
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

    QListView *firstView = new QListView();
    QListView *secondView = new QListView();
    firstView->setModel(model);
    secondView->setModel(model);

    firstView->show();
    secondView->show();
    return app.exec();
}