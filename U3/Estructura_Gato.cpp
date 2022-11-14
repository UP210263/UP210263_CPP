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

void ttablero(int);
int turnoJugador = 1, jugada;
char espacioJuego[3][3] = {{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};
int seleccionarJugada();
void reescribirCasilla(int);
bool comprobarCasillaOcupada(int);
bool identificarGanador(int);
int obtenerJugada();
int obtenerMejorJugada();
void jugarGato(int);

int main()
{
    int tablero, jugada, player, numJugadores;
    string resultado;
    bool casillaOcupada = true, ganador = false;
    do
    {
        cout << "Choose the play mode: 1.-1 player  or 2.-2 players " << endl;
        cin >> numJugadores;
        if (numJugadores == 1)
        {
            cout<<"You are the player 1 and the PC is the player 2."
            jugarGato(numJugadores);
         
        }
        else if (numJugadores == 2)
        {
            ttablero(tablero);
            do
            {
                jugada = seleccionarJugada();
                casillaOcupada = comprobarCasillaOcupada(jugada);
                if (casillaOcupada == true)
                {
                    do
                    {
                        cout << "Try again,his place is invalid " << endl;
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
                player = 1;
            }
            else
            {
                player = 2;
            }
            cout << "Player " << player << " is the winner" << endl;
            return 0;
        }
        else
        {
            cout << "This character is invalid, try again" << endl;
        }
    } while (numJugadores != 1 && numJugadores != 2);
}

void jugarGato(int jugadores)
{
    int tablero, jugada, player, numJugadores;
    string resultado;
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
                        cout << "Try again,his place is invalid " << endl;
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
                player = 1;
            }else{
                player = 2;
            }
            cout << "Player " << player << " is the winner" << endl;
           // return 0;
            //else{
                cout << "This character is invalid, try again" << endl;
            } //while (ganador == false);
//}



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
        int row = jugada / 10, col = jugada - 1;
        espacioJuego[row][col] = 'O';
    }
    else
    {
        int row = jugada / 10, col = jugada - 1;
        espacioJuego[row][col] = 'X';
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

int obtenerJugada()
{
    srand(time(NULL));
    jugada = obtenerMejorJugada();
    if (jugada = 1)
    {
        return jugada;
    }
    else
    {
        jugada = 1 + rand() % 10;
        return jugada;
    }
}

int obtenerMejorJugada()
{

    return 0;
}
