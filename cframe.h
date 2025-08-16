#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>
#include<QInputDialog>
#include <QMessageBox>
#include <empleado.h>
#include <list>
#include <cmath>     // abs
#include<cola.h>

QT_BEGIN_NAMESPACE
namespace Ui { class cframe; }
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();

private slots:
    void on_btnPlus_clicked();

    void on_btnMinus_clicked();

    void on_btnAccept_clicked();

private:
    Ui::cframe *ui;
    lista<int> L;
    cola<int> c;
    int movs;
    void mostrarTabla();
    void mostrarLista();
};
#endif // CFRAME_H
