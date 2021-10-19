#pragma once
#include<QtGui>
class RasterWindow : public QWindow
{
public:
    explicit RasterWindow(QWindow* parent = nullptr);
    virtual void render(QPainter* painter);

public slots:
    void renderlater();
    void renderNow();
protected:
    bool event(QEvent* event) override;

    void resizeEvent(QResizeEvent* event) override;
    void exposeEvent(QExposeEvent* event) override;
    
private:
    QBackingStore* m_backingStore;
};