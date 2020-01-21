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

    void on_buttonLine_clicked();

    void on_spinScale_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
    void update_ui();
};

#endif // MAINWINDOW_H
