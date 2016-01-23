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

<<<<<<< HEAD


void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->append("kommunal");

=======
void MainWindow::on_pushButton_3_clicked()
{

}

void MainWindow::on_pushButton_4_clicked()
{
    ui->textBrowser->append("Don't push my buttons!");
>>>>>>> c5722d2c2101a76856e3db4eb53cc9f78a80bf58
}
