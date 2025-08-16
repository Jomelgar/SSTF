#ifndef COLA_H
#define COLA_H

#include "lista.h" // definición de la clase Lista
template< typename tipo >
class cola: lista< tipo >
{
public:
    // enqueue llama a la función miembro insertarAlFinal de Lista
    void enqueue( const tipo &datos )
    {
        lista<tipo>::insertarAlFinal( datos );
    } // fin de la función enqueue
    // dequeue llama a la función miembro eliminarDelFrente de Lista
    bool dequeue( tipo &datos )
    {
        return lista<tipo>::eliminarDelFrente( datos );
    } // fin de la función dequeue
    // estaListaVacia llama a la función miembro estaVacia de Lista
    bool estaListaVacia() const
    {
        return lista<tipo>::estaVacia();
    } // fin de la función estaListaVacia
    // imprimirCola llama a la función miembro imprimir de Lista
    void imprimirCola() const
    {
        lista<tipo>::imprimir();
    } // fin de la función imprimirCola

}; // fin de la clase Cola

#endif // COLA_H
