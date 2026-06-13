#ifndef KITAPLAR_H
#define KITAPLAR_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

namespace Ui {
class kitaplar;
}

class kitaplar : public QDialog
{
    Q_OBJECT

public:
    explicit kitaplar(QSqlDatabase,QWidget *parent = nullptr);
    ~kitaplar();


private:
    Ui::kitaplar *ui;
    QSqlQuery *sorgu;
    QSqlQueryModel *model;
};

#endif // KITAPLAR_H
