#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "helloworld.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void get_new_message();

private slots:
    void on_hello_btn_clicked();
    void new_message(QString message);

private:
    Ui::MainWindow *ui;
    HelloWorld _hello_world;
};
#endif // MAINWINDOW_H
