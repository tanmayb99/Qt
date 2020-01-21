#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonAst_clicked();

    void on_buttonHyCyc_clicked();

    void on_buttonCyc_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
