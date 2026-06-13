/********************************************************************************
** Form generated from reading UI file 'kitapp.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KITAPP_H
#define UI_KITAPP_H

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

class Ui_kitapp
{
public:
    QPushButton *kitap_kayit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *kitap_no_4;
    QLineEdit *kitap_isim_4;
    QLineEdit *stok_4;
    QTableView *kitap_odunc_durum;
    QLabel *label;
    QPushButton *kitap_sil;
    QTableView *kitaplar_tablo;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QPushButton *kitap_guncelle;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QTableView *kitap_oncede_odunc_durum;

    void setupUi(QDialog *kitapp)
    {
        if (kitapp->objectName().isEmpty())
            kitapp->setObjectName("kitapp");
        kitapp->resize(1009, 784);
        kitap_kayit = new QPushButton(kitapp);
        kitap_kayit->setObjectName("kitap_kayit");
        kitap_kayit->setGeometry(QRect(420, 270, 101, 41));
        QFont font;
        font.setBold(true);
        kitap_kayit->setFont(font);
        layoutWidget = new QWidget(kitapp);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(490, 90, 261, 141));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        kitap_no_4 = new QLineEdit(layoutWidget);
        kitap_no_4->setObjectName("kitap_no_4");
        kitap_no_4->setEnabled(false);

        verticalLayout_9->addWidget(kitap_no_4);

        kitap_isim_4 = new QLineEdit(layoutWidget);
        kitap_isim_4->setObjectName("kitap_isim_4");

        verticalLayout_9->addWidget(kitap_isim_4);

        stok_4 = new QLineEdit(layoutWidget);
        stok_4->setObjectName("stok_4");

        verticalLayout_9->addWidget(stok_4);

        kitap_odunc_durum = new QTableView(kitapp);
        kitap_odunc_durum->setObjectName("kitap_odunc_durum");
        kitap_odunc_durum->setGeometry(QRect(50, 450, 311, 271));
        label = new QLabel(kitapp);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 60, 101, 20));
        label->setFont(font);
        kitap_sil = new QPushButton(kitapp);
        kitap_sil->setObjectName("kitap_sil");
        kitap_sil->setGeometry(QRect(510, 340, 131, 41));
        kitap_sil->setFont(font);
        kitaplar_tablo = new QTableView(kitapp);
        kitaplar_tablo->setObjectName("kitaplar_tablo");
        kitaplar_tablo->setGeometry(QRect(10, 90, 311, 301));
        label_9 = new QLabel(kitapp);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(380, 10, 171, 20));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_9->setPalette(palette);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_9->setFont(font1);
        label_10 = new QLabel(kitapp);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(70, 420, 291, 20));
        label_10->setFont(font);
        label_12 = new QLabel(kitapp);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(450, 420, 361, 20));
        label_12->setFont(font);
        kitap_guncelle = new QPushButton(kitapp);
        kitap_guncelle->setObjectName("kitap_guncelle");
        kitap_guncelle->setGeometry(QRect(620, 270, 111, 41));
        kitap_guncelle->setFont(font);
        layoutWidget_2 = new QWidget(kitapp);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(380, 90, 87, 141));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName("label_18");
        label_18->setFont(font);

        verticalLayout_10->addWidget(label_18);

        label_19 = new QLabel(layoutWidget_2);
        label_19->setObjectName("label_19");
        label_19->setFont(font);

        verticalLayout_10->addWidget(label_19);

        label_20 = new QLabel(layoutWidget_2);
        label_20->setObjectName("label_20");
        label_20->setFont(font);

        verticalLayout_10->addWidget(label_20);

        kitap_oncede_odunc_durum = new QTableView(kitapp);
        kitap_oncede_odunc_durum->setObjectName("kitap_oncede_odunc_durum");
        kitap_oncede_odunc_durum->setGeometry(QRect(440, 450, 311, 261));

        retranslateUi(kitapp);

        QMetaObject::connectSlotsByName(kitapp);
    } // setupUi

    void retranslateUi(QDialog *kitapp)
    {
        kitapp->setWindowTitle(QCoreApplication::translate("kitapp", "Dialog", nullptr));
        kitap_kayit->setText(QCoreApplication::translate("kitapp", "Yeni Kayit", nullptr));
        label->setText(QCoreApplication::translate("kitapp", "Tum Kitaplar:", nullptr));
        kitap_sil->setText(QCoreApplication::translate("kitapp", "Sil", nullptr));
        label_9->setText(QCoreApplication::translate("kitapp", "KITAP ISLEMLERI", nullptr));
        label_10->setText(QCoreApplication::translate("kitapp", "Secilen Kitabin Odunc Alinma Dururmu:", nullptr));
        label_12->setText(QCoreApplication::translate("kitapp", "Secilen Kitabin Daha Once Odunc Alinma Durumu:", nullptr));
        kitap_guncelle->setText(QCoreApplication::translate("kitapp", "Guncelle", nullptr));
        label_18->setText(QCoreApplication::translate("kitapp", "Kitap No:", nullptr));
        label_19->setText(QCoreApplication::translate("kitapp", "Kitap Isim:", nullptr));
        label_20->setText(QCoreApplication::translate("kitapp", "Stok:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kitapp: public Ui_kitapp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITAPP_H
