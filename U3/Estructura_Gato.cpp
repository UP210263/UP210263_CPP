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
void mostrarJugadas();
int seleccionarJugada();

char estructura_Gato[11][11]={{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                              {' ','1',' ',' ',' ','2',' ',' ','3',' ',' '},
                              {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                              {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                                {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                                {' ','4',' ',' ',' ','5',' ',' ','6',' ',' '},
                                {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                                {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                                {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                                {' ','7',' ',' ',' ','8',' ',' ','9',' ',' '},
                                {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
char pocisionesJugadas[3][3]={{'1','2','3'},
                              {'4','5','6'},
                              {'7','8','9'}, };

int main(){
    crearEstructura();
    seleccionarJugada();

}


    
void crearEstructura (){
    for (int fila = 0; fila < 11; fila++){
        for (int col = 0; col < 11; col++)
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
            }else if((fila==1||fila==5||fila==9)&&(col==1||col==5||col==9)){
              cout <<"X";
           } 
              
        }
      cout<<endl;
    }
}

 void mostrarJugada(){

 }
int seleccionarJugada(){
    int jugada;
    do{
        cout<<"Chose the option that you want: ";
        cin>>jugada;
    }while (jugada<=9 && jugada>0);
    return jugada;
}