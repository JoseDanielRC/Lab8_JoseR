#include<iostream>
#include<string>
#include "Pieza.h"
#include "Reina.h"
#include "Alfil.h"
#include "Caballo.h"
#include "Torre.h"
#include "Peon.h"
#include "Rey.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
Pieza*** llenado(){
    Pieza***tablero;
    tablero=new Pieza**[8];
    for (int i = 0; i < 8; i++)
    {
        tablero[i]=new Pieza*[8]; 
    }
    return tablero;
}
void imprimir(Pieza*** tablero){
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0;  j< 8; i++)
        {
            cout<<"["<<tablero[i][j]->getnombre()<<"]";
        }
        cout<<endl;
    }

}
int main(){
    cout<<"pasoo"<<endl;
    char resp='s';
    Pieza*** tablero;
    Rey* rey= new Rey();
    cout<<"pasoo"<<endl;
    string coordenada;
    int turno=1,opcion,pieza;
    int x1=0,x=0,y1=0,y=0;
    while(resp=='s'){
        tablero=llenado();
        tablero[7][4]=rey;
        tablero[0][4]=rey;
            cout<<"1.Nuevo juego\n"
                  "2.Repeticion juego anterior"<<endl;
            cin>>opcion;
                    switch (opcion)
                    {
                    case 1:
                        cout<<"Ingrese numeros de pieza a utilizar\n"
                        "1.Peon\n"
                        "2.Torre\n"
                        "3.Caballo\n"
                        "4.Alfil\n"
                        "5.Reina\n"<<endl;
                        cin>>pieza;
                        switch (pieza)
                        {
                        case 1:{
                            Peon* peon=new Peon();
                            tablero[6][4]=peon;
                            tablero[1][4]=peon;
                            
                        }break;
                        case 2:{
                            Torre* torre=new Torre();
                            tablero[7][0]=torre;
                            tablero[0][0]=torre;
                        }break;
                        case 3:{
                            Caballo* caballo=new Caballo();
                            tablero[7][1]=caballo;
                            tablero[0][1]=caballo;
                        }break;
                        case 4:{ 
                            Alfil* alfil= new Alfil();
                            tablero[7][2]=alfil;
                            tablero[0][2]=alfil;
                            
                        }break;
                        case 5:{ 
                            Reina* reina = new Reina();
                            tablero[7][3]=reina;
                            tablero[0][3]=reina;
                            
                        }break;

                        }
                        while(turno!=0){
                            while (turno==1){
                                cout<<"Jugador 1 ingrese su coordenada [ax(posicion actual),bx(destino)]"<<endl;
                                cin>>coordenada;
                                x=((coordenada[1])-97)*-1+8;
                                cout<<x<<endl;
                                cout<<"holaa";
                                y=(coordenada[4]-97)*-1+8;
                                
                                if(tablero[x][((int)coordenada[2])*-1+8]->validarMovimiento(x,((int)coordenada[2])*-1+8,y,(coordenada[5]-48)*-1+8)){
                                    tablero[y][((int)coordenada[5])*-1+8]=tablero[x][((int)coordenada[2])*-1+8];
                                    tablero[x][((int)coordenada[2])*-1]->setnombre(' ');
                                    //imprimir(tablero);
                                    turno=2;
                                    
                                }else{
                                    turno=1;
                                }          

                            }
                            while(turno==2){
                                cout<<"Jugador 2 ingrese su coordenada [ax(posicion actual),bx(destino)]"<<endl;
                                cin>>coordenada;
                               x=((coordenada[1])-97)*-1+8;
                               
                                y=(coordenada[4]-97)*-1+8;
                                if(tablero[x][((int)coordenada[2])*-1+8]->validarMovimiento(x,((int)coordenada[2])*-1+8,y,(coordenada[5]-48)*-1+8)){
                                    tablero[y][((int)coordenada[5])*-1+8]=tablero[x][((int)coordenada[2])*-1+8];
                                    tablero[x][((int)coordenada[2])*-1]->setnombre(' ');
                                    imprimir(tablero);
                                    turno=1;
                                    
                                }else{
                                    turno=2;
                                }          
                       }
                           cout<<"Salir=0"<<endl;
                           cin>>turno;         
                    }
                    break;
                }
                cout<<"Desea seguir[s/n]"<<endl;
                cin>>resp;
            }
    return 0;

}