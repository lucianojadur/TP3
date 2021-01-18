#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include "nodo.h"


class Cola {
private:
    // atributos
    Nodo* primero;
    Nodo* ultimo;

public:
    // constructor
    // pos: crea una cola vacia
    Cola();

    // pos: agrega d al final
    void alta(Dato d);

    // pre: cola no vacia
    // pos: saca el elemento que esta al principio
    void baja();

    // pre: cola no vacia
    // pos: devuelve el primer dato de la cola
    Dato consulta();

    //pre:-
    //post: devuelve true is la cola no esta vacia y devuelve true si lo esta
    bool vacia();

    // pos: libera la memoria
    virtual ~Cola();
};

#endif // COLA_H_INCLUDED
