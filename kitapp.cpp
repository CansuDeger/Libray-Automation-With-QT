//CENNET CANSU DEGER
//23100011023
#include "kitapp.h"
#include "ui_kitapp.h"

kitapp::kitapp(QSqlDatabase db,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::kitapp)
{
    ui->setupUi(this);
    sorgu=new QSqlQuery(db);
    oduncSorgu = new QSqlQuery(db);
    teslimSorgu = new QSqlQuery(db);
    oduncModel = new QSqlQueryModel();
    teslimModel = new QSqlQueryModel();
    kontrolSorgu=new QSqlQuery(db);

    listele();
}

kitapp::~kitapp()
{
    delete ui;
}

void kitapp::listele()
{
    sorgu->prepare("select * from kitaplar");
    if(!sorgu->exec())
    {
        QMessageBox::critical(this,"Hata!","Kitaplar tablosuna erisimde bir hata oldu!");
        return;
    }
    model=new QSqlQueryModel();
    model->setQuery(*sorgu);
    ui->kitaplar_tablo->setModel(model);
}

void kitapp::on_kitaplar_tablo_clicked(const QModelIndex &index)
{
    QString kitap_no = model->index(index.row(), 0).data().toString();

    ui->kitap_no_4->setText(kitap_no);
    ui->kitap_isim_4->setText(model->index(index.row(), 1).data().toString());
    ui->stok_4->setText(model->index(index.row(), 2).data().toString());

    oduncSorgu->prepare("select * from odunc where kitap_no = ?");
    oduncSorgu->addBindValue(kitap_no);
    if (!oduncSorgu->exec()) {

        return;
    }
    oduncModel->setQuery(*oduncSorgu);
    ui->kitap_odunc_durum->setModel(oduncModel);


    teslimSorgu->prepare("select * from teslim where kitap_no = ?");
    teslimSorgu->addBindValue(kitap_no);
    if (!teslimSorgu->exec()) {

        return;
    }
    teslimModel->setQuery(*teslimSorgu);
    ui->kitap_oncede_odunc_durum->setModel(teslimModel);


}


void kitapp::on_kitap_kayit_clicked()
{
    sorgu->prepare("insert into kitaplar(kitap_ad,kitap_sayisi) values(?,?)");
    sorgu->addBindValue(ui->kitap_isim_4->text());
    sorgu->addBindValue(ui->stok_4->text());
    if(ui->kitap_isim_4->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }
    if(ui->stok_4->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }
    if(!sorgu->exec())
    {
        QMessageBox::critical(this,"Hata!","Kitaplar tablosuna ekleme yaparken bir hata oldu!");
        return;
    }
    listele();
}


void kitapp::on_kitap_guncelle_clicked()
{
    sorgu->prepare("update kitaplar set kitap_ad=?,kitap_sayisi=? where kitap_no=?");
    sorgu->addBindValue(ui->kitap_isim_4->text());
    sorgu->addBindValue(ui->stok_4->text());
    sorgu->addBindValue(ui->kitap_no_4->text());
    if(ui->kitap_isim_4->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }
    if(ui->stok_4->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }

    if(!sorgu->exec())
    {
        QMessageBox::critical(this,"Hata!","Kitaplar tablosunda guncelleme yaparken bir hata oldu!");
        return;
    }
    listele();
}


void kitapp::on_kitap_sil_clicked()
{
    if(ui->kitap_isim_4->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }
    if(ui->kitap_no_4->text().isEmpty())
    {
        QMessageBox::critical(this,"Hata!","Gerekli alanlari doldurunuz!");
        return;
    }
    kontrolSorgu->prepare("select count(*) from odunc where kitap_no = ?");
    kontrolSorgu->addBindValue(ui->kitap_no_4->text().toInt());


    if (!kontrolSorgu->exec()) {
        QMessageBox::critical(this, "Hata!", "Kitabin ödünç bilgileri sorgulanamadı:\n");
        return;
    }

    kontrolSorgu->next();
    int oduncSayisi = kontrolSorgu->value(0).toInt();

    if (oduncSayisi > 0) {
        QMessageBox::warning(this, "Silme Engellendi", "Bu kitap henüz teslim edilmemistir.");
        return;
    }

    sorgu->prepare("delete from kitaplar where kitap_no=?");
    sorgu->addBindValue(ui->kitap_no_4->text());
    if(!sorgu->exec())
    {
        QMessageBox::critical(this,"Hata!","kitaplar tablosundan veri silerken bir hata oldu!");
        return;
    }
    listele();
}

