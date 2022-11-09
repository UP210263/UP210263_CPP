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

#include <iostream>

using namespace std;

void Tablero(int);
int TurnoJugador = 1;
char    espacioJuego[3][3] = {{'1', '2', '3'},
                              {'4', '5', '6'},
                              {'7', '8', '9'}};
int SeleccionarJugada();
void ReemplazarCasilla(int Jugada);
bool ComprobarJugadaOcupada(int Jugada);
void ModoDeJuego(int);
bool identificarGanador(int Jugada);


int main(){
    int tablero, jugador1, jugador2, computadora, jugada;
    bool casillaocupada = true, ganador = false;
    Tablero(tablero);
    do
    {
        jugada = SeleccionarJugada();
        casillaocupada = ComprobarJugadaOcupada(jugada);
        if (casillaocupada == true)
        {
            do
            {
                cout << "Casilla invalida, elija otra\n";
                break;
            } while (casillaocupada == true);
        }
        else if (casillaocupada == false)
        {
            system("clear");
            ReemplazarCasilla(jugada);
            Tablero(tablero);
            TurnoJugador++;
        }
    ganador = VerificarGanador(ganador);
    } while (ganador == false);
    if (TurnoJugador % 2 == 0)
    {
        cout << "Gano el jugador 1";
    }
    else
    {
        cout << "Gano el jugador 2";
    }

    return 0;
}




int SeleccionarJugada(){
    int Jugada;
    do
    {
        cout << "Dame tu jugada: \n";
        cin >> Jugada;
    } while (Jugada < 0 && Jugada >= 9);

    return Jugada;
}




bool ComprobarJugadaOcupada(int Jugada){
    int row = Jugada / 10, col = Jugada - 1;
    if (espacioJuego[row][col] == 'X' || espacioJuego[row][col] == 'O'){
        return true; // Significa que la casilla esta ocupada
    }else{
        return false;
    }
}





void ReemplazarCasilla(int Jugada){
    if (TurnoJugador % 2 == 0){
        int row = Jugada / 10, col = Jugada - 1;
        espacioJuego[row][col] = 'O';
    }else{
        int row = Jugada / 10, col = Jugada - 1;
        espacioJuego[row][col] = 'X';
    }
}





void Tablero(int){
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
        cout << "\n";
        if (fila % 2 == 0){
            x++;
        }
        y = 0;
    }
}



bool identificarGanador(int Jugada){
    int punto = 0;
    bool VerificarGanador = false;
    for (int  posicion = 0; posicion < 3; posicion++){
        if ((espacioJuego[0][posicion] == espacioJuego[1][posicion]) && (espacioJuego[0][posicion] == AreaJuego[2][posicion])){
            identificarGanador = true;
            break;
        }
        else if ((espacioJuego[posicion][0] == espacioJuego[posicion][1]) && (espacioJuego[posicion][0] == AreaJuego[posicion][2]))
        {
            identificarGanador = true;
            break;
        }
    }
    return identificarGanador;
}
//Footer
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




