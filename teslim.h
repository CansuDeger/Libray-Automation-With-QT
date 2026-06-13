//CENNET CANSU DEGER
//23100011023
#ifndef TESLIM_H
#define TESLIM_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class teslim;
}

class teslim : public QDialog
{
    Q_OBJECT

public:
    explicit teslim(QSqlDatabase,QWidget *parent = nullptr);
    ~teslim();
    void listele();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_2_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::teslim *ui;
    QSqlQueryModel *model;
    QSqlQuery *sorgu1;
    QSqlQueryModel *model1;
    QSqlQuery *sorgu2;
    QSqlQueryModel *model3;
    QSqlQuery *sorgu3;
    QSqlQuery *sorgu4;
};

#endif // TESLIM_H
