#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonAst_clicked()
{
    // change background color for render area
    // by adding a function to change the background color
    this->ui->renderArea->setShape(RenderArea::Astroid);
    this->ui->renderArea->setBackgroundColor(Qt::red);
    this->ui->renderArea->repaint();
}

void MainWindow::on_buttonHyCyc_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Hypocycloid);
    this->ui->renderArea->setBackgroundColor(Qt::blue);
    this->ui->renderArea->repaint();
}

void MainWindow::on_buttonCyc_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Cycloid);
    this->ui->renderArea->setBackgroundColor(Qt::yellow);
    this->ui->renderArea->repaint();
}
