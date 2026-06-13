#include "kitaplar.h"
#include "ui_kitaplar.h"

kitaplar::kitaplar(QSqlDatabase db,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::kitaplar)
{
    ui->setupUi(this);
    sorgu=new QSqlQuery(db);

}

kitaplar::~kitaplar()
{
    delete ui;
}


