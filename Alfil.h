#include "Pieza.h"
#ifndef ALFIL_H
#define ALFIL_H
class Alfil:public Pieza{
private:
char nombre;

public:
Alfil();
Alfil(char);

char getnombre();
void setnombre(char);
virtual bool validarMovimiento(int, int,int,int);
string toString();
};
#endif
