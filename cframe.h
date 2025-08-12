#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>
#include<QInputDialog>
#include <QMessageBox>
#include <empleado.h>
#include <list>
#include <algorithm> // find
#include <iterator>  // next, prev
#include <cmath>     // abs
#include <climits>   // INT_MAX
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
    void on_BtnIniciar_clicked();
private:
    Ui::cframe *ui;
    lista<int*> L;
    cola<int*> c;
    int Cil;
    void insertarSSTF(std::list<int> &, int);
};
#endif // CFRAME_H
