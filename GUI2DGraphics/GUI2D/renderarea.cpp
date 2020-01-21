#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>

#include "math.h"

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor (0, 255 , 0), // green
    mShapeColor (255, 255, 255), // white
    mShape (Astroid)
{
    on_shape_changed();
}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const
{
    return QSize(400, 200);
}

void RenderArea::on_shape_changed()
{
    switch (mShape) {

    case Astroid:
        // load Astroid values
        mScale = 40;
        mIntervalLength = 2 * M_PI;
        mStepCount = 256;
        break;

    case Cycloid:
        break;

    case Hypocycloid:
        break;

    default:
        break;
    }
}

QPointF RenderArea::compute_astroid(float t)
{
    // compute astroid function here
    float cos_t = cos (t);
    float sin_t = sin (t);
    float x = 2 * pow(cos_t, 3);
    float y = 2 * pow(sin_t, 3);
    return QPointF (x, y);
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setBrush(mBackgroundColor);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(mShapeColor);

    // drawing area
    painter.drawRect(this->rect());
//    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());

    QPoint center = this->rect().center();
    int mStepCount = 256;
    float mScale = 40;
    float intervalLength = 2 * M_PI;
    float step = mIntervalLength / mStepCount;
    for (float t = 0; t < intervalLength; t += step){
        QPointF point = compute_astroid (t);

        QPoint pixel;
        pixel.setX(point.x() * mScale + center.x());
        pixel.setY(point.y() * mScale + center.y());

        painter.drawPoint(pixel);
    }
}
