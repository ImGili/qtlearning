#include"rasterwindow.h"

int main(int argc, char* argcv[])
{
    QGuiApplication app(argc, argcv);

    RasterWindow window;
    window.show();

    return app.exec();
}