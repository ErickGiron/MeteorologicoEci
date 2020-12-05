#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString nombre;
    nombre="BaseDeDatos.sqlite";
    dbmain=QSqlDatabase::addDatabase("QSQLITE");
    dbmain.setDatabaseName(nombre);
    if(dbmain.open())
        {
            qDebug()<<"Base de datos creada";
        }
    else
        {
            qDebug()<<"Error";
        }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    registroMainWindow *registro = new registroMainWindow(0);
    registro->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    ingresaMainWindow *ingresa = new ingresaMainWindow(0);
    ingresa->show();
}
