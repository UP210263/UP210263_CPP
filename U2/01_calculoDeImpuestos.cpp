/*

Date:23/09/2022
Author:Osiris Olimpia Martínez Ramírez
Email: up210263@alumnos.upa.edu.mx
Description: Calculo de impuestos

*/

#include <iostream>
#include <stdio.h>   

using namespace std; 

int renta;
int impuestoPorcentaje;
int impuestoDinero;

int main(){

  cout <<"Ingrese el valor de su renta:  ";
  cin >> renta;
  
  if(renta<10000){
       impuestoPorcenaje=5;
  }

  if(renta>=10000&&renta<20000){
       impuestoPorcentaje=15;
       
  }
if(renta>=20000&&renta<35000){
       impuesto=20;
  }

if(renta>=35000&&renta>60000){
       impuestoPorcentaje=5;
  }

if(renta>=60000){
       impuestoPorcentaje=45;
  }

impuestoDinero=renta*(impuestoPorcentaje/100);

cout <<"Debes pagar un impuesto de  " << impuestoPorcentaje << " %";
cout <<" , por lo tanto el valor de tu impuesto es de  $" << impuestoDinero;



}
