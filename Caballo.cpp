#include "Caballo.h"
#include "Pieza.h"

Caballo::Caballo(){
    nombre='C';
}
Caballo::Caballo(char nombre): Pieza(nombre){

this->nombre=nombre;
}
char Caballo::getnombre(){
return nombre;
}
void Caballo::setnombre(char nombre){
this->nombre=nombre;
}
string Caballo::toString(){
return nombre+"";
}
 bool Caballo::validarMovimiento(int x, int y,int x1,int y1){
      if (((x-x1 == 2 || x1 - x == 2) || (x1 - x == 1 || x - x1 == 1)) && (((y - y1 == 2 || y1 - y == 2) || (y - y1 == 1 || y1 - y == 1)))) {
                return true;
            } else {
                return false;
            }
}
