/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *add_to_list_btn;
    QListWidget *items_list;
    QLineEdit *item_text;
    QTableWidget *users_table;
    QPushButton *add_user_btn;
    QLabel *label;
    QLineEdit *first_name;
    QLabel *label_2;
    QLineEdit *last_name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1069, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        add_to_list_btn = new QPushButton(centralwidget);
        add_to_list_btn->setObjectName(QString::fromUtf8("add_to_list_btn"));
        add_to_list_btn->setGeometry(QRect(460, 70, 89, 25));
        items_list = new QListWidget(centralwidget);
        items_list->setObjectName(QString::fromUtf8("items_list"));
        items_list->setGeometry(QRect(40, 110, 521, 411));
        item_text = new QLineEdit(centralwidget);
        item_text->setObjectName(QString::fromUtf8("item_text"));
        item_text->setGeometry(QRect(40, 70, 391, 25));
        users_table = new QTableWidget(centralwidget);
        if (users_table->columnCount() < 2)
            users_table->setColumnCount(2);
        if (users_table->rowCount() < 20)
            users_table->setRowCount(20);
        users_table->setObjectName(QString::fromUtf8("users_table"));
        users_table->setGeometry(QRect(570, 260, 451, 261));
        users_table->setRowCount(20);
        users_table->setColumnCount(2);
        users_table->horizontalHeader()->setMinimumSectionSize(67);
        add_user_btn = new QPushButton(centralwidget);
        add_user_btn->setObjectName(QString::fromUtf8("add_user_btn"));
        add_user_btn->setGeometry(QRect(590, 210, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(590, 100, 111, 17));
        first_name = new QLineEdit(centralwidget);
        first_name->setObjectName(QString::fromUtf8("first_name"));
        first_name->setGeometry(QRect(600, 120, 301, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(590, 150, 151, 17));
        last_name = new QLineEdit(centralwidget);
        last_name->setObjectName(QString::fromUtf8("last_name"));
        last_name->setGeometry(QRect(600, 170, 301, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1069, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        add_to_list_btn->setText(QApplication::translate("MainWindow", "Add to List", nullptr));
        add_user_btn->setText(QApplication::translate("MainWindow", "Add User", nullptr));
        label->setText(QApplication::translate("MainWindow", "First Name", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Last Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
