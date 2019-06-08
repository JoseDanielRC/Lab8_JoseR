#include "Rey.h"

Rey::Rey(){
    nombre='K';
}
Rey::Rey(char nombre):Pieza(nombre){

this->nombre=nombre;
}
char Rey::getnombre(){
return nombre;
}
void Rey::setnombre(char nombre){
this->nombre=nombre;
}
string Rey::toString(){
return nombre+"";
}
 bool Rey::validarMovimiento(int x, int y,int x1, int y1){
     if(x){
    return true;
     }else{
         return false;
     }
}
