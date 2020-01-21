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
    return QSize(400, 400);
}

QSize RenderArea::sizeHint() const
{
    return QSize(400, 400);
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
        mScale = 4;
        mIntervalLength = 6 * M_PI;
        mStepCount = 128;
        break;

    case HypoCycloid:
        mScale = 15;
        mIntervalLength = 2 * M_PI;
        mStepCount = 256;
        break;

    case Line:
        mScale = 100;
        mIntervalLength = 1;
        mStepCount = 128;
        break;

    default:
        break;
    }
}

QPointF RenderArea::compute(float t)
{
    switch (mShape) {

    case Astroid:
        return compute_astroid(t);
        break;

    case Cycloid:
        return compute_cycloid(t);
        break;

    case HypoCycloid:
        return compute_hypoCycloid(t);
        break;

    case Line:
        return compute_line(t);
        break;

    default:
        break;
    }
    return QPointF(0, 0);
}

QPointF RenderArea::compute_astroid(float t)
{
    // compute astroid values
    float cos_t = cos (t);
    float sin_t = sin (t);
    float x = 2 * pow(cos_t, 3);
    float y = 2 * pow(sin_t, 3);
    return QPointF (x, y);
}

QPointF RenderArea::compute_cycloid(float t)
{
    // compute cycloid values
    return QPointF
            (
                1.5 * (1 - cos (t)), //X
                1.5 * (t - sin (t))  //Y
            );
}

QPointF RenderArea::compute_hypoCycloid(float t)
{
    // compute hypoCycloid values
    return QPointF
            (
                1.5 * (2 * cos (t) + cos (2 * t)), //X
                1.5 * (2 * sin (t) - sin (2 * t))  //Y
            );
}

QPointF RenderArea::compute_line(float t)
{
    // compute parametric line values
    return QPointF
            (
                (1 - t), //X
                (1 - t)  //Y
            );
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
    QPointF prevPoint = compute(0);
    QPoint prevPixel;
    prevPixel.setX(prevPoint.x() * mScale + center.x());
    prevPixel.setY(prevPoint.y() * mScale + center.y());

    int mStepCount = 256;
    float mScale = 40;
    float intervalLength = 2 * M_PI;
    float step = mIntervalLength / mStepCount;

    for (float t = 0; t < intervalLength; t += step){
        QPointF point = compute (t);

        QPoint pixel;
        pixel.setX(point.x() * mScale + center.x());
        pixel.setY(point.y() * mScale + center.y());

//        painter.drawPoint(pixel);
        painter.drawLine(pixel, prevPixel);
        prevPixel = pixel;
    }
}
