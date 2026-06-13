//CENNET CANSU DEGER
//23100011023
#ifndef ODUNC_ALMA_H
#define ODUNC_ALMA_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class odunc_alma;
}

class odunc_alma : public QDialog
{
    Q_OBJECT

public:
    explicit odunc_alma(QSqlDatabase,QWidget *parent = nullptr);
    ~odunc_alma();
    void listele();

private slots:
    void on_pushButton_clicked();

    void on_tableView_3_clicked(const QModelIndex &index);

    void on_tableView_1_clicked(const QModelIndex &index);

    void on_tableView_2_clicked(const QModelIndex &index);

private:
    Ui::odunc_alma *ui;
    QSqlQuery *sorgu;
    QSqlQueryModel *model;
    QSqlQuery *sorgu1;
    QSqlQueryModel *model1;
    QSqlQuery *sorgu2;
      QSqlQueryModel *model3;

};

#endif // ODUNC_ALMA_H
