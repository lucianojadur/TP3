#ifndef PRECIPICIO_H_INCLUDED
#define PRECIPICIO_H_INCLUDED
#include "casillero.h"
#include "personaje.h"
class Precipicio : public Casillero{
private:

public:
    /*
    pre:
    post:
    */
    Precipicio(int, int, Personaje* );

    /*
    pre: si existe un personaje...
    post: valida el elemento del personaje, y resta la energia, segun corresponda
    */
    void restarGastoDeEnergia(Personaje* );

    ~Precipicio();
};


#endif // PRECIPICIO_H_INCLUDED
