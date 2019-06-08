#include "Pieza.h"
#include<iostream>
#include <string>
Pieza::Pieza(){
    nombre=' ';
}
Pieza::Pieza(char nombre){

this->nombre=nombre;
}
char Pieza::getnombre(){
return nombre;
}
void Pieza::setnombre(char nombre){
this->nombre=nombre;
}
string Pieza::toString(){

return nombre+"";
}
bool Pieza::validarMovimiento(int x, int y,int x1, int y1){
    return true;
}

