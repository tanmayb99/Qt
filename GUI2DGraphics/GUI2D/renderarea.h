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

    enum ShapeType { Astroid, Cycloid, Hypocycloid };

    void setBackgroundColor (QColor color) {mBackgroundColor = color; } // setter
    QColor backgroundColor () const {return mBackgroundColor;} // getter

    void setShape (ShapeType shape) { mShape = shape; }

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
    ShapeType shape () const { return mShape;}

signals:

public slots:

private:
    QColor mBackgroundColor;
    QColor mShapeColor;
    ShapeType mShape;
};

#endif // RENDERAREA_H
