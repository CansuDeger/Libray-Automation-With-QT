/********************************************************************************
** Form generated from reading UI file 'teslim.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESLIM_H
#define UI_TESLIM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teslim
{
public:
    QTableView *tableView;
    QTableView *tableView_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QDateEdit *dateEdit;

    void setupUi(QDialog *teslim)
    {
        if (teslim->objectName().isEmpty())
            teslim->setObjectName("teslim");
        teslim->resize(908, 537);
        tableView = new QTableView(teslim);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(630, 150, 256, 321));
        tableView_2 = new QTableView(teslim);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(0, 140, 256, 331));
        pushButton = new QPushButton(teslim);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 410, 161, 41));
        QFont font;
        font.setBold(true);
        pushButton->setFont(font);
        label = new QLabel(teslim);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 110, 171, 20));
        label->setFont(font);
        label_2 = new QLabel(teslim);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(630, 120, 211, 20));
        label_2->setFont(font);
        label_6 = new QLabel(teslim);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(310, 30, 321, 20));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_6->setPalette(palette);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_6->setFont(font1);
        widget = new QWidget(teslim);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 215, 145, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        widget1 = new QWidget(teslim);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(430, 210, 191, 161));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_2->addWidget(lineEdit_2);

        dateEdit = new QDateEdit(widget1);
        dateEdit->setObjectName("dateEdit");

        verticalLayout_2->addWidget(dateEdit);


        retranslateUi(teslim);

        QMetaObject::connectSlotsByName(teslim);
    } // setupUi

    void retranslateUi(QDialog *teslim)
    {
        teslim->setWindowTitle(QCoreApplication::translate("teslim", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("teslim", "Teslim Al", nullptr));
        label->setText(QCoreApplication::translate("teslim", "Odunc Alinan Kitapalar:", nullptr));
        label_2->setText(QCoreApplication::translate("teslim", "Teslim Edilen Kitaplar:", nullptr));
        label_6->setText(QCoreApplication::translate("teslim", "ODUN TESLIM ETME ISLEMLERI", nullptr));
        label_3->setText(QCoreApplication::translate("teslim", "Uye No:", nullptr));
        label_4->setText(QCoreApplication::translate("teslim", "Kitap No:", nullptr));
        label_5->setText(QCoreApplication::translate("teslim", "Teslim Edilme Tarihi:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teslim: public Ui_teslim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESLIM_H
