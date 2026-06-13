/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *uye;
    QLabel *label;
    QPushButton *kitap;
    QPushButton *al;
    QPushButton *ver;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(883, 395);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        uye = new QPushButton(centralwidget);
        uye->setObjectName("uye");
        uye->setGeometry(QRect(80, 140, 83, 91));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 40, 411, 41));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label->setPalette(palette);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);
        kitap = new QPushButton(centralwidget);
        kitap->setObjectName("kitap");
        kitap->setGeometry(QRect(270, 140, 83, 91));
        al = new QPushButton(centralwidget);
        al->setObjectName("al");
        al->setGeometry(QRect(450, 140, 83, 91));
        ver = new QPushButton(centralwidget);
        ver->setObjectName("ver");
        ver->setGeometry(QRect(680, 140, 83, 91));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 260, 101, 20));
        QFont font1;
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 260, 101, 20));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(420, 260, 161, 20));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(640, 260, 201, 20));
        label_5->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 883, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        uye->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "KUTUPHANE OTOMASYONUNA HOSGELDINIZ!", nullptr));
        kitap->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        al->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        ver->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Uye Islemleri", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Kitap islemleri", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Odunc Alma Islmeleri", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Odunc Teslim Etme Islemleri", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
