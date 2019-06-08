#include "Pieza.h"
#ifndef CABALLO_H
#define CABALLO_H

class Caballo:public Pieza{
private:
char nombre;

public:
Caballo();
Caballo(char);

char getnombre();
void setnombre(char);
virtual bool validarMovimiento(int, int,int,int);
string toString();
};
#endif
