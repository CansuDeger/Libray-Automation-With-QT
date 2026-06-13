/********************************************************************************
** Form generated from reading UI file 'kitaplar.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KITAPLAR_H
#define UI_KITAPLAR_H

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

class Ui_kitaplar
{
public:
    QLabel *label_5;
    QPushButton *kitap_guncelle;
    QPushButton *kitap_sil;
    QPushButton *kitap_kayit;
    QTableView *kitaplar_tablo;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *kitap_no;
    QLineEdit *kitap_isim;
    QLineEdit *stok;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTableView *kitap_odunc_durum;
    QTableView *kitap_oncede_odunc_durum;
    QLabel *label_10;
    QLabel *label_12;

    void setupUi(QDialog *kitaplar)
    {
        if (kitaplar->objectName().isEmpty())
            kitaplar->setObjectName("kitaplar");
        kitaplar->resize(762, 756);
        label_5 = new QLabel(kitaplar);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, -30, 141, 20));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_5->setPalette(palette);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_5->setFont(font);
        kitap_guncelle = new QPushButton(kitaplar);
        kitap_guncelle->setObjectName("kitap_guncelle");
        kitap_guncelle->setGeometry(QRect(560, 270, 111, 41));
        QFont font1;
        font1.setBold(true);
        kitap_guncelle->setFont(font1);
        kitap_sil = new QPushButton(kitaplar);
        kitap_sil->setObjectName("kitap_sil");
        kitap_sil->setGeometry(QRect(460, 340, 131, 41));
        kitap_sil->setFont(font1);
        kitap_kayit = new QPushButton(kitaplar);
        kitap_kayit->setObjectName("kitap_kayit");
        kitap_kayit->setGeometry(QRect(390, 270, 101, 41));
        kitap_kayit->setFont(font1);
        kitaplar_tablo = new QTableView(kitaplar);
        kitaplar_tablo->setObjectName("kitaplar_tablo");
        kitaplar_tablo->setGeometry(QRect(0, 80, 311, 301));
        label = new QLabel(kitaplar);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 101, 20));
        label->setFont(font1);
        layoutWidget = new QWidget(kitaplar);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(430, 100, 261, 141));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        kitap_no = new QLineEdit(layoutWidget);
        kitap_no->setObjectName("kitap_no");
        kitap_no->setEnabled(false);

        verticalLayout_3->addWidget(kitap_no);

        kitap_isim = new QLineEdit(layoutWidget);
        kitap_isim->setObjectName("kitap_isim");

        verticalLayout_3->addWidget(kitap_isim);

        stok = new QLineEdit(layoutWidget);
        stok->setObjectName("stok");

        verticalLayout_3->addWidget(stok);

        layoutWidget_2 = new QWidget(kitaplar);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(330, 100, 87, 141));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        verticalLayout_4->addWidget(label_8);

        label_9 = new QLabel(kitaplar);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(320, 10, 171, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_9->setPalette(palette1);
        label_9->setFont(font);
        kitap_odunc_durum = new QTableView(kitaplar);
        kitap_odunc_durum->setObjectName("kitap_odunc_durum");
        kitap_odunc_durum->setGeometry(QRect(70, 480, 311, 391));
        kitap_oncede_odunc_durum = new QTableView(kitaplar);
        kitap_oncede_odunc_durum->setObjectName("kitap_oncede_odunc_durum");
        kitap_oncede_odunc_durum->setGeometry(QRect(390, 480, 311, 361));
        label_10 = new QLabel(kitaplar);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 440, 291, 20));
        label_10->setFont(font1);
        label_12 = new QLabel(kitaplar);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(390, 440, 361, 20));
        label_12->setFont(font1);

        retranslateUi(kitaplar);

        QMetaObject::connectSlotsByName(kitaplar);
    } // setupUi

    void retranslateUi(QDialog *kitaplar)
    {
        kitaplar->setWindowTitle(QCoreApplication::translate("kitaplar", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("kitaplar", "UYE ISLEMLERI", nullptr));
        kitap_guncelle->setText(QCoreApplication::translate("kitaplar", "Guncelle", nullptr));
        kitap_sil->setText(QCoreApplication::translate("kitaplar", "Sil", nullptr));
        kitap_kayit->setText(QCoreApplication::translate("kitaplar", "Yeni Kayit", nullptr));
        label->setText(QCoreApplication::translate("kitaplar", "Tum Kitaplar:", nullptr));
        label_6->setText(QCoreApplication::translate("kitaplar", "Kitap No:", nullptr));
        label_7->setText(QCoreApplication::translate("kitaplar", "Kitap Isim:", nullptr));
        label_8->setText(QCoreApplication::translate("kitaplar", "Stok:", nullptr));
        label_9->setText(QCoreApplication::translate("kitaplar", "KITAP ISLEMLERI", nullptr));
        label_10->setText(QCoreApplication::translate("kitaplar", "Secilen Kitabin Odunc Alinma Dururmu:", nullptr));
        label_12->setText(QCoreApplication::translate("kitaplar", "Secilen Kitabin Daha Once Odunc Alinma Durumu:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kitaplar: public Ui_kitaplar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITAPLAR_H
