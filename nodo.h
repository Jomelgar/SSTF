#ifndef NODO_H
#define NODO_H

// declaración anticipada de la clase Lista, requerida para anunciar que la clase
// Lista existe y poder utilizarla en la declaración friend de la línea 13
template< typename tipo > class lista;
template< typename tipo >
class nodo
{
    friend class lista< tipo >; // hace de Lista una amiga
public:
    nodo( const tipo & ); // constructor
    tipo obtenerDatos() const; // devuelve los datos en el nodo
private:
    tipo datos; // datos
    nodo< tipo > *siguientePtr; // siguiente nodo en la lista
    nodo<tipo> * anteriorPtr;
}; // fin de la clase nodo
// constructor
template< typename tipo >
nodo< tipo >::nodo( const tipo &info )
    : datos( info ), siguientePtr( 0 )
{
    // cuerpo vacío
} // fin del constructor de nodo
// devuelve una copia de los datos en el nodo
template< typename tipo >
tipo nodo< tipo >::obtenerDatos() const
{
    return datos;
} // fin de la función obtenerDatos

#endif // nodo_H
