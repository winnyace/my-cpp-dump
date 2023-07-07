#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

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


void MainWindow::on_pushButton_clicked() // shift by one forward
{
    std::string input, output;
    QString qinput = ui->lineEdit->text(), qoutput;
    input = qinput.toStdString();

    for (size_t i = 0; i < input.length(); i++)
    {
        if (input.at(i) >= 'a' && input.at(i) < 'z')
            output += input.at(i) + 1;
        else if (input.at(i) == 'z')
            output += input.at(i)-('z'-'a');
        else
            output += input.at(i);
    }
    qoutput = QString::fromStdString(output);
    QMessageBox::information(this, "", QString("The string shifted by one character forward is: '" + qoutput + "'."));
}


void MainWindow::on_pushButton_2_clicked() // shift by one backward
{
    std::string input, output;
    QString qinput = ui->lineEdit->text(), qoutput;
    input = qinput.toStdString();

    for (size_t i = 0; i < input.length(); i++)
    {
        if (input.at(i) >= 'a' && input.at(i) < 'z')
            output += input.at(i) - 1;
        else if (input.at(i) == 'z')
            output += input.at(i)-('z'-'a');
        else
            output += input.at(i);
    }
    qoutput = QString::fromStdString(output);
    QMessageBox::information(this, "", QString("The string shifted by one character forward is: '" + qoutput + "'."));
}

