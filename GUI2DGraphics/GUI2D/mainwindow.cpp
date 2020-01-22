#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->spinboxScale->setValue(this->ui->renderingArea->scale());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_ui()
{
    this->ui->renderingArea->repaint();
    this->ui->spinboxScale->setValue(this->ui->renderingArea->scale());
    this->ui->spinboxInterval->setValue(this->ui->renderingArea->intervalLength());
    this->ui->spinboxCount->setValue(this->ui->renderingArea->stepCount());
}

void MainWindow::on_buttonAstroid_clicked()
{
    // change background color for render area
    // by adding a function to change the background color
    this->ui->renderingArea->setShape(RenderArea::Astroid);
    this->ui->renderingArea->setBackgroundColor(Qt::blue);
    update_ui();
}

void MainWindow::on_buttonHypo_clicked()
{
    this->ui->renderingArea->setShape(RenderArea::HypoCycloid);
    this->ui->renderingArea->setBackgroundColor(Qt::blue);
    update_ui();
}

void MainWindow::on_buttonCycloid_clicked()
{
    this->ui->renderingArea->setShape(RenderArea::Cycloid);
    this->ui->renderingArea->setBackgroundColor(Qt::blue);
    update_ui();
}

void MainWindow::on_buttonLine_clicked()
{
    this->ui->renderingArea->setShape(RenderArea::Line);
    this->ui->renderingArea->setBackgroundColor(Qt::blue);
    update_ui();
}

void MainWindow::on_buttonHuygens_clicked()
{
    this->ui->renderingArea->setShape(RenderArea::HuygensCycloid);
    this->ui->renderingArea->repaint();
    update_ui ();
}


void MainWindow::on_buttonCircle_clicked()
{
    this->ui->renderingArea->setShape(RenderArea::Circle);
    this->ui->renderingArea->repaint();
    update_ui ();
}

void MainWindow::on_buttonEllipse_clicked()
{
    this->ui->renderingArea->setShape(RenderArea::Ellipse);
    this->ui->renderingArea->repaint();
    update_ui ();
}

void MainWindow::on_buttonFancy_clicked()
{
    this->ui->renderingArea->setShape(RenderArea::Fancy);
    this->ui->renderingArea->repaint();
    update_ui ();
}

void MainWindow::on_buttonStarfish_clicked()
{
    this->ui->renderingArea->setShape(RenderArea::Starfish);
    this->ui->renderingArea->repaint();
    update_ui ();
}

void MainWindow::on_buttonCloud_clicked()
{
    this->ui->renderingArea->setShape(RenderArea::CloudA);
    this->ui->renderingArea->repaint();
    update_ui ();
}

void MainWindow::on_buttonCloud2_clicked()
{
    this->ui->renderingArea->setShape(RenderArea::CloudB);
    this->ui->renderingArea->repaint();
    update_ui ();
}

void MainWindow::on_spinScale_valueChanged(double scale)
{
    this->ui->renderingArea->setScale (scale);
}

void MainWindow::on_spinCount_valueChanged(int count)
{
    this->ui->renderingArea->setStepCount (count);
}

void MainWindow::on_spinInterval_valueChanged(double length)
{
    this->ui->renderingArea->setIntervalLength (length);
}

void MainWindow::on_buttonBackground_clicked()
{
    QColor color = QColorDialog::getColor(ui->renderingArea->backgroundColor(), this, "Select color");
    ui->renderingArea->setBackgroundColor(color);
}

void MainWindow::on_buttonLineColor_clicked()
{
    QColor color = QColorDialog::getColor(ui->renderingArea->shapeColor(), this, "Select color");
    ui->renderingArea->setShapeColor(color);
}
