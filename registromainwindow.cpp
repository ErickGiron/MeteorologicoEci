#include "registromainwindow.h"
#include "ui_registromainwindow.h"
#include "QDebug"
#include "QString"

registroMainWindow::registroMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::registroMainWindow)
{
    ui->setupUi(this);
    CrearTabla();
}

registroMainWindow::~registroMainWindow()
{
    delete ui;
}
void registroMainWindow::CrearTabla()
{
    QString consulta;
    consulta.append("CREATE TABLE IF NOT EXISTS usuario("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "Nombre VARCHAR(25),"
                    "Apellido VARCHAR(25),"
                    "Documento VARCHAR(25),"
                    "Dia VARCHAR(25),"
                    "Mes VARCHAR(25),"
                    "year VARCHAR(25),"
                    "Contra VARCHAR(25),"
                    "Verify VARCHAR(25)"
                    ");");
    QSqlQuery crear;
    crear.prepare(consulta);
    if(crear.exec())
        {
            qDebug()<<"Tabla Creada";
        }
    else
        {
        qDebug()<<"Tabla no Creada"<<crear.lastError();
    }

}

void registroMainWindow::on_pushButton_clicked()
{
    QString nombre=ui->Nombre->text();
    QString apellido=ui->Apellido->text();
    QString id=ui->Documento->text();
    QString dia=ui->Dia->text();
    QString mes=ui->Mes->text();
    QString ye=ui->year->text();
    QString user=ui->Usuario->text();
    QString contra=ui->Contra->text();
    QString verify=ui->Verify->text();
    qDebug() <<nombre;
    qDebug() <<apellido;
    qDebug() <<id;
    qDebug() <<dia;
    qDebug() <<mes;
    qDebug() <<ye;
    qDebug() <<user;
    qDebug() <<contra;
    qDebug() <<verify;
    QString insertar;
    insertar.append("INSERT INTO usuario("
                   "Nombre,Apellido,Documento,Dia,Mes,year,Usuario,Contra)"
                   "value(:nombre,:apellido,:id,:dia,:mes,:year,:usuario,:contra)"
                   ");");
    QString insertar_db;
    insertar.prepare(insertar);
    insertar.bindValue(":nombre",nombre);
    insertar.bindValue(":apellido",apellido);
    insertar.bindValue(":id",id);
    insertar.bindValue(":dia",dia);
    insertar.bindValue(":mes",mes);
    insertar.bindValue(":year",ye);
    insertar.bindValue(":usuario",user);
    insertar.bindValue(":contra",contra);
    if(insertar.exec())
        {
             qDebug()<<"Datos ingresados";
        }
    else
        {
             qDebug()<<"Error al ingresar los datos"<<insertar.lastError();
        }
}
