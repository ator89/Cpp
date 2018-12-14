#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionIngreso_triggered();

    void on_pb_login_clicked();

private:
    Ui::MainWindow *ui;
    Login *login;
};

#endif // MAINWINDOW_H
