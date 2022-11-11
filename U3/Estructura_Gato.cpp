/*
Date:24/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This program have to break down in exchange for Mexican bills and coins an amount entered by the user
*/

/* 
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

*/
// 
#include <iostream>
#include <stdio.h>
using namespace std;

void ttablero(int);
int turnoJugador = 1;
char espacioJuego[3][3] = {{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};
int seleccionarJugada();
void reescribirCasilla(int jugada);
bool comprobarCasillaOcupada(int jugada);
void modoJuego(int);
bool identificarGanador(int jugada);


int main(){
    int tablero, jugador1, jugador2, jugada,player;
    bool casillaOcupada = true, ganador = false;
    ttablero(tablero);
    do
    {
        jugada = seleccionarJugada();
        casillaOcupada = comprobarCasillaOcupada(jugada);
        if (casillaOcupada == true)
        {
            do{
                cout << "Casilla invalida, elija otra"<<endl;
                break;
            } while (casillaOcupada == true);
        }
        else if (casillaOcupada == false){
            system("clear");
            reescribirCasilla(jugada);
            ttablero(tablero);
            turnoJugador++;
        }
        ganador = identificarGanador(ganador);
    } while (ganador == false);
    
    if (turnoJugador % 2 == 0){
        player=1;
    }else{
        player=2;
    }
    cout<< "Player "<<player<<" is the winner"<<endl;
    return 0;
}




int seleccionarJugada(){
    int jugada;
    do{
        cout << "Chose a place: \n";
        cin >> jugada;
    } while (jugada < 0 && jugada >= 9);

    return jugada;
}




bool comprobarCasillaOcupada(int jugada){
    int row = jugada / 10, col = jugada - 1;
    if (espacioJuego[row][col] == 'X' || espacioJuego[row][col] == 'O'){
        return true; 
    }else{
        return false;
    }
}





void reescribirCasilla(int jugada){
    if (turnoJugador % 2 == 0){
        int row = jugada / 10, col = jugada - 1;
        espacioJuego[row][col] = 'O';
    }else{
        int row = jugada / 10, col = jugada - 1;
        espacioJuego[row][col] = 'X';
    }
}





void ttablero(int){
    int x = 0, y = 0;
    for (int fila = 0; fila < 5; fila++){
        for (int columna = 0; columna < 9; columna++){
            if (fila == 1 || fila == 3){
                cout << "-";
            }else if (columna == 1 || columna == 4 || columna == 7){
                cout << espacioJuego[x][y];
                y++;
            }else{
                cout << " ";
            }
            if (columna == 2 || columna == 5){
                cout << "|";
            }
        }
        cout <<endl;
        if (fila % 2 == 0){
            x++;
        }
        y = 0;
    }
}



bool identificarGanador(int Jugada){
    int punto = 0;
    bool verificarGanador = false;
    for (int  posicion = 0; posicion < 3; posicion++){
        if ((espacioJuego[0][posicion] == espacioJuego[1][posicion]) && (espacioJuego[0][posicion] == espacioJuego[2][posicion])){
            verificarGanador = true;
            break;
        }
        else if ((espacioJuego[posicion][0] == espacioJuego[posicion][1]) && (espacioJuego[posicion][0] == espacioJuego[posicion][2]))
        {
            verificarGanador = true;
            break;
        }
    }
    return verificarGanador;
}


  


