#include"rasterwindow.h"
RasterWindow::RasterWindow(QWindow* parent)
    : QWindow(parent)
    , m_backingStore(new QBackingStore(this))
{
    // (100, 100)窗口左上角坐标，长： 200 宽： 200
    setGeometry(100, 100, 200, 200);
}

void RasterWindow::render(QPainter* painter)
{
    painter->drawText(QRect(0,0, width(), height()), Qt::AlignCenter, QStringLiteral("QWindow"));
}

void RasterWindow::renderNow()
{
    if (!isExposed())
    {
        return;
    }
    
    QRect rect(0, 0, width(), height());
    m_backingStore->beginPaint(rect);

    QPaintDevice* device = m_backingStore->paintDevice();
    QPainter painter(device);

    painter.fillRect(0, 0, width(), height(), QGradient::NightFade);
    render(&painter);
    painter.end();

    m_backingStore->endPaint();
    m_backingStore->flush(rect);
}

void RasterWindow::renderlater()
{
    requestUpdate();
}

bool RasterWindow::event(QEvent* event)
{
    if (event->type() == QEvent::UpdateRequest)
    {
        renderlater();
        return true;
    }

    // 老子处理不了，交给老爸处理
    return QWindow::event(event);
}

void RasterWindow::exposeEvent(QExposeEvent* event)
{
    if (isExposed())
    {
        renderNow();
    }
}

void RasterWindow::resizeEvent(QResizeEvent* event)
{
    m_backingStore->resize(event->size());
}