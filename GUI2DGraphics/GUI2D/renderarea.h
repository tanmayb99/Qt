#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    enum ShapeType { Astroid, Cycloid, HypoCycloid, Line };

    void setBackgroundColor(QColor color) {mBackgroundColor = color; } // setter
    QColor backgroundColor() const {return mBackgroundColor;} // getter

    void setShapeColor(QColor color) {mShapeColor = color; }
    QColor shapeColor() const {return mShapeColor;}

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
    QColor mShapeColor;
    ShapeType mShape;
    QPointF compute(float t); // dispatch function based on mShape's type
    QPointF compute_astroid (float t);
    QPointF compute_cycloid (float t);
    QPointF compute_hypoCycloid (float t);
    QPointF compute_line (float t);

    float mIntervalLength;
    float mScale;
    int mStepCount;
    void on_shape_changed();
};

#endif // RENDERAREA_H
