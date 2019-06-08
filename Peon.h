#include "Pieza.h"
#ifndef PEON_H
#define PEON_H

class Peon:public Pieza{
private:
char nombre;

public:
Peon();
Peon(char);

char getnombre();
void setnombre(char);
virtual bool validarMovimiento(int, int,int,int);

string toString();
};
#endif

