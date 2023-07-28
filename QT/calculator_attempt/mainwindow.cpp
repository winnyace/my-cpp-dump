#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include <string>
#include <vector>

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



void MainWindow::on_button1_clicked()
{
    ui->lineEdit->insert("1");
}

void MainWindow::on_button2_clicked()
{
    ui->lineEdit->insert("2");
}


void MainWindow::on_button3_clicked()
{
    ui->lineEdit->insert("3");
}


void MainWindow::on_button4_clicked()
{
    ui->lineEdit->insert("4");
}


void MainWindow::on_button5_clicked()
{
    ui->lineEdit->insert("5");
}


void MainWindow::on_button6_clicked()
{
    ui->lineEdit->insert("6");
}

void MainWindow::on_button7_clicked()
{
    ui->lineEdit->insert("7");
}

void MainWindow::on_button8_clicked()
{
    ui->lineEdit->insert("8");
}


void MainWindow::on_button9_clicked()
{
    ui->lineEdit->insert("9");
}


void MainWindow::on_button0_clicked()
{
    ui->lineEdit->insert("0");
}


void MainWindow::on_button_minus_clicked()
{
    ui->lineEdit->insert("+");
}


void MainWindow::on_button_plus_clicked()
{
    ui->lineEdit->insert("-");
}


void MainWindow::on_button_equal_clicked()
{
    QString input = ui->lineEdit->text();
    std::string s = input.toStdString(), output;
    std::vector<int> numbers;
    std::vector<char> operations;
    int n = 0;
    char op[] = "+-";

    for (size_t i = 0; i < s.length(); i++)
    {
        if (s.at(i) >= '0' && s.at(i) <= '9')
        {
            if (numbers.empty() == false)
            {
                numbers.pop_back();
                n = n * 10 + (s.at(i) - '0');
                numbers.push_back(n);
            }
            else
            {
                n = n * 10 + (s.at(i) - '0');
                numbers.push_back(n);
            }
        }
        else
        {
            for (int j = 0; j < 2; j++)
                if (s.at(i) == op[j])
                    operations.push_back(op[j]);
        }
    }
    for (auto& i : operations)
    {

    }
}

