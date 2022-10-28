/*
Date:24/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This program have to break down in exchange for Mexican bills and coins an amount entered by the user
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int conjuntos[8][8];

int main(){
    ingresarValores();
    imprimirValores();

    return 0;
}

void ingresarValores(){
    for (int row = 0; row < 8; row++){
        for (int col = 0; col < 8; col++)
        {
            cout << "Write a number: ";
            cin >>conjuntos[row][col];
        }
        cout <<endl;
    }
    
    return 0;
}

void imprimirValores(){
    for(int row = 0; row < 8; row++){
        for (int col = 0; col < 8; col++)
        {
            cout <<conjuntos[row][col]<<"\t";
        }
        cout <<endl;
}