/********************************************************************************
** Form generated from reading UI file 'uyeler.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UYELER_H
#define UI_UYELER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uyeler
{
public:
    QTableView *uyeler_tablo;
    QLabel *label;
    QLabel *label_5;
    QPushButton *yeni_kayit;
    QPushButton *guncelle;
    QPushButton *sil;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *uyeler_no;
    QLineEdit *uyeler_isim;
    QLineEdit *uyeler_soysism;

    void setupUi(QDialog *uyeler)
    {
        if (uyeler->objectName().isEmpty())
            uyeler->setObjectName("uyeler");
        uyeler->resize(699, 597);
        uyeler_tablo = new QTableView(uyeler);
        uyeler_tablo->setObjectName("uyeler_tablo");
        uyeler_tablo->setGeometry(QRect(10, 120, 311, 361));
        label = new QLabel(uyeler);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 90, 101, 20));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label_5 = new QLabel(uyeler);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 20, 141, 20));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_5->setPalette(palette);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_5->setFont(font1);
        yeni_kayit = new QPushButton(uyeler);
        yeni_kayit->setObjectName("yeni_kayit");
        yeni_kayit->setGeometry(QRect(400, 370, 101, 41));
        yeni_kayit->setFont(font);
        guncelle = new QPushButton(uyeler);
        guncelle->setObjectName("guncelle");
        guncelle->setGeometry(QRect(560, 370, 111, 41));
        guncelle->setFont(font);
        sil = new QPushButton(uyeler);
        sil->setObjectName("sil");
        sil->setGeometry(QRect(460, 440, 131, 41));
        sil->setFont(font);
        widget = new QWidget(uyeler);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(330, 150, 87, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        widget1 = new QWidget(uyeler);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(420, 150, 261, 141));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        uyeler_no = new QLineEdit(widget1);
        uyeler_no->setObjectName("uyeler_no");
        uyeler_no->setEnabled(false);

        verticalLayout_2->addWidget(uyeler_no);

        uyeler_isim = new QLineEdit(widget1);
        uyeler_isim->setObjectName("uyeler_isim");

        verticalLayout_2->addWidget(uyeler_isim);

        uyeler_soysism = new QLineEdit(widget1);
        uyeler_soysism->setObjectName("uyeler_soysism");

        verticalLayout_2->addWidget(uyeler_soysism);


        retranslateUi(uyeler);

        QMetaObject::connectSlotsByName(uyeler);
    } // setupUi

    void retranslateUi(QDialog *uyeler)
    {
        uyeler->setWindowTitle(QCoreApplication::translate("uyeler", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("uyeler", "Tum Uyeler:", nullptr));
        label_5->setText(QCoreApplication::translate("uyeler", "UYE ISLEMLERI", nullptr));
        yeni_kayit->setText(QCoreApplication::translate("uyeler", "Yeni Kayit", nullptr));
        guncelle->setText(QCoreApplication::translate("uyeler", "Guncelle", nullptr));
        sil->setText(QCoreApplication::translate("uyeler", "Sil", nullptr));
        label_2->setText(QCoreApplication::translate("uyeler", "Uye No", nullptr));
        label_3->setText(QCoreApplication::translate("uyeler", "Uye Isim", nullptr));
        label_4->setText(QCoreApplication::translate("uyeler", "Uye Soyisim", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uyeler: public Ui_uyeler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UYELER_H
