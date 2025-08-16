#include "cframe.h"
#include "ui_cframe.h"


cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    c = cola<int>();
    ui->setupUi(this);
    movs = 0;
    ui->sb_value->setMaximum(199);
    ui->tw_data->setColumnCount(1);
    ui->tw_data->setHorizontalHeaderLabels(QStringList() << "Valor");
    ui->tw_data->horizontalHeader()->setStretchLastSection(true);
    ui->tw_data->setRowCount(0);
}


cframe::~cframe()
{
    delete ui;
}

void cframe::mostrarTabla()
{
    ui->tw_data->setRowCount(0);

    nodo<int>* n = L.primeroPtr;
    int fila = 0;
    while(n)
    {
        ui->tw_data->insertRow(fila);
        ui->tw_data->setItem(fila, 0, new QTableWidgetItem(QString::number(n->obtenerDatos())));
        n = n->siguientePtr;
        fila++;
    }
}

void cframe::on_btnPlus_clicked()
{
    int valor = ui->sb_value->value();
    L.insertarOrden(valor);
    mostrarTabla();
}


void cframe::on_btnMinus_clicked()
{
    int valor = ui->sb_value->value();
    if (L.eliminar(valor)) {
        QMessageBox::information(this, "Eliminar",
        QString("Se eliminó el valor %1 correctamente.").arg(valor));
        mostrarTabla();
    } else {
        QMessageBox::warning(this, "Eliminar",
        QString("El valor %1 no se encontró en la lista.").arg(valor));
    }

}


void cframe::on_btnAccept_clicked()
{
    QStringList listaValores;
    nodo<int>* n = L.primeroPtr;
    while(n) {
        listaValores << QString::number(n->obtenerDatos());
        n = n->siguientePtr;
    }

    if (listaValores.isEmpty()) {
        QMessageBox::information(this, "SSTF", "La lista está vacía");
        return;
    }

    bool ok;
    QString valorStr = QInputDialog::getItem(this,"Seleccionar valor","Seleccione el cabezal:",
        listaValores,0,false,&ok);

    if (!ok) return;

    int valor = valorStr.toInt();

    lista<int> Ltemp;
    nodo<int>* i = L.primeroPtr;
    while (i) {
        Ltemp.insertarOrden(i->datos); // o insertarAlFinal si ya está ordenado
        i = i->siguientePtr;
    }

    nodo<int>* cabezal = Ltemp.encontrarnodo(valor);
    if (!cabezal) return;
    movs = 0;
    c.enqueue(cabezal->datos);
    while(cabezal)
    {
        if(!cabezal->anteriorPtr)
        {
            while(cabezal->siguientePtr){
                c.enqueue(cabezal->siguientePtr->datos);
                movs += std::fabs(cabezal->datos - cabezal->siguientePtr->datos);
                cabezal = cabezal->siguientePtr;
            }
            cabezal = nullptr;
        }else if(!cabezal->siguientePtr)
        {
            while(cabezal->anteriorPtr){
                c.enqueue(cabezal->anteriorPtr->datos);
                movs += std::fabs(cabezal->datos - cabezal->anteriorPtr->datos);
                cabezal = cabezal->anteriorPtr;
            }
            cabezal = nullptr;
        }else
        {
            nodo<int>* temp = cabezal;
            int diffAnterior = std::fabs(cabezal->datos - cabezal->anteriorPtr->datos);
            int diffSiguiente = std::fabs(cabezal->datos - cabezal->siguientePtr->datos);
            if(diffAnterior < diffSiguiente)
            {
                c.enqueue(cabezal->anteriorPtr->datos);
                movs += diffAnterior;
                cabezal = cabezal->anteriorPtr;
                cabezal->siguientePtr  = temp->siguientePtr;
            }else
            {
                c.enqueue(cabezal->siguientePtr->datos);
                movs += diffSiguiente;
                cabezal = cabezal->siguientePtr;
                cabezal->anteriorPtr  = temp->anteriorPtr;
            }
        }
    }

    mostrarLista();
    mostrarTabla();
}

void cframe::mostrarLista()
{
    ui->lw_res->clear();
    while(!c.estaListaVacia())
    {
        int valor;
        c.dequeue(valor);
        ui->lw_res->addItem(QString::number(valor));
    }
    ui->lw_res->addItem("Movimientos: "+ QString::number(movs));
}
