#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add_to_list_btn_clicked();

    void on_add_user_btn_clicked();

private:
    Ui::MainWindow *ui;
    int row = 0;
};
#endif // MAINWINDOW_H
