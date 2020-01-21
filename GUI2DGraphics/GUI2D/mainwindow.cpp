#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

void MainWindow::on_buttonAst_clicked()
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



void MainWindow::on_spinScale_valueChanged(double scale)
{
    this->ui->renderArea->setScale (scale);
}
