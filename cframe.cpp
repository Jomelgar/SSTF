#include "cframe.h"
#include "ui_cframe.h"


cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
}

cframe::~cframe()
{
    delete ui;
}


void cframe::on_BtnIniciar_clicked()
{
    Cil = QInputDialog::getInt(this,"Digite el cilindro inicial",".:.");
    c.enqueue(new int(Cil));

}

