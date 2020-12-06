#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), _hello_world(this)
{
    ui->setupUi(this);

    connect(this, &MainWindow::get_new_message, &_hello_world, &HelloWorld::new_message);
    connect(&_hello_world, &HelloWorld::hello_message, this, &MainWindow::new_message);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::new_message(QString message)
{
    ui->message_text->setText(message);
}


void MainWindow::on_hello_btn_clicked()
{
    emit get_new_message();
}
