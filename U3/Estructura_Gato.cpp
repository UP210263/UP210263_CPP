/*
Date:24/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This program have to break down in exchange for Mexican bills and coins an amount entered by the user
*/


#include <iostream>
#include <stdio.h>
using namespace std;

void crearEstructura();
int seleccionarJugada();
void imprimirgato();


char pocisionesJugadas[3][3]={{'1','2','3'},
                              {'4','5','6'},
                              {'7','8','9'}, };

 char tablero[11][11];                             

int fila,col;
int vuelta=0;
int jugada;
char jugador;

int main(){
    crearEstructura();
    //seleccionarJugada();
    cout <<tablero[1][1]<<endl;

}

    
void crearEstructura (){
    for ( fila = 0; fila < 11; fila++){
        for ( col = 0; col < 11; col++)
        {
           if ((fila==3||fila==7)&&(col==3||col==7)){
                cout<<"+";
           }else if ((fila%2==0) && (col!=3 && col!=7)){
                cout <<"    ";

            }else if ((fila%2==0)&&(col==3||col==7)){
                cout<<"|";
            }else if ((col%2==0)&&(fila==3||fila==7)){
                 cout<<"-----";
            }else if ((col%2==0)&&(fila!=3||fila!=7))
            {
                cout<<" ";
            }else if ((fila%2!=0)&&(fila==3||fila==7)){
                cout<<"--";
            }else if ((fila%2!=0)&&(col==3||col==7)){
                cout<<"|";
            }else if ((fila%2!=0)&&(col!=3||col!=7)){
                cout<<"          ";
            }
        } 
              
    
      cout<<endl;
    }
}

int seleccionarJugada(){
    
    do{
        cout<<"Chose the option that you want: ";
        cin>>jugada;
    }while (jugada<=9 && jugada>0);
    return jugada;
}

void registrarPocision(){
    
    pocisionesJugadas[1][1]=(jugada=='1')?jugador:
    
    pocisionesJugadas[1][5]=(jugada=='2')?jugador:
    
    pocisionesJugadas[1][9]=(jugada=='3')?jugador:
    
    pocisionesJugadas[5][1]=(jugada=='4')?jugador:
    
    pocisionesJugadas[5][5]=(jugada=='5')?jugador:
    
    pocisionesJugadas[5][9]=(jugada=='6')?jugador:
    
    pocisionesJugadas[9][1]=(jugada=='7')?jugador:
    
    pocisionesJugadas[9][5]=(jugada=='8')?jugador:
    
    pocisionesJugadas[9][9]=(jugada=='9')?jugador:' ';
    
    
}

 char turno (){
    char jugador=(vuelta%2==0)?'X':'O';
     return jugador;
 }


bool determinarTriunfo(){
    bool hayGanador;

    if(tablero[1][1]!=' ' && tablero[1][5]==tablero[1][9] && tablero[1][9]==tablero[1][1]){
        hayGanador=true;
    }else if (tablero[5][1]!=' ' && tablero[5][5]==tablero[5][9] && tablero[5][9]==tablero[5][1])
    {
        hayGanador=true;
    }else if (tablero[9][1]!=' ' && tablero[9][5]==tablero[9][9] && tablero[9][9]==tablero[9][1])
    {
        hayGanador=true;
    }else if (tablero[1][1]!=' ' && tablero[5][1]==tablero[9][1] && tablero[9][1]==tablero[1][1])
    {
        hayGanador=true;
    }
    
}

