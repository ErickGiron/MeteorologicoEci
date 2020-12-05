#ifndef REGISTROMAINWINDOW_H
#define REGISTROMAINWINDOW_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QMainWindow>

namespace Ui {
class registroMainWindow;
}

class registroMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit registroMainWindow(QWidget *parent = 0);
    ~registroMainWindow();
    void CrearTabla();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registroMainWindow *ui;
};

#endif // REGISTROMAINWINDOW_H
