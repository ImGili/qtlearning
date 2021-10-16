#pragma once
#include<QLCDNumber>
class Digitalclock : public QLCDNumber
{
    Q_OBJECT
public:
    Digitalclock(QWidget* parent = nullptr);

private:
    void showTime();
};