#ifndef PILA_H
#define PILA_H
#include "lista.h"

template< typename tipo >
class pila : private lista< tipo >
{
public:
    // push llama a la función insertarAlFrente de Lista
    void push( const tipo &datos )
    {
        lista<tipo>::insertarAlFrente( datos );
    } // fin de la función push
    // pop llama a la función eliminarDelFrente de Lista
    bool pop( tipo &datos )
    {
        return lista<tipo>::eliminarDelFrente( datos );
    } // fin de la función pop
    // estaPilaVacia llama a la función estaVacia de Lista
    bool estaPilaVacia() const
    {
        return lista<tipo>::estaVacia();
    } // fin de la función estaPilaVacia
    // imprimirPila llama a la función imprimir de Lista
    void imprimirPila() const
    {
        lista<tipo>::imprimir();
    } // fin de la función imprimir
}; // fin de la clase Pila

#endif // PILA_H
