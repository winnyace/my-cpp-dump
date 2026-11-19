#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include <string>
#include <array>
#include <random>
#include <QString>

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

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->clear();

    std::random_device r_dev;
    std::mt19937 rng(r_dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist5(0, 4);

    std::array<std::string, 5> a = {"Apple", "Banana", "Peach", "Watermelon", "Cherries"};

    QString output = QString::fromStdString(a.at(dist5(rng)));

    ui->lineEdit->setText(output);
}

