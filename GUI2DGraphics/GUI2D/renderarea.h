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

    void setBackgroundColor(QColor color) {mBackgroundColor = color; } // setter
    QColor backgroundColor() const {return mBackgroundColor;} // getter

    void setShapeColor(QColor color) { mPen.setColor(color); }
    QColor shapeColor() const { return mPen.color(); }

    void setShape (ShapeType shape) { mShape = shape; on_shape_changed();}
    ShapeType shape() const { return mShape;}

    void setScale(float scale) { mScale = scale; repaint(); }
    float scale() const { return mScale; }

    void setIntervalLength(float length) { mIntervalLength = length; repaint();}
    float intervalLength() const { return mIntervalLength; }

    void setStepCount(int count) { mStepCount = count; repaint();}
    float stepCount() const { return mStepCount; }

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:
    QColor mBackgroundColor;
//    QColor mShapeColor;
    QPen mPen;

    ShapeType mShape;

    float mIntervalLength;
    float mScale;
    int mStepCount;

    void on_shape_changed();

    QPointF compute(float t); // dispatch function based on mShape's type
    QPointF computing_astroid (float t);
    QPointF computing_cycloid (float t);
    QPointF computing_huygens (float t);
    QPointF computing_hypoCycloid (float t);
    QPointF computing_line (float t);
    QPointF computing_circle(float t);
    QPointF computing_ellipse(float t);
    QPointF computing_fancy(float t);
    QPointF computing_starfish(float t);
    QPointF computing_cloudA (float t);
    QPointF compute_cloudB (float t);
    QPointF computing_cloud_with_sign (float t, float sign);
};

#endif // RENDERAREA_H
