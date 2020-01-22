#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>

#include "math.h"

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    m_BackgroundColor (0, 255 , 0), // green
//    mShapeColor (255, 255, 255), // white
    m_Pen (Qt::white),
    m_Shape (Astroid)
{
    m_Pen.setWidth(2);
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
    switch (m_Shape) {

    case Astroid:
        // loading Astroid values
        m_Scale = 40;
        m_IntervalLength = 2 * M_PI;
        m_StepCount = 256;
        break;

    case Cycloid:
        m_Scale = 4;
        m_IntervalLength = 6 * M_PI;
        m_StepCount = 128;
        break;

    case HypoCycloid:
        m_Scale = 15;
        m_IntervalLength = 2 * M_PI;
        m_StepCount = 256;
        break;

    case Line:
        m_Scale = 100;
        m_IntervalLength = 1;
        m_StepCount = 128;
        break;

    case HuygensCycloid:
        m_Scale = 12;
        m_IntervalLength = 4 * M_PI;
        m_StepCount = 256;
        break;

    case Circle:
        m_Scale = 165;
        m_IntervalLength = 2 * M_PI;
        m_StepCount = 128;
        break;

    case Ellipse:
        m_Scale = 75;
        m_IntervalLength = 2 * M_PI;
        m_StepCount = 128;
        break;

    case Fancy:
        m_Scale = 10;
        m_IntervalLength = 12 * M_PI;
        m_StepCount = 512;
        break;

    case Starfish:
        m_Scale = 25;
        m_IntervalLength = 6 * M_PI;
        m_StepCount = 256;
        break;

    case CloudA:
        m_Scale = 10;
        m_IntervalLength = 28 * M_PI;
        m_StepCount = 128;
        break;

    case CloudB:
        m_Scale = 10;
        m_IntervalLength = 28 * M_PI;
        m_StepCount = 128;
        break;

    default:
        break;
    }
}

QPointF RenderArea::compute(float t)
{
    switch (m_Shape) {

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
        return computing_random(t);
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

QPointF RenderArea::computing_random(float t)
{
    float a = 16;
    float b = 5;

    float x = a * cos (t) + b * cos (2 * a / b * t);
    float y = a * sin (t) - b * sin (a / b * 2 * t);

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
    painter.setBrush(m_BackgroundColor);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(m_Pen);

    // drawing area
    painter.drawRect(this->rect());
//    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());

    QPoint center = this->rect().center();
    QPointF prevPoint = compute(0);
    QPoint prevPixel;
    prevPixel.setX(prevPoint.x() * m_Scale + center.x());
    prevPixel.setY(prevPoint.y() * m_Scale + center.y());

    float step = m_IntervalLength / m_StepCount;

    for (float t = 0; t < m_IntervalLength; t += step){
        QPointF point = compute (t);

        QPoint pixel;
        pixel.setX(point.x() * m_Scale + center.x());
        pixel.setY(point.y() * m_Scale + center.y());

//        painter.drawPoint(pixel);
        painter.drawLine(pixel, prevPixel);
        prevPixel = pixel;
    }

    QPointF point = compute (m_IntervalLength);
    QPoint pixel;
    pixel.setX(point.x() * m_Scale + center.x());
    pixel.setY(point.y() * m_Scale + center.y());
    painter.drawLine(pixel, prevPixel);
}
