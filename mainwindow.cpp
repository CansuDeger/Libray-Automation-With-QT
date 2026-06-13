//CENNET CANSU DEGER
//23100011023
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->uye->setIcon(QIcon("C:/Users/DELL/Desktop/QT/Final_odev/images/user.jpg"));//burda da imagese tablosunu resoruces file a ekledim ama tanimadi yine o yuzden uzun yol vermek zorunda kaldim
    ui->uye->setIconSize(QSize(100, 100));
    ui->uye->setText("");
    ui->kitap->setIcon(QIcon("C:/Users/DELL/Desktop/QT/Final_odev/images/book.jpg"));
    ui->kitap->setIconSize(QSize(100, 100));
    ui->kitap->setText("");
    ui->al->setIcon(QIcon("C:/Users/DELL/Desktop/QT/Final_odev/images/odunc_1.jpg"));
    ui->al->setIconSize(QSize(100, 100));
    ui->al->setText("");
    ui->ver->setIcon(QIcon("C:/Users/DELL/Desktop/QT/Final_odev/images/odunc_2.jpg"));
    ui->ver->setIconSize(QSize(100, 100));
    ui->ver->setText("");
    db.setDatabaseName("C:/Users/DELL/Desktop/QT/Final_odev/tablolar.db");//tablolar.db dediginiz gibi proje dosyama attim fakat yine de erisemedi o yuzden dosya yolu vermek zorunda kaldim
    if(!db.open())
    {
        ui->statusbar->showMessage("Veri tabanina baglanilamadi!");
    }
    else
    {
        ui->statusbar->showMessage("Veri tabanina baglanildi");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_uye_clicked()
{
    uyeler *uye=new uyeler(db,this);
    uye->show();
}


void MainWindow::on_kitap_clicked()
{
    kitapp *kitap=new kitapp(db,this);
    kitap->show();
}


void MainWindow::on_al_clicked()
{
    odunc_alma *odunc=new odunc_alma(db,this);
    odunc->show();
}


void MainWindow::on_ver_clicked()
{
    teslim *teslimm=new teslim(db,this);
    teslimm->show();
}

