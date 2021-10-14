#include<QtWidgets>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // 创建一个滑块控件（如果只有一个控件就是默认顶级）
    QSplitter *splitter = new QSplitter;

    // 创建一个Model
    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());

    // 创建两个View
    QTreeView *tree = new QTreeView(splitter);
    tree->setModel(model);
    tree->setRootIndex(model->index(QDir::currentPath()));

    QListView *list = new QListView(splitter);
    list->setModel(model);
    list->setRootIndex(model->index(QDir::currentPath()));

    splitter->setWindowTitle(u8"两个View使用同一个Model");
    splitter->show();

    return app.exec();
}