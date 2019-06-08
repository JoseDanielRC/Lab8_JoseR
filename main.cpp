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
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            tablero[i][j]=new Pieza();
        }
        
            
    }
    
    return tablero;
}
void imprimir(Pieza*** tablero){
   for (int i = 0; i < 8; i++)
    {
        for (int j = 0;  j< 8; j++)
        {
            cout<<"["<<tablero[i][j]->getnombre()<<"]";
        }
        cout<<endl;
    }
    cout<<"esooooo"<<endl;

}
int main(){
    cout<<"pasoo"<<endl;
    char resp='s';
    Pieza*** tablero;
    Rey* rey= new Rey('K');
    cout<<"pasoo"<<endl;
    string coordenada;
    int turno=1,opcion,pieza;
    int x1=0,x=0,y1=0,y=0;
    while(resp=='s'){
        tablero=llenado();
        tablero[7][4]=rey;
        tablero[0][4]=rey;
        imprimir(tablero);
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
                            Peon* peon=new Peon('P');
                            tablero[6][4]=peon;
                            tablero[1][4]=peon;
                            
                        }break;
                        case 2:{
                            Torre* torre=new Torre('T');
                            tablero[7][0]=torre;
                            tablero[0][0]=torre;
                        }break;
                        case 3:{
                            Caballo* caballo=new Caballo('C');
                            tablero[7][1]=caballo;
                            tablero[0][1]=caballo;
                        }break;
                        case 4:{ 
                            Alfil* alfil= new Alfil('A');
                            tablero[7][2]=alfil;
                            tablero[0][2]=alfil;
                            
                        }break;
                        case 5:{ 
                            Reina* reina = new Reina('R');
                            tablero[7][3]=reina;
                            tablero[0][3]=reina;
                            
                        }break;

                        }
                        while(turno!=0){
                            while (turno==1){
                                cout<<"Jugador 1 ingrese su coordenada [ax(posicion actual),bx(destino)]"<<endl;
                                cin>>coordenada;
                                x=(((coordenada[1])-97)*-1)+7;
                                
                                x1=((coordenada[4]-97)*-1)+7;
                                y=((coordenada[2]-48)*-1)+7;

                                y1=(coordenada[5]-48*-1)+7;
                                turno=2;
                                if(tablero[x][y]->validarMovimiento(x,y,x1,y1)){
                                    tablero[x1][y1]=tablero[x][y];
                                    tablero[x][y]->setnombre(' ');
                                   imprimir(tablero);
                                    turno=2;
                                    
                                }else{
                                     turno=1;
                                }          

                            }
                            while(turno==2){
                                cout<<"Jugador 2 ingrese su coordenada [ax(posicion actual),bx(destino)]"<<endl;
                                cin>>coordenada;
                                x=(((coordenada[1])-97)*-1)+7;
                                
                                cout<<x<<endl;
                                x1=((coordenada[4]-97)*-1)+7;
                                y=((coordenada[2]-48)*-1)+7;
                                cout<<y;
                                y1=(coordenada[5]-48*-1)+7;
                                turno=2;
                                if(tablero[x][y]->validarMovimiento(x,y,x1,y1)){
                                    tablero[x1][y1]=tablero[x][y];
                                    tablero[x][y]->setnombre(' ');
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