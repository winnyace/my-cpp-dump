#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QMainWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_returnPressed()
{
    QString input = ui->lineEdit->text();
    bool ok;
    int num = input.toInt(&ok, 10);
    QMessageBox msg;
    if (ok == true) {
        if (num % 3 == 0 && num % 5 == 0)
            msg.information(this, "", "Fizzbuzz");
        else if (num % 3 == 0)
            msg.information(this, "", "Fizz");
        else if (num % 5 == 0)
            msg.information(this, "", "Buzz");
        else
            msg.information(this, "", input);
    }
    else
        QMessageBox::critical(this, "Failed", "Failed to read a number from the input");
}


void MainWindow::on_pushButton_clicked(bool checked)
{
    QString input = ui->lineEdit->text();
    bool ok;
    int num = input.toInt(&ok, 10);
    QMessageBox msg;
    if (ok == true) {
        if (num % 3 == 0 && num % 5 == 0)
            msg.information(this, "", "Fizzbuzz");
        else if (num % 3 == 0)
            msg.information(this, "", "Fizz");
        else if (num % 5 == 0)
            msg.information(this, "", "Buzz");
        else
            msg.information(this, "", input);
    }
    else
        QMessageBox::critical(this, "Failed", "Failed to read a number from the input");
}

