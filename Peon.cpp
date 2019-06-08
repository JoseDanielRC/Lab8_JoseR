#include "Peon.h"

Peon::Peon(){
    nombre='P';
}
Peon::Peon(char nombre):Pieza(nombre){

this->nombre=nombre;
}
char Peon::getnombre(){
return nombre;
}
void Peon::setnombre(char nombre){
this->nombre=nombre;
}
string Peon::toString(){

return nombre+"";
}
 bool Peon::validarMovimiento(int x, int y,int x1, int y1){
    if (x < x1 && y == y1 ) {
                return true;
            } else {
                return false;
    }
}