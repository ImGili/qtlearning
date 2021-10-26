#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class testWindow : public QMainWindow
{
    Q_OBJECT

public:
    testWindow(QWidget *parent = nullptr);
    ~testWindow();
private:
    Ui::MainWindow *ui;
};
