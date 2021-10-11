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

// Model/View模型简单案例
namespace glx0104
{
    int main(int argc, char *argv[])
    {
    QApplication app(argc, argv);
    
    // 创建一个滑块控件（如果只有一个控件就是默认顶级）
    QSplitter* splitter = new QSplitter;

    // 创建一个Model
    QFileSystemModel* model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());

    // 创建两个View
    QTreeView* tree = new QTreeView(splitter);
    tree->setModel(model);
    tree->setRootIndex(model->index(QDir::currentPath()));

    QListView* list = new QListView(splitter);
    list->setModel(model);
    list->setRootIndex(model->index(QDir::currentPath()));

    splitter->setWindowTitle("两个View使用同一个Model");
    splitter->show();

    return app.exec();
    }
}

// 使用Model
namespace glx0105
{
    int main(int argc, char *argv[])
    {
    QApplication app(argc, argv);
    
    QStringList numbers;
    numbers << "One" << "Two" << "Three" << "Four" << "Five";

    QAbstractItemModel *model = new QStringListModel(numbers);

    QListView* view = new QListView();
    view->setModel(model);

    view->show();
    return app.exec();

    }
}

// 多个View使用同一个Model
namespace glx0106
{
    int main(int argc, char *argv[])
    {
    QApplication app(argc, argv);
    
    QStringList numbers;
    numbers << "One" << "Two" << "Three" << "Four" << "Five";

    QAbstractItemModel *model = new QStringListModel(numbers);

    QListView* firstView = new QListView();
    QListView* secondView = new QListView();
    firstView->setModel(model);
    secondView->setModel(model);

    firstView->show();
    secondView->show();
    return app.exec();
    
    }
}
// 多个View使用同一个SelectModel
namespace glx0107
{
    int main(int argc, char *argv[])
    {
    QApplication app(argc, argv);
    
    // 创建一个滑块控件（如果只有一个控件就是默认顶级）
    QSplitter* splitter = new QSplitter;

    // 创建一个Model
    QFileSystemModel* model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());

    // 创建两个View
    QTreeView* tree = new QTreeView(splitter);
    tree->setModel(model);
    tree->setRootIndex(model->index(QDir::currentPath()));

    QListView* list = new QListView(splitter);
    list->setModel(model);
    list->setRootIndex(model->index(QDir::currentPath()));
    list->setSelectionModel(tree->selectionModel());
    splitter->setWindowTitle("两个View使用同一个Model");
    splitter->show();

    return app.exec();
    }
}