/*
Date:24/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This program have to break down in exchange for Mexican bills and coins an amount entered by the user
*/

#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;


int turnoJugador = 0, jugada, numJugadores;
char espacioJuego[3][3] = {{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};

char copiaEspacio[3][3] = {{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};                           

void ttablero(int);                          
int seleccionarJugada();
void copiarTablero();
void reescribirCasilla(int);
bool comprobarCasillaOcupada(int);
bool comprobarCasillaImagOcupada(int);
bool identificarGanador(int);
bool identificarGanadorImag(int);
int obtenerJugada();
void reescribirCasillaImag(int);
int buenaJugada(char);
void jugarGato();
void colocarJugada();
int inteligencia();
int jugarPC();
void jugar2palyers();


int main()
{
    do
    {
        cout << "Choose the play mode: 1.-1 player  or 2.-2 players " << endl;
        cin >> numJugadores;
        if (numJugadores == 1)
        {
            
            jugarGato();
        }
        else if (numJugadores == 2)
        {
            jugar2palyers();
        }
        else
        {
            cout << "This character is invalid, try again" << endl;
        }
    } while (numJugadores != 1 && numJugadores != 2);
}



void jugarGato()
{
    int tablero, jugada;
    bool casillaOcupada = true, ganador = false;
    ttablero(tablero);
            
      do
        {
            if (turnoJugador % 2 == 0)
            {
                jugada = seleccionarJugada();
            }
            else
            {
                jugada = jugarPC();
            }

            casillaOcupada = comprobarCasillaOcupada(jugada);
            if (casillaOcupada == true)
            {
                do
                {
                    cout << "Invalid play. Try again\n";
                    break;
                } while (casillaOcupada == true);
            }
            else if (casillaOcupada == false)
            {
                system("clear");
                reescribirCasilla(jugada);
                ttablero(tablero);
                turnoJugador++;
            }
            ganador = identificarGanador(ganador);
        } while (ganador == false && turnoJugador < 9);
        if (turnoJugador < 9)
        {
            if (turnoJugador % 2 == 0)
            {
                cout << "\033[0;31m  You are the LOSER \033[0m"<<endl<<endl;
            }
            else
            {
                cout << "\033[0;32m You are the WINNER \033[0m"<<endl<<endl;
            }
        }
        else
        {
            cout << "\033[0;33m     Tied game  \033[0m"<<endl<<endl;
        }
        
}


int seleccionarJugada()
{
    int jugada;
    do
    {
        cout << "Chose a place: \n";
        cin >> jugada;
    } while (jugada < 0 && jugada >= 9);

    return jugada;
}


bool comprobarCasillaOcupada(int jugada)
{
    int row = jugada / 10, col = jugada - 1;
    if (espacioJuego[row][col] == 'X' || espacioJuego[row][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}


void reescribirCasilla(int jugada)
{
    if (turnoJugador % 2 == 0)
    {
        int fil = jugada / 10, col = jugada - 1;
        espacioJuego[fil][col] = 'O';
    }
    else
    {
        int fil = jugada / 10, col = jugada - 1;
        espacioJuego[fil][col] = 'X';
    }
}


void ttablero(int)
{
    int fi = 0, co = 0;
    for (int fila = 0; fila < 5; fila++)
    {
        for (int columna = 0; columna < 9; columna++)
        {
            if (fila == 1 || fila == 3)
            {
                cout << "_";
            }
            else if (columna == 1 || columna == 4 || columna == 7)
            {
                cout << espacioJuego[fi][co];
                co++;
            }
            else
            {
                cout << " ";
            }
            if (columna == 2 || columna == 5)
            {
                cout << "|";
            }
        }
        cout << endl;
        if (fila % 2 == 0)
        {
            fi++;
        }
        co = 0;
    }
    cout << endl;
}


bool identificarGanador(int Jugada)
{
    bool verificarGanador = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((espacioJuego[0][posicion] == espacioJuego[1][posicion]) && (espacioJuego[0][posicion] == espacioJuego[2][posicion]))
        {
            verificarGanador = true;
            break;
        }
        else if ((espacioJuego[posicion][0] == espacioJuego[posicion][1]) && (espacioJuego[posicion][0] == espacioJuego[posicion][2]))
        {
            verificarGanador = true;
            break;
        }
        else if ((espacioJuego[0][0] == espacioJuego[1][1]) && (espacioJuego[0][0] == espacioJuego[2][2]))
        {
            verificarGanador = true;
            break;
        }
        else if ((espacioJuego[0][2] == espacioJuego[1][1]) && (espacioJuego[0][2] == espacioJuego[2][0]))
        {
            verificarGanador = true;
            break;
        }
        
    }
    return verificarGanador;
}


void copiarTablero()
{
    for(int fil=0; fil<=3;fil++)
    {

        for (int   col = 0; col <=3; col++)
        {
            copiaEspacio[fil][col]=espacioJuego[fil][col];
        }
    }
}


bool identificarGanadorImag(int Jugada)
{
    bool verificarGanadorImag = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((copiaEspacio[0][posicion] == copiaEspacio[1][posicion]) && (copiaEspacio[0][posicion] == copiaEspacio[2][posicion]))
        {
            verificarGanadorImag = true;
            break;
        }
        else if ((copiaEspacio[posicion][0] == copiaEspacio[posicion][1]) && (copiaEspacio[posicion][0] == copiaEspacio[posicion][2]))
        {
            verificarGanadorImag = true;
            break;
        }
        else if ((copiaEspacio[0][0] == copiaEspacio[1][1]) && (copiaEspacio[0][0] == copiaEspacio[2][2]))
        {
            verificarGanadorImag = true;
            break;
        }
        else if ((copiaEspacio[0][2] == copiaEspacio[1][1]) && (copiaEspacio[0][2] == copiaEspacio[2][0]))
        {
            verificarGanadorImag = true;
            break;
        }
    }
    return verificarGanadorImag;
}


void reescribirCasillaImag(int jugada)
{
    
        int fil = jugada / 10, col = jugada - 1;
        copiaEspacio[fil][col] = 'O';
}


bool comprobarCasillaImagOcupada(int jugada)
{
    int fil = jugada / 10, col = jugada - 1;
    if (copiaEspacio[fil][col] == 'X' || copiaEspacio[fil][col] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}


int jugarPC()
{
    bool casillaOcupada = false;
    
    jugada = buenaJugada('X');
    if (jugada != -1)
    {
        return jugada;
    }
    while (casillaOcupada == false)
    {
        casillaOcupada = comprobarCasillaOcupada(jugada);
        jugada = 1 + rand() % 9;
    }
    return jugada;
}


int buenaJugada(char jugador)
{
    bool casillaOcupada = false;
    bool ganador = false;
    int jugadaPC = 0;
    copiarTablero();
    if (jugador == 'X')
    {
        do
        {
            jugadaPC++;
            casillaOcupada = comprobarCasillaImagOcupada(jugadaPC);
            if (casillaOcupada == false)
            {
                reescribirCasillaImag(jugadaPC);
                ganador = identificarGanadorImag(jugadaPC);
            }
            copiarTablero();
        } while (ganador == false &&  jugadaPC <= 9);
    }
    else
    {
        do
        {
            jugadaPC++;
            casillaOcupada = comprobarCasillaImagOcupada(jugadaPC);
            if (casillaOcupada == false)
            {
                reescribirCasillaImag(jugadaPC);
                ganador = identificarGanadorImag(jugadaPC);
            }
            copiarTablero();
        } while (ganador == false  && jugadaPC <= 9 );
    }
    if (jugadaPC >= 10)
    {
        jugadaPC = -1;
    }
    return jugadaPC;
}


void jugar2palyers()
{
    int tablero, jugada, player;
    bool casillaOcupada = true, ganador = false;
    ttablero(tablero);
            do
            {
                jugada = seleccionarJugada();
                casillaOcupada = comprobarCasillaOcupada(jugada);
                if (casillaOcupada == true)
                {
                    do
                    {
                        
                        cout << "Try again,this place is invalid " << endl;
                        break;
                    } while (casillaOcupada == true);
                }
                else if (casillaOcupada == false)
                {
                    system("clear");
                    reescribirCasilla(jugada);
                    ttablero(tablero);
                    turnoJugador++;
                }
                ganador = identificarGanador(ganador);
            } while (ganador == false);

            if (turnoJugador % 2 == 0)
            {
                player = 2;
                cout <<" \033[0;34m "<<"The player " << player << " is the WINNER \033[0m\n"<< endl<<endl<<endl;
            }

            else
            {
                player = 1;
                cout <<" \033[0;36m "<<"The player " << player << " is the WINNER \033[0m\n"<< endl<<endl<<endl;
            }
            
            
        
       
}