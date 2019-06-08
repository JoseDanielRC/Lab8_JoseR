#include "Alfil.h"

Alfil::Alfil(){
    nombre='A';
}
Alfil::Alfil(char nombre): Pieza(nombre){
this->nombre=nombre;
}
char Alfil::getnombre(){
return nombre;
}
void Alfil::setnombre(char nombre){
this->nombre=nombre;
}
string Alfil::toString(){
return nombre+"";
}
 bool Alfil::validarMovimiento(int x, int y,int x1,int y1){
   if (x != x1 && y != y1) {
            return true;
        } else {
            return false;
        }
}