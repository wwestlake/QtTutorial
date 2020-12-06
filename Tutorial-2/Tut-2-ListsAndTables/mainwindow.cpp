#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTableWidgetItem>

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


void MainWindow::on_add_to_list_btn_clicked()
{
    QString item = ui->item_text->text();
    if (item.length() > 0)
    {
        ui->items_list->addItem(item);
    }

}

void MainWindow::on_add_user_btn_clicked()
{
    QTableWidgetItem * fname = new QTableWidgetItem(
      ui->first_name->text()
    );
    QTableWidgetItem * lname = new QTableWidgetItem(
      ui->last_name->text()
    );
    if (row >= ui->users_table->rowCount())
    {
        ui->users_table->insertRow(row);
    }


    ui->users_table->setItem(row, 0, fname);
    ui->users_table->setItem(row, 1, lname);


    row++;
}
