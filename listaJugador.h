#ifndef LISTAJUGADOR_H_INCLUDED
#define LISTAJUGADOR_H_INCLUDED
#include "nodoJugador.h"
#include "jugador.h"

class NodoJugador;
class Jugador;

class ListaJugador{
private:
    // atributos
    NodoJugador* primero;
    NodoJugador* actual;
    int cantidad;

public:
    // constructor
    // pos: crea una cola vacia
    ListaJugador();

    // pre: 0 < pos <= cantidad + 1
    // pos: inserta el Personaje* d en la posicion pos, la 1 es la primera
    //        ademas incrementa cantidad en 1
    void alta(Jugador* d, int pos);


    // pre: 0 < pos <= cantidad
    // pos: saca el elemento que esta en pos
    void baja(int pos);

    // pre: 0 < pos <= cantidad
    // pos: devuelve el elemento que esta en pos
    Jugador* consulta(int pos);


    bool vacia();

    // pos: libera la memoria
    virtual ~ListaJugador();

    int obtener_cantidad();

    // reinicia el puntero actual a la primera posición (o nulo si la lista es vacía).
    // PRE:
    // POS: pone el puntero a la primera posición o apuntando a NULL
    void reiniciar( );

    // consulta si hay un elemento siguiente (si el actual no apunta a NULL)
    // PRE:
    // POS: devuelve true si el actual no apunta a NULL, false de lo contrario
    bool hay_siguiente( );

    // devuelve el siguiente elemento (el elemento que apunta actual)
    // PRE: hay_siguiente tiene que haber devuelto true previamente
    // POS: devuelve el elemento actual y avanza
    Jugador* siguiente();


    // pos: devuelve true si d esta en la lista, false de lo contrario
    bool esta(Jugador* d);


    NodoJugador* obtener_nodo(int pos);
};

#endif // LISTAJUGADOR_H_INCLUDED
