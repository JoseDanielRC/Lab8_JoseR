#include "Pieza.h"
#ifndef REINA_H
#define REINA_H

class Reina:public Pieza{
private:
char nombre;

public:
Reina();
Reina(char);

char getnombre();
void setnombre(char);
virtual bool validarMovimiento(int, int,int,int);
string toString();
};
#endif

