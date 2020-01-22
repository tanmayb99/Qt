#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->spinScale->setValue(this->ui->renderArea->scale());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_ui()
{
    this->ui->renderArea->repaint();
    this->ui->spinScale->setValue(this->ui->renderArea->scale());
    this->ui->spinInterval->setValue(this->ui->renderArea->intervalLength());
    this->ui->spinCount->setValue(this->ui->renderArea->stepCount());
}

void MainWindow::on_buttonAstroid_clicked()
{
    // change background color for render area
    // by adding a function to change the background color
    this->ui->renderArea->setShape(RenderArea::Astroid);
    this->ui->renderArea->setBackgroundColor(Qt::blue);
    update_ui();
}

void MainWindow::on_buttonHyCyc_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HypoCycloid);
    this->ui->renderArea->setBackgroundColor(Qt::blue);
    update_ui();
}

void MainWindow::on_buttonCyc_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Cycloid);
    this->ui->renderArea->setBackgroundColor(Qt::blue);
    update_ui();
}

void MainWindow::on_buttonLine_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Line);
    this->ui->renderArea->setBackgroundColor(Qt::blue);
    update_ui();
}

void MainWindow::on_buttonHuygens_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HuygensCycloid);
    this->ui->renderArea->repaint();
    update_ui ();
}


void MainWindow::on_buttonCircle_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Circle);
    this->ui->renderArea->repaint();
    update_ui ();
}

void MainWindow::on_buttonEllipse_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Ellipse);
    this->ui->renderArea->repaint();
    update_ui ();
}

void MainWindow::on_buttonFancy_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Fancy);
    this->ui->renderArea->repaint();
    update_ui ();
}

void MainWindow::on_buttonStarfish_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Starfish);
    this->ui->renderArea->repaint();
    update_ui ();
}

void MainWindow::on_buttonCloud_clicked()
{
    this->ui->renderArea->setShape(RenderArea::CloudA);
    this->ui->renderArea->repaint();
    update_ui ();
}

void MainWindow::on_buttonCloud2_clicked()
{
    this->ui->renderArea->setShape(RenderArea::CloudB);
    this->ui->renderArea->repaint();
    update_ui ();
}

void MainWindow::on_spinScale_valueChanged(double scale)
{
    this->ui->renderArea->setScale (scale);
}

void MainWindow::on_spinCount_valueChanged(int count)
{
    this->ui->renderArea->setStepCount (count);
}

void MainWindow::on_spinInterval_valueChanged(double length)
{
    this->ui->renderArea->setIntervalLength (length);
}

void MainWindow::on_buttonBackground_clicked()
{
    QColor color = QColorDialog::getColor(ui->renderArea->backgroundColor(), this, "Select color");
    ui->renderArea->setBackgroundColor(color);
}

void MainWindow::on_buttonLineColor_clicked()
{
    QColor color = QColorDialog::getColor(ui->renderArea->shapeColor(), this, "Select color");
    ui->renderArea->setShapeColor(color);
}

