#include "Pieza.h"
#ifndef REY_H
#define REY_H

class Rey:public Pieza{
private:
char nombre;

public:
Rey();
Rey(char);

char getnombre();
void setnombre(char);
virtual bool validarMovimiento(int, int, int, int);
string toString();
};
#endif
