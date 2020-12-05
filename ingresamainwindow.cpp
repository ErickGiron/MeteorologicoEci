#include "ingresamainwindow.h"
#include "ui_ingresamainwindow.h"

ingresaMainWindow::ingresaMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ingresaMainWindow)
{
    ui->setupUi(this);
}

ingresaMainWindow::~ingresaMainWindow()
{
    delete ui;
}
