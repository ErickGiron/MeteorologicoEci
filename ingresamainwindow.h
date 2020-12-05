#ifndef INGRESAMAINWINDOW_H
#define INGRESAMAINWINDOW_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QMainWindow>

namespace Ui {
class ingresaMainWindow;
}

class ingresaMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ingresaMainWindow(QWidget *parent = 0);
    ~ingresaMainWindow();

private:
    Ui::ingresaMainWindow *ui;
};

#endif // INGRESAMAINWINDOW_H
