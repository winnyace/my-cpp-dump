#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_pushButton_2_clicked()
{
    QString test;
    bool ok;
    do
    {
        test = QInputDialog::getText(this, "Give a number", "Type a number in the input box below.");
        max_limit = test.toInt(&ok, 10);
    } while (!(ok == true));
}

