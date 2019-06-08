#ifndef PIEZA_H
#define PIEZA_H
#include<string>
using std::string;
class Pieza{
protected:
char nombre;

public:
Pieza();
Pieza(char);

char getnombre();
void setnombre(char);
virtual bool validarMovimiento(int, int,int, int);
virtual string toString();
};
#endif
