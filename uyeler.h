//CENNET CANSU DEGER
//23100011023
#ifndef UYELER_H
#define UYELER_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

namespace Ui {
class uyeler;
}

class uyeler : public QDialog
{
    Q_OBJECT

public:
    explicit uyeler(QSqlDatabase,QWidget *parent = nullptr);
    ~uyeler();
    void listele();

private slots:
    void on_uyeler_tablo_clicked(const QModelIndex &index);

    void on_yeni_kayit_clicked();

    void on_guncelle_clicked();

    void on_sil_clicked();

private:
    Ui::uyeler *ui;
    QSqlQuery *sorgu;
    QSqlQueryModel *model;
    QSqlQuery *kontrolSorgu;
     QSqlQueryModel *model1;
};

#endif // UYELER_H
