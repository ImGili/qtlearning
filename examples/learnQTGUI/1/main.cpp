#include <QtGui>
#include <QRasterWindow>
#include "rasterwindow.h"

int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);

    RasterWindow rasterwindow;
    rasterwindow.show();

    return app.exec();
}