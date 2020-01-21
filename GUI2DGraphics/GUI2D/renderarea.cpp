#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor (0, 255 , 0), // green
    mShapeColor (255, 255, 255) // white
{}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const
{
    return QSize(400, 200);
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setBrush(mBackgroundColor);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(mShapeColor);

    switch (mShape) {

    case Astroid:
        break;

    case Cycloid:
        break;

    case Hypocycloid:
        break;

    default:
        break;
    }

    // drawing area
    painter.drawRect(this->rect());
    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());
}
