//CENNET CANSU DEGER
//23100011023
#include "uyeler.h"
#include "ui_uyeler.h"

uyeler::uyeler(QSqlDatabase db,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::uyeler)
{
    ui->setupUi(this);
    sorgu=new QSqlQuery(db);
    kontrolSorgu=new QSqlQuery (db);
    listele();
}

uyeler::~uyeler()
{
    delete ui;
}

void uyeler::listele()
{
    sorgu->prepare("select * from uyeler");
    if(!sorgu->exec())
    {
        QMessageBox::critical(this,"Hata!","uyeler tablosuna erisimde bir hata oldu!");
        return;
    }
    model=new QSqlQueryModel();
    model->setQuery(*sorgu);
    ui->uyeler_tablo->setModel(model);
}

void uyeler::on_uyeler_tablo_clicked(const QModelIndex &index)
{
    ui->uyeler_no->setText(model->index(index.row(),0).data().toString());
    ui->uyeler_isim->setText(model->index(index.row(),1).data().toString());
    ui->uyeler_soysism->setText(model->index(index.row(),2).data().toString());

}


void uyeler::on_yeni_kayit_clicked()
{
    sorgu->prepare("insert into uyeler(uye_ad,uye_soyad) values(?,?)");
    sorgu->addBindValue(ui->uyeler_isim->text());
    sorgu->addBindValue(ui->uyeler_soysism->text());
    if(ui->uyeler_isim->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }
    if(ui->uyeler_soysism->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }
    if(!sorgu->exec())
    {
        QMessageBox::critical(this,"Hata!","Uyeler tablosuna ekleme yaparken bir hata oldu!");
        return;
    }
    listele();
}


void uyeler::on_guncelle_clicked()
{
    sorgu->prepare("update uyeler set uye_ad=?,uye_soyad=? where uye_no=?");
    sorgu->addBindValue(ui->uyeler_isim->text());
    sorgu->addBindValue(ui->uyeler_soysism->text());
    sorgu->addBindValue(ui->uyeler_no->text());
    if(ui->uyeler_isim->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }
    if(ui->uyeler_soysism->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }

    if(!sorgu->exec())
    {
        QMessageBox::critical(this,"Hata!","Uyeler tablosunda guncelleme yaparken bir hata oldu!");
        return;
    }
    listele();
}


void uyeler::on_sil_clicked()
{
    kontrolSorgu->prepare("select count(*) from odunc where uye_no = ?");
    kontrolSorgu->addBindValue(ui->uyeler_no->text().toInt());

    if(ui->uyeler_isim->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }
    if(ui->uyeler_soysism->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }
    if (!kontrolSorgu->exec()) {
        QMessageBox::critical(this, "Hata!", "Üyenin ödünç bilgileri sorgulanamadı:\n");
        return;
    }

    kontrolSorgu->next();
    int oduncSayisi = kontrolSorgu->value(0).toInt();

    if (oduncSayisi > 0) {
        QMessageBox::warning(this, "Silme Engellendi", "Bu üyenin henüz teslim etmediği kitap(lar) var. Önce kitapları teslim etmelidir.");
        return;
    }

    sorgu->prepare("delete from uyeler where uye_no=?");
    sorgu->addBindValue(ui->uyeler_no->text());
    if(!sorgu->exec())
    {
        QMessageBox::critical(this,"Hata!","Personeller tablosundan veri silerken bir hata oldu!");
        return;
    }
    listele();
}

