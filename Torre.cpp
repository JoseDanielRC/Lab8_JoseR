#include "Torre.h"
#include "Pieza.h"
Torre::Torre(){
    nombre='T';
}
Torre::Torre(char nombre): Pieza(nombre){

this->nombre=nombre;
}
char Torre::getnombre(){
return nombre;
}
void Torre::setnombre(char nombre){
this->nombre=nombre;
}
string Torre::toString(){

return nombre+"";
}
 bool Torre::validarMovimiento(int x, int y,int x1,int y1){
    if (x == x1 || y == y1) {
            return true;
        } else {
            return false;
        }
}
