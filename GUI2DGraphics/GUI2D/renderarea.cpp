#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>

#include "math.h"

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor (0, 255 , 0), // green
//    mShapeColor (255, 255, 255), // white
    mPen (Qt::white),
    mShape (Astroid)
{
    mPen.setWidth(2);
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

    case HuygensCycloid:
        mScale = 12;
        mIntervalLength = 4 * M_PI;
        mStepCount = 256;
        break;

    case Circle:
        mScale = 165;
        mIntervalLength = 2 * M_PI;
        mStepCount = 128;
        break;

    case Ellipse:
        mScale = 75;
        mIntervalLength = 2 * M_PI;
        mStepCount = 128;
        break;

    case Fancy:
        mScale = 10;
        mIntervalLength = 12 * M_PI;
        mStepCount = 512;
        break;

    case Starfish:
        mScale = 25;
        mIntervalLength = 6 * M_PI;
        mStepCount = 256;
        break;

    case CloudA:
        mScale = 10;
        mIntervalLength = 28 * M_PI;
        mStepCount = 128;
        break;

    case CloudB:
        mScale = 10;
        mIntervalLength = 28 * M_PI;
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
        return computing_astroid(t);
        break;

    case Cycloid:
        return computing_cycloid(t);
        break;

    case HypoCycloid:
        return computing_hypoCycloid(t);
        break;

    case Line:
        return computing_line(t);
        break;

    case HuygensCycloid:
        return computing_huygens(t);
        break;

    case Circle:
        return computing_circle(t);
        break;

    case Ellipse:
        return computing_ellipse(t);
        break;

    case Fancy:
        return computing_fancy(t);
        break;

    case Starfish:
        return computing_starfish(t);
        break;

    case CloudA:
        return computing_cloudA (t);
        break;

    case CloudB:
        return compute_cloudB (t);
        break;

    default:
        break;
    }
    return QPointF(0, 0);
}

QPointF RenderArea::computing_astroid(float t)
{
    // compute astroid values
    float cos_t = cos (t);
    float sin_t = sin (t);
    float x = 2 * pow(cos_t, 3);
    float y = 2 * pow(sin_t, 3);
    return QPointF (x, y);
}

QPointF RenderArea::computing_cycloid(float t)
{
    // compute cycloid values
    return QPointF
            (
                1.5 * (1 - cos (t)), //X
                1.5 * (t - sin (t))  //Y
            );
}

QPointF RenderArea::computing_hypoCycloid(float t)
{
    // compute hypoCycloid values
    return QPointF
            (
                1.5 * (2 * cos (t) + cos (2 * t)), //X
                1.5 * (2 * sin (t) - sin (2 * t))  //Y
            );
}

QPointF RenderArea::computing_line(float t)
{
    // compute parametric line values
    return QPointF
            (
                (1 - t), //X
                (1 - t)  //Y
            );
}

QPointF RenderArea::computing_huygens (float t)
{
    return QPointF (
                4 * (3 * cos (t) - cos (3 * t)),    //  X
                4 * (3 * sin (t) - sin (3 * t))     //  Y
    );
}

QPointF RenderArea::computing_circle(float t)
{
    return QPointF (
        cos (t),
        sin (t)
    );
}

QPointF RenderArea::computing_ellipse(float t)
{
    float a = 2;
    float b = 1;
    return QPointF (
        a * cos (t),
        b * sin (t)
    );
}

QPointF RenderArea::computing_fancy(float t)
{
    float v1 = 15;
    float v2 = 4;

    float x = v1 * cos (t) - v2 * cos (v1 / v2 * t);
    float y = v1 * sin (t) - v2 * sin (v1 / v2 * t);

    return QPointF (x, y);
}

QPointF RenderArea::computing_starfish(float t)
{
    float R = 5;
    float r = 3;
    float d = 5;

    float x = (R - r) * cos (t) + d * cos (t * ((R - r) / r));

    float y = (R - r) * sin (t) - d * sin (t * ((R - r) / r));

    return QPointF (x, y);
}

QPointF RenderArea::computing_cloudA (float t)
{
    return computing_cloud_with_sign(t, -1);
}

QPointF RenderArea::compute_cloudB (float t)
{
    return computing_cloud_with_sign(t, 1);
}

QPointF RenderArea::computing_cloud_with_sign (float t, float sign)
{
    float a = 14;
    float b = 1;

    float x = (a + b) * cos (t * b / a) + sign * b * cos (t * (a + b) / a);
    float y = (a + b) * sin (t * b / a) - b * sin (t * (a + b) / a);

    return QPointF (x, y);
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setBrush(mBackgroundColor);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(mPen);

    // drawing area
    painter.drawRect(this->rect());
//    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());

    QPoint center = this->rect().center();
    QPointF prevPoint = compute(0);
    QPoint prevPixel;
    prevPixel.setX(prevPoint.x() * mScale + center.x());
    prevPixel.setY(prevPoint.y() * mScale + center.y());

    float step = mIntervalLength / mStepCount;

    for (float t = 0; t < mIntervalLength; t += step){
        QPointF point = compute (t);

        QPoint pixel;
        pixel.setX(point.x() * mScale + center.x());
        pixel.setY(point.y() * mScale + center.y());

//        painter.drawPoint(pixel);
        painter.drawLine(pixel, prevPixel);
        prevPixel = pixel;
    }

    QPointF point = compute (mIntervalLength);
    QPoint pixel;
    pixel.setX(point.x() * mScale + center.x());
    pixel.setY(point.y() * mScale + center.y());
    painter.drawLine(pixel, prevPixel);
}
