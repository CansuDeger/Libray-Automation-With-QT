/********************************************************************************
** Form generated from reading UI file 'odunc_alma.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ODUNC_ALMA_H
#define UI_ODUNC_ALMA_H

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

class Ui_odunc_alma
{
public:
    QTableView *tableView_1;
    QTableView *tableView_2;
    QTableView *tableView_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QDateEdit *dateEdit;

    void setupUi(QDialog *odunc_alma)
    {
        if (odunc_alma->objectName().isEmpty())
            odunc_alma->setObjectName("odunc_alma");
        odunc_alma->resize(695, 768);
        tableView_1 = new QTableView(odunc_alma);
        tableView_1->setObjectName("tableView_1");
        tableView_1->setGeometry(QRect(10, 130, 256, 261));
        tableView_2 = new QTableView(odunc_alma);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(380, 130, 256, 271));
        tableView_3 = new QTableView(odunc_alma);
        tableView_3->setObjectName("tableView_3");
        tableView_3->setGeometry(QRect(390, 460, 256, 281));
        label_4 = new QLabel(odunc_alma);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 100, 111, 20));
        QFont font;
        font.setBold(true);
        label_4->setFont(font);
        label_5 = new QLabel(odunc_alma);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(450, 90, 131, 20));
        label_5->setFont(font);
        label_6 = new QLabel(odunc_alma);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 10, 251, 20));
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
        label_7 = new QLabel(odunc_alma);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(360, 420, 261, 20));
        label_7->setFont(font);
        pushButton = new QPushButton(odunc_alma);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 650, 111, 29));
        pushButton->setFont(font);
        widget = new QWidget(odunc_alma);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 500, 126, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        widget1 = new QWidget(odunc_alma);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(150, 500, 191, 131));
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


        retranslateUi(odunc_alma);

        QMetaObject::connectSlotsByName(odunc_alma);
    } // setupUi

    void retranslateUi(QDialog *odunc_alma)
    {
        odunc_alma->setWindowTitle(QCoreApplication::translate("odunc_alma", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("odunc_alma", "TUM UYELER:", nullptr));
        label_5->setText(QCoreApplication::translate("odunc_alma", "TUM KITAPLAR:", nullptr));
        label_6->setText(QCoreApplication::translate("odunc_alma", "ODUNC ALMA ISLEMLERI", nullptr));
        label_7->setText(QCoreApplication::translate("odunc_alma", "ODUNC ALINAN KITAPALR LISTESI:", nullptr));
        pushButton->setText(QCoreApplication::translate("odunc_alma", "Odunc Al", nullptr));
        label->setText(QCoreApplication::translate("odunc_alma", "Uye No:", nullptr));
        label_2->setText(QCoreApplication::translate("odunc_alma", "Kitap No:", nullptr));
        label_3->setText(QCoreApplication::translate("odunc_alma", "Odunc Alma Tarihi:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class odunc_alma: public Ui_odunc_alma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ODUNC_ALMA_H
