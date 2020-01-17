// window.cpp

#include <QtWidgets>
#include "window.h"
#include "ui_window.h"

#include "myglwidget.h"

Window::Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);

    connect(ui->myGLWidget, SIGNAL(xRotationChanged(int)), ui->rotationXSlider, SLOT(setValue(int)));
    connect(ui->myGLWidget, SIGNAL(yRotationChanged(int)), ui->rotationYSlider, SLOT(setValue(int)));
    connect(ui->myGLWidget, SIGNAL(zRotationChanged(int)), ui->rotationZSlider, SLOT(setValue(int)));
}

Window::~Window()
{
    delete ui;
}

void Window::keyPressEvent(QKeyEvent *e)
{
    if (e->key() == Qt::Key_Escape)
        close();
    else
        QWidget::keyPressEvent(e);
}
