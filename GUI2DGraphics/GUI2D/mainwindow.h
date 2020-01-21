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

    void on_buttonCyc_clicked();

    void on_buttonHuygens_clicked();

    void on_buttonHyCyc_clicked();

    void on_buttonLine_clicked();

    void on_spinScale_valueChanged(double arg1);

    void on_spinInterval_valueChanged(double arg1);

    void on_spinCount_valueChanged(int arg1);

    void on_buttonBackground_clicked();

    void on_buttonLineColor_clicked();

    void on_buttonCircle_clicked();

    void on_buttonEllipse_clicked();

    void on_buttonFancy_clicked();

    void on_buttonStarfish_clicked();

    void on_buttonCloud_clicked();

    void on_buttonCloud2_clicked();

    void on_buttonAstroid_clicked();

private:
    void update_ui ();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
