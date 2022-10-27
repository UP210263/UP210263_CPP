/*
Date:24/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This program have to break down in exchange for Mexican bills and coins an amount entered by the user
*/
#include <iostream>
#include <stdio.h>
using namespace std;

void desglosarCambio(int);


int quini=0, doci=0, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, dos=0, uno=0;

int main (){
    int dinero;
    string cantidadPrint;

    cout <<"Give me the total of cash: ";
    cin >>dinero;

    desglosarCambio(dinero);

}

void desglosarCambio (int cantidad){
    int billete;
    int residuo;
    int cantidadPrint;
    do{
        for (int cont=1; cont<10; cont++){
            if (cont==1){
                billete=500;
            }else  if (cont==2){
                billete=200;
            }else  if (cont==3){
                billete=100;
            }else  if (cont==4){
                billete=50;
            }else  if (cont==5){
                billete=20;
            }else  if (cont==6){
                billete=10;
            }else  if (cont==7){
                billete=5;
            }else  if (cont==8){
                billete=2;
            }else  if (cont==9){
                billete=1;
            }

            if (cantidad%billete==0){
               cantidadPrint=cantidad/billete; 
              cantidad=0;
            }else {
                cantidadPrint=cantidad/billete;
                residuo=cantidad%billete;
                cantidad=residuo;
            }
            cout <<"$"<<billete<<"\t---\t"<<cantidadPrint<<endl;
        }

    }while (cantidad%billete != 0);
    cout <<endl;
}
