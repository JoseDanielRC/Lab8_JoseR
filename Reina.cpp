#include "Reina.h"

Reina::Reina(){
    nombre='Q';
}
Reina::Reina(char nombre):Pieza(nombre){

this->nombre=nombre;
}
char Reina::getnombre(){
return nombre;
}
void Reina::setnombre(char nombre){
this->nombre=nombre;
}
string Reina::toString(){

return nombre+"";
}
 bool Reina::validarMovimiento(int x, int y,int x1, int y1){
    return true;
}
