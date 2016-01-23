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


void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->append("kommunal");
}

void MainWindow::on_pushButton_3_clicked()
{
    IsaksClass isak;

    QString qs = isak.Text();

    for (int i = 0; i < isak.Number(); i++)
    {
        ui->textBrowser->append(qs);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->textBrowser->append("Don't push my buttons!");
}
