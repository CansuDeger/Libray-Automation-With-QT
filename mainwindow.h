#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
//CENNET CANSU DEGER
//23100011023
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <uyeler.h>
#include <kitapp.h>
#include <odunc_alma.h>
#include <teslim.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_uye_clicked();

    void on_kitap_clicked();

    void on_al_clicked();

    void on_ver_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db=QSqlDatabase:: addDatabase("QSQLITE");
    QSqlTableModel *model1;
    QSqlQueryModel *model2;
    QSqlQuery sorgu;
};
#endif // MAINWINDOW_H
