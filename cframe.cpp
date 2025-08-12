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
    std::list<int> lista = {88,96,54};
    insertarSSTF(lista,Cil);
    for (int n : lista) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

}

void cframe::insertarSSTF(std::list<int>& lista, int valor) {
    // 1. Insertar al frente
    lista.push_front(valor);

    if (lista.size() <= 1) return ;

    // 2. Selection sort manual usando iteradores
    for (auto i = lista.begin(); i != lista.end(); ++i) {
        auto minIt = i;
        for (auto j = std::next(i); j != lista.end(); ++j) {
            if (*j < *minIt) {
                minIt = j;
            }
        }
        if (minIt != i) {
            std::swap(*i, *minIt);
        }
    }

    // 3. Encontrar "cabezal" (el valor recién insertado)
    auto cabezal = std::find(lista.begin(), lista.end(), valor);
    if (cabezal == lista.end()) return;

    // 4. Calcular diferencias
    int diffAnterior = INT_MAX, diffSiguiente = INT_MAX;

    if (cabezal != lista.begin()) {
        auto anterior = std::prev(cabezal);
        diffAnterior = std::abs(*cabezal - *anterior);
    }
    auto siguiente = std::next(cabezal);
    if (siguiente != lista.end()) {
        diffSiguiente = std::abs(*siguiente - *cabezal);
    }

    // 5. Mover cabezal
    if (diffAnterior < diffSiguiente && cabezal != lista.begin()) {
        // Mover hacia anterior
        auto anterior = std::prev(cabezal);
        lista.splice(anterior, lista, cabezal);
        std::cout << "Cabezal movido hacia anterior\n";
    }
    else if (cabezal != std::prev(lista.end())) {
        // Mover hacia siguiente
        auto siguiente = std::next(cabezal);
        lista.splice(std::next(siguiente), lista, cabezal);
        std::cout << "Cabezal movido hacia siguiente\n";
    }
}
