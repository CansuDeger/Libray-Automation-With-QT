//CENNET CANSU DEGER
//23100011023
#include "odunc_alma.h"
#include "ui_odunc_alma.h"

odunc_alma::odunc_alma(QSqlDatabase db,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::odunc_alma)
{
    ui->setupUi(this);
    sorgu=new QSqlQuery(db);
    sorgu1 = new QSqlQuery(db);
    sorgu2 = new QSqlQuery(db);
    listele();
}

odunc_alma::~odunc_alma()
{
    delete ui;
}

void odunc_alma::listele()
{
    sorgu->prepare("select * from uyeler");
    if(!sorgu->exec())
    {
        QMessageBox::critical(this,"Hata!","Uyeler tablosuna erisimde bir hata oldu!");
        return;
    }
    model3=new QSqlQueryModel();
    model3->setQuery(*sorgu);
    ui->tableView_1->setModel(model3);

    sorgu->prepare("select * from kitaplar");
    if(!sorgu->exec())
    {
            QMessageBox::critical(this,"Hata!","uyeler tablosuna erisimde bir hata oldu!");
            return;
    }
        model1=new QSqlQueryModel();
        model1->setQuery(*sorgu);
        ui->tableView_2->setModel(model1);
     sorgu->prepare("select * from odunc");
    if(!sorgu->exec())
    {
            QMessageBox::critical(this,"Hata!","uyeler tablosuna erisimde bir hata oldu!");
            return;
    }
    model=new QSqlQueryModel();
    model->setQuery(*sorgu);
    ui->tableView_3->setModel(model);
}

void odunc_alma::on_pushButton_clicked()
{
    sorgu2->prepare("select uye_no, kitap_no from odunc");
    if (sorgu2->exec()) {
        bool var = false;

        while (sorgu2->next()) {
            int uye_no = sorgu2->value(0).toInt();
            int kitapno = sorgu2->value(1).toInt();
            if (ui->lineEdit->text().toInt() == uye_no &&
                ui->lineEdit_2->text().toInt() == kitapno) {
                QMessageBox::critical(this, "Uyari!", "Bu Kitap daha once ayni kisi tarafindan odunc alinmisitir!");
                var = true;
                break;
            }
        }

        if (!var) {
            if (ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()) {
                QMessageBox::critical(this, "Hata!", "Gerekli alanlari doldurunuz!");
                return;
            }

            sorgu1->prepare("select kitap_sayisi from kitaplar where kitap_no = ?");
            sorgu1->addBindValue(ui->lineEdit_2->text().toInt());
            if (!sorgu1->exec() || !sorgu1->next()) {
                QMessageBox::critical(this, "Hata!", "Kitap sayısı alınamadı!");
                return;
            }
            int kitap_sayisi = sorgu1->value(0).toInt();
            if(kitap_sayisi==0)
            {
                QMessageBox::critical(this, "Uyari", "Kitap stokta mevcut degildir!");
                return;
            }

            sorgu1->prepare("update kitaplar set kitap_sayisi = ? where kitap_no = ?");
            sorgu1->addBindValue(kitap_sayisi - 1);
            sorgu1->addBindValue(ui->lineEdit_2->text().toInt());
            if (!sorgu1->exec()) {
                QMessageBox::critical(this, "Hata!", "Kitap sayısı güncellenemedi!");
                return;
            }


            sorgu2->prepare("insert into odunc (uye_no, kitap_no, odunc_alma_tarihi) values (?, ?, ?)");
            sorgu2->addBindValue(ui->lineEdit->text());
            sorgu2->addBindValue(ui->lineEdit_2->text());
            sorgu2->addBindValue(ui->dateEdit->date().toString("dd/MM/yyyy"));

            if (!sorgu2->exec()) {
                QMessageBox::critical(this, "Hata!", "Odunc alinan kitaplar tablosuna ekleme yaparken bir hata oldu!");
                return;
            }

            listele();
        }
    }
}



void odunc_alma::on_tableView_3_clicked(const QModelIndex &index)
{



}


void odunc_alma::on_tableView_1_clicked(const QModelIndex &index)
{
     ui->lineEdit->setText(model3->index(index.row(),0).data().toString());
}

void odunc_alma::on_tableView_2_clicked(const QModelIndex &index)
{
  ui->lineEdit_2->setText(model1->index(index.row(),0).data().toString());
}
