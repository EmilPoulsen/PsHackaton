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
<<<<<<< HEAD
    void on_pushButton_2_clicked();
=======
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_actionExit_program_triggered();
>>>>>>> c5722d2c2101a76856e3db4eb53cc9f78a80bf58

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
