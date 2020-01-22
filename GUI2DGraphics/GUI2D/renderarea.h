#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>
#include <QPen>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = 0);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    enum ShapeType {
        Astroid,
        Cycloid,
        HuygensCycloid,
        HypoCycloid,
        Line,
        Circle,
        Ellipse,
        Fancy,
        Starfish,
        CloudA,
        CloudB
    };

    void setBackgroundColor(QColor color) {m_BackgroundColor = color; } // setter
    QColor backgroundColor() const {return m_BackgroundColor;} // getter

    void setShapeColor(QColor color) { m_Pen.setColor(color); }
    QColor shapeColor() const { return m_Pen.color(); }

    void setShape (ShapeType shape) { m_Shape = shape; on_shape_changed();}
    ShapeType shape() const { return m_Shape;}

    void setScale(float scale) { m_Scale = scale; repaint(); }
    float scale() const { return m_Scale; }

    void setIntervalLength(float length) { m_IntervalLength = length; repaint();}
    float intervalLength() const { return m_IntervalLength; }

    void setStepCount(int count) { m_StepCount = count; repaint();}
    float stepCount() const { return m_StepCount; }

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:
    QColor m_BackgroundColor;
//    QColor mShapeColor;
    QPen m_Pen;

    ShapeType m_Shape;

    float m_IntervalLength;
    float m_Scale;
    int m_StepCount;

    void on_shape_changed();

    QPointF compute(float t); // dispatch function based on mShape's type
    QPointF computing_astroid (float t);
    QPointF computing_cycloid (float t);
    QPointF computing_huygens (float t);
    QPointF computing_hypoCycloid (float t);
    QPointF computing_line (float t);
    QPointF computing_circle(float t);
    QPointF computing_ellipse(float t);
    QPointF computing_random(float t);
    QPointF computing_starfish(float t);
    QPointF computing_cloudA (float t);
    QPointF compute_cloudB (float t);
    QPointF computing_cloud_with_sign (float t, float sign);
};

#endif // RENDERAREA_H
