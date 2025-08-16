#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using std::cout;
#include "nodo.h" // definición de la clase nodo
template< typename tipo >
class lista
{
    friend class cframe;
public:
    lista(); // constructor
    ~lista(); // destructor
    void insertarOrden(const tipo &);
    void insertarAlFrente( const tipo & );
    void insertarAlFinal( const tipo & );
    bool eliminarDelFrente( tipo & );
    bool eliminarDelFinal( tipo & );
    bool eliminar(tipo &);
    bool estaVacia() const;
    void imprimir() const;
    void insertarSSTF(const tipo &);
protected:
    nodo< tipo > *primeroPtr; // apuntador al primer nodo
    nodo< tipo > *ultimoPtr; // apuntador al último nodo
    // función utilitaria para asignar un nuevo nodo
    nodo< tipo > *obtenerNuevoNodo( const tipo & );
    nodo<tipo> *encontrarnodo(const tipo &);
}; // fin de la clase lista

// constructor predeterminado
template< typename tipo >
lista< tipo >::lista(): primeroPtr( 0 ), ultimoPtr( 0 ){
    // cuerpo vacío
} // fin del constructor de lista

// destructor
template< typename tipo >
lista< tipo >::~lista(){
    if ( !estaVacia() ) // la lista no está vacía
    {
        cout << "Destruyendo nodos ...\n";
        nodo< tipo > *actualPtr = primeroPtr;
        nodo< tipo > *tempPtr;
        while ( actualPtr != 0 ) // elimina los nodos restantes
        {
            tempPtr = actualPtr;
            cout << tempPtr->datos << "\n";
            actualPtr = actualPtr->siguientePtr;
            delete tempPtr;
        } // fin de while
    } // fin de if
    cout << "Se destruyeron todos los nodos\n\n";
} // fin del destructor de lista

// inserta un nodo al frente de la lista
template< typename tipo >
void lista< tipo >::insertarAlFrente( const tipo &valor ){
    nodo< tipo > *nuevoPtr = obtenerNuevoNodo( valor );
    if ( estaVacia() ) // la lista está vacía
        primeroPtr = ultimoPtr = nuevoPtr; // la nueva lista sólo tiene un nodo
    else // la lista no está vacía
    {
        nuevoPtr->siguientePtr = primeroPtr; // apunta el nuevo nodo al nodo que antes era el primero
        primeroPtr->anteriorPtr = nuevoPtr;
        primeroPtr = nuevoPtr; // orienta primeroPtr hacia el nuevo nodo
    } // fin de else
    } // fin de la función insertarAlFrente

// inserta un nodo al final de la lista
template< typename tipo >
void lista< tipo >::insertarAlFinal( const tipo &valor ){
    nodo< tipo > *nuevoPtr = obtenerNuevoNodo( valor ); // nuevo nodo
    if ( estaVacia() ) // la lista está vacía
        primeroPtr = ultimoPtr = nuevoPtr; // la nueva lista sólo tiene un nodo
    else // la lista no está vacía
    {
        ultimoPtr->siguientePtr = nuevoPtr; // actualiza el nodo que antes era el último
        nuevoPtr->anteriorPtr = ultimoPtr;
        ultimoPtr = nuevoPtr; // nuevo último nodo
    } // fin de else
    } // fin de la función insertarAlFinal

// elimina un nodo de la parte frontal de la lista
template< typename tipo >
bool lista< tipo >::eliminarDelFrente( tipo &valor ){
    if ( estaVacia() ) // la lista está vacía
        return false; // la eliminación no tuvo éxito
    else
    {
        nodo< tipo > *tempPtr = primeroPtr; // contiene tempPtr a eliminar
        if ( primeroPtr == ultimoPtr )
            primeroPtr = ultimoPtr = 0; // no hay nodos después de la eliminación
        else
            primeroPtr = primeroPtr->siguientePtr; // apunta al nodo que antes era el segundo
        valor = tempPtr->datos; // devuelve los datos que se van a eliminar
        delete tempPtr; // reclama el nodo que antes era el primero
        return true; // la eliminación tuvo éxito
    } // fin de else
    } // fin de la función eliminarDelFrente

// elimina un nodo de la parte final de la lista
template< typename tipo >
bool lista< tipo >::eliminarDelFinal( tipo &valor ){
    if ( estaVacia() ) // la lista está vacía
        return false; // la eliminación no tuvo éxito
    else
    {
        nodo< tipo > *tempPtr = ultimoPtr; // contiene tempPtr a eliminar
        if ( primeroPtr == ultimoPtr ) // la lista tiene un elemento
            primeroPtr = ultimoPtr = 0; // no hay nodos después de la eliminación
        else
        {
            nodo< tipo > *actualPtr = primeroPtr;
            // localiza el penúltimo elemento
            while ( actualPtr->siguientePtr != ultimoPtr )
                actualPtr = actualPtr->siguientePtr; // se desplaza al siguiente nodo
            ultimoPtr = actualPtr; // elimina el último nodo
            actualPtr->siguientePtr = 0; // ahora éste es el último nodo
        } // fin de else
        valor = tempPtr->datos; // devuelve el valor del nodo que antes era el último
        delete tempPtr; // reclama el nodo que antes era el último
        return true; // la eliminación tuvo éxito
    } // fin de else
    } // fin de la función eliminarDelFinal

// ¿está la lista vacía?
template< typename tipo >
bool lista< tipo >::estaVacia() const{
    return primeroPtr == 0;
} // fin de la función estaVacia
// devuelve el apuntador al nodo recién asignado

template< typename tipo >
nodo< tipo > *lista< tipo >::obtenerNuevoNodo(const tipo &valor ){
    return new nodo< tipo >( valor );
} // fin de la función obtenerNuevoNodo
// muestra el contenido de la lista

template< typename tipo >
void lista< tipo >::imprimir() const{
    if ( estaVacia() ) // la lista está vacía
    {
        cout << "La lista esta vacia\n\n";
        return;
    } // fin de if
    nodo< tipo > *actualPtr = primeroPtr;
    cout << "La lista es: ";
    while ( actualPtr != 0 ) // obtiene los datos del elemento
    {
        cout << "\t" <<actualPtr->datos->getDNI()
        << "\t"<<actualPtr->datos->getNombre()
        << "\t"<<actualPtr->datos->getApellidos()
        << "\t"<<actualPtr->datos->getCargo()
        << "\t"<<actualPtr->datos->getEdad()
        << "\t"<<actualPtr->datos->getGenero()
        << "\t"<<actualPtr->datos->getSalario()
        << " \t";
        actualPtr = actualPtr->siguientePtr;
    } // fin de while
    cout << "\n\n";
}

template<typename tipo>
inline void lista<tipo>::insertarSSTF(const tipo & valor)
{
    insertarAlFrente(valor);
    if (!primeroPtr->siguiente) return; //Lo vacio

    nodo<tipo>* n = primeroPtr, *cabezal = primeroPtr;
    while(n->siguientePtr != nullptr)
    {
        if(n->obtenerDatos() > n->siguientePtr->obtenerDatos())
        {
            tipo temp = n->obtenerDatos();
            n->datos = n->siguientePtr->datos;
            n->siguientePtr->datos= temp;
            cabezal = n->siguientePtr;
        }
        n = primeroPtr->siguientePtr;
    }

    int distAnt = cabezal->obtenerDatos()-cabezal->anteriorPtr->obtenerDatos();
    int distSig = cabezal->siguientePtr->obtenerDatos() - cabezal->obtenerDatos();
}

template<typename T>
void lista<T>::insertarOrden(const T& d)
{
    nodo<T>* nuevo = new nodo<T>(d);
    if (estaVacia()) {
        primeroPtr = ultimoPtr = nuevo;
        return;
    }

    nodo<T>* n = primeroPtr;
    if (d < n->obtenerDatos()) {
        nuevo->siguientePtr = primeroPtr;
        primeroPtr->anteriorPtr = nuevo;
        primeroPtr = nuevo;
        return;
    }



    while (n->siguientePtr && n->siguientePtr->datos < d) {
        n = n->siguientePtr;
    }

    if(n->datos == d){
        delete nuevo;
        return;
    }

    if (!n->siguientePtr) {
        n->siguientePtr = nuevo;
        nuevo->anteriorPtr = n;
        ultimoPtr = nuevo;
    }
    else {
        if(n->siguientePtr->datos == d){
            delete nuevo;
            return;
        }
        nuevo->siguientePtr = n->siguientePtr;
        nuevo->anteriorPtr = n;
        n->siguientePtr->anteriorPtr = nuevo;
        n->siguientePtr = nuevo;
    }
}

template<typename t>
bool lista<t>::eliminar(t& d) {
    if (estaVacia()) {
        return false;
    }

    nodo<t>* actual = primeroPtr;

    while (actual && actual->obtenerDatos() != d) {
        actual = actual->siguientePtr;
    }

    if (!actual) {
        return false;
    }

    if (actual == primeroPtr) {
        primeroPtr = actual->siguientePtr;
        if (primeroPtr) {
            primeroPtr->anteriorPtr = nullptr;
        }
    }
    // Caso 2: Eliminar en medio o al final
    else {
        actual->anteriorPtr->siguientePtr = actual->siguientePtr;
        if (actual->siguientePtr) {
            actual->siguientePtr->anteriorPtr = actual->anteriorPtr;
        }
    }

    delete actual; // Liberar memoria
    return true;
}

template<typename tipo>
nodo<tipo>* lista<tipo>::encontrarnodo(const tipo &valor)
{
    nodo<tipo>* n = primeroPtr;
    while (n) {
        if (n->obtenerDatos() == valor) {
            return n;  // encontramos el nodo
        }
        n = n->siguientePtr;
    }
    return nullptr; // no se encontró
}


#endif // lista_H
