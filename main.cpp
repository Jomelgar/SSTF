#include "cframe.h"
#include <QApplication>

#include "empleado.h"
#include "lista.h"
using std::cin;
using std::endl;

// muestra las instrucciones del programa al usuario
void instrucciones()
{
    cout << "Escriba una de las siguentes opciones:\n"
         << " 1 para insertar al principio de la lista\n"
         << " 2 para insertar al final de la lista\n"
         << " 3 para eliminar del principio de la lista\n"
         << " 4 para eliminar del final de la lista\n"
         << " 5 para terminar el procesamiento de la lista\n";
} // fin de la función instrucciones

// función para evaluar una lista
template< typename T >
void probarlista( lista< T > &objetolista, const string &nombreTipo )
{
    cout << "Prueba de una lista de valores tipo " << nombreTipo << "\n";
    instrucciones(); // muestra las instrucciones
    int opcion; // almacena la opción del usuario
    T valor; // almacena el valor de entrada
    empleado *e = new empleado(("0501-2003-01433"),"Brandon Steve", "Turcios Mejía", "CEO de Pollolandia", 22,'M',13000);
    objetolista.insertarAlFrente( e );
    objetolista.insertarAlFinal( e );
    //objetolista.insertarAlFinal( 1 );
    //objetolista.insertarAlFinal( 2 );
    //objetolista.insertarAlFinal( 3 );
    objetolista.imprimir();
    do // realiza las acciones seleccionadas por el usuario
    {
        cout << "? ";
        cin >> opcion;
        switch ( opcion )
        {
        case 1: // inserta al principio
            cout << "Escriba " << nombreTipo << ": ";
            //cin >> valor;
            //objetolista.insertarAlFrente( valor );
            objetolista.imprimir();
            break;
        case 2: // inserta al final
            cout << "Escriba " << nombreTipo << ": ";
            //cin >> valor;
            //objetolista.insertarAlFinal( valor );
            objetolista.imprimir();
            break;
        case 3: // elimina del principio
            if ( objetolista.eliminarDelFrente( valor ) )
                cout << valor << " se elimino de la lista\n";
            objetolista.imprimir();
            break;
        case 4: // elimina del final
            if ( objetolista.eliminarDelFinal( valor ) )
                cout << valor << " se elimino de la lista\n";
            objetolista.imprimir();
            break;
        } // fin de switch
    } while ( opcion != 5 ); // fin de do...while
    cout << "Fin de la prueba de la lista\n\n";
} // fin de la función probarlista
// muestra las instrucciones del pr

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cframe w;
    w.show();
    int* lista = new int[5];
    // prueba lista de valores int
    //lista< int > listaEnteros;
    //probarlista( listaEnteros, "entero" );
    //prueba lista de valores double
    //lista< empleado* > listaEmpleados;
    //probarlista( listaEmpleados, "empleado" );
    //return 0;

    return a.exec();
}
