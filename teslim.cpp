//CENNET CANSU DEGER
//23100011023
#include "teslim.h"
#include "ui_teslim.h"

teslim::teslim(QSqlDatabase db,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teslim)
{
    ui->setupUi(this);
    sorgu1 = new QSqlQuery(db);
    sorgu2 =new QSqlQuery(db);
    sorgu3 = new QSqlQuery(db);
    sorgu4 = new QSqlQuery(db);
    listele();
}

teslim::~teslim()
{
    delete ui;
}

void teslim::listele()
{
    sorgu1->prepare("select * from teslim");
    if(!sorgu1->exec())
    {
        QMessageBox::critical(this,"Hata!","Teslim edilen kitaplar tablosuna erisimde bir hata oldu!");
        return;
    }
    model=new QSqlQueryModel();
    model->setQuery(*sorgu1);
    ui->tableView->setModel(model);
    sorgu2->prepare("select * from odunc");
    if(!sorgu2->exec())
    {
        QMessageBox::critical(this,"Hata!","Odunc alinan kitaplar tablosuna erisimde bir hata oldu!");
        return;
    }
    model1=new QSqlQueryModel();
    model1->setQuery(*sorgu2);
    ui->tableView_2->setModel(model1);

}

void teslim::on_tableView_clicked(const QModelIndex &index)
{

}


void teslim::on_tableView_2_clicked(const QModelIndex &index)
{
    ui->lineEdit->setText(model1->index(index.row(),0).data().toString());
    ui->lineEdit_2->setText(model1->index(index.row(),1).data().toString());
}

void teslim::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()) {
        QMessageBox::critical(this,"Hata!","Gerekli alanları doldurunuz!");
        return;
    }

    sorgu2->prepare("select odunc_alma_tarihi from odunc where uye_no = ? and kitap_no = ?");
    sorgu2->addBindValue(ui->lineEdit->text().toInt());
    sorgu2->addBindValue(ui->lineEdit_2->text().toInt());

    if(!sorgu2->exec()) {
        QMessageBox::critical(this,"Hata!","Ödünç alma tarihi sorgulanırken hata oluştu!");
        return;
    }

    if(!sorgu2->next()) {
        QMessageBox::critical(this,"Hata!","Bu üye ve kitap bilgisine ait ödünç kaydı bulunamadı!");
        return;
    }

    QString date = sorgu2->value(0).toString();

    // Tarihi manuel olarak düzgün şekilde ayrıştırma
    QStringList tarihParcalari = date.split("/");
    if (tarihParcalari.size() != 3) {
        QMessageBox::critical(this, "Hata!", "Tarih formatı geçersiz!");
        return;
    }

    // Gün/Ay/Yıl formatında olduğu için, gün ve ayı doğru şekilde alıyoruz
    int gun = tarihParcalari[0].toInt();
    int ay = tarihParcalari[1].toInt();
    int yil = tarihParcalari[2].toInt();

    // Tarihi doğru şekilde oluştur (Qt: yıl, ay, gün sırasıyla alır)
    QDate date1 = QDate(yil, ay, gun);

    if (!date1.isValid()) {
        QMessageBox::critical(this, "Hata!", "Ödünç alınma tarihi geçersiz!");
        return;
    }

    QDate teslimTarihi = ui->dateEdit->date();

    // Debug çıktıları
    qDebug() << "Alınma tarihi (orijinal):" << date;
    qDebug() << "Alınma tarihi (düzeltilmiş):" << date1.toString("dd.MM.yyyy");
    qDebug() << "Teslim tarihi:" << teslimTarihi.toString("dd.MM.yyyy");

    int gunFarki = date1.daysTo(teslimTarihi);
    qDebug() << "Gün farkı:" << gunFarki;

    // Borç hesaplama
    int borc = 0;
    if (gunFarki > 15) {
        borc = (gunFarki - 15) * 4;
    }
    qDebug() << "Hesaplanan borç:" << borc;

    sorgu1->prepare("insert into teslim(uye_no, kitap_no, alma_tarihi, verme_tarihi, borc) values(?, ?, ?, ?, ?)");
    sorgu1->addBindValue(ui->lineEdit->text().toInt());
    sorgu1->addBindValue(ui->lineEdit_2->text().toInt());
    sorgu1->addBindValue(date); // Orijinal tarih formatını koruyoruz
    sorgu1->addBindValue(ui->dateEdit->date().toString("dd/MM/yyyy"));
    sorgu1->addBindValue(borc);

    if(!sorgu1->exec()) {
        QMessageBox::critical(this, "Hata!", "Teslim tablosuna kayıt eklenirken hata oluştu: " + sorgu1->lastError().text());
        return;
    }

    // Ödünç tablosundan kaydı sil
    sorgu2->prepare("delete from odunc where uye_no = ? and kitap_no = ?");
    sorgu2->addBindValue(ui->lineEdit->text().toInt());
    sorgu2->addBindValue(ui->lineEdit_2->text().toInt());

    if(!sorgu2->exec()) {
        QMessageBox::critical(this, "Hata!", "Ödünç tablosundan kayıt silinirken hata oluştu: " + sorgu2->lastError().text());
        return;
    }

    // Başarılı mesajına borç bilgisi eklendi
    QString mesaj = "Kitap başarıyla teslim alındı!";
    if (borc > 0) {
        mesaj += "\nGeç teslim sebebiyle oluşan borç: " + QString::number(borc) + " TL";
    }
    QMessageBox::information(this, "Başarılı", mesaj);

    sorgu3->prepare("select kitap_sayisi from kitaplar where kitap_no = ?");
    sorgu3->addBindValue(ui->lineEdit_2->text().toInt());

    if (!sorgu3->exec() || !sorgu3->next()) {
        QMessageBox::critical(this, "Hata!", "Kitap sayısı alınamadı!");
        return;
    }

    int mevcut_sayi = sorgu3->value(0).toInt();
    sorgu4->prepare("update kitaplar set kitap_sayisi = ? where kitap_no = ?");
    sorgu4->addBindValue(mevcut_sayi + 1);
    sorgu4->addBindValue(ui->lineEdit_2->text().toInt());

    if (!sorgu4->exec()) {
        QMessageBox::critical(this, "Hata!", "Kitap sayısı güncellenemedi!");
        return;
    }

    listele();
}
