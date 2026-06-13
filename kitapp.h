#ifndef KITAPP_H
//CENNET CANSU DEGER
//23100011023
#define KITAPP_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

namespace Ui {
class kitapp;
}

class kitapp : public QDialog
{
    Q_OBJECT

public:
    explicit kitapp(QSqlDatabase,QWidget *parent = nullptr);
    ~kitapp();
    void listele();

private slots:
    void on_kitaplar_tablo_clicked(const QModelIndex &index);

    void on_kitap_kayit_clicked();

    void on_kitap_guncelle_clicked();

    void on_kitap_sil_clicked();

private:
    Ui::kitapp *ui;
    QSqlQuery *sorgu;
    QSqlQueryModel *model;
    QSqlQuery *oduncSorgu;
    QSqlQueryModel *oduncModel;
    QSqlQuery *teslimSorgu;
    QSqlQueryModel *teslimModel;
    QSqlQuery *kontrolSorgu;
    QSqlQueryModel *model1;
};

#endif // KITAPP_H
