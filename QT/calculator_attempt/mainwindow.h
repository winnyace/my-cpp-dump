#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button8_clicked();

    void on_button7_clicked();

    void on_button9_clicked();

    void on_button0_clicked();

    void on_button_minus_clicked();

    void on_button_plus_clicked();

    void on_button_equal_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
