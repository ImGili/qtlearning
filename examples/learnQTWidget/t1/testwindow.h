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
private slots:
    void on_push_button_clicked();
private:
    Ui::MainWindow *ui;
};
