#include "Pieza.h"
#ifndef TORRE_H
#define TORRE_H

class Torre:public Pieza{
protected:
char nombre;

public:
Torre();
Torre(char);

char getnombre();
void setnombre(char);
virtual bool validarMovimiento(int, int,int,int);
string toString();
};
#endif
