#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "ui_login.h"


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

void MainWindow::on_actionIngreso_triggered()
{
    login = new Login(this);
    login->show();
}

void MainWindow::on_pb_login_clicked()
{
    login = new Login(this);
    login->show();
}
