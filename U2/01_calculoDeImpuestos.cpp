/*

Date:23/09/2022
Author:Osiris Olimpia Martínez Ramírez
Email: up210263@alumnos.upa.edu.mx
Description: Calculo de impuestos

*/

#include <iostream>
#include <stdio.h>   

using namespace std; 


int main(){

//Declaración de variables
   int renta;
   int impuestoPorcentaje;
   int impuestoDinero;

//Solicitando información al usuario
  cout <<"Ingrese el valor de su renta:  ";
  cin >> renta;
  

  //Analisis comparativo del valor ingresado por el usuario con las diferentes categorias
  //de rentas para asignale el impuesto correspondiente.
  
  if(renta<10000){
      impuestoPorcentaje=5;
  }

  if(renta>=10000 && renta<20000){
      impuestoPorcentaje=15;
       
  }
  if(renta>=20000 && renta<35000){
      impuestoPorcentaje=20;
  }

  if(renta>=35000 && renta<60000){
      impuestoPorcentaje=30;
  }

  if(renta>=60000){
      impuestoPorcentaje=45;
  }

//calculo del valor del economico del impuesto dependiendo de la renta del usuario.
impuestoDinero= renta*impuestoPorcentaje/100;


//Impreción de los resultados. Informando a los usuarios que impuesto se le asigna 
//   y cuanto deberá pagar.

cout <<"Debes pagar un impuesto de  "<<impuestoPorcentaje<< " %";
cout <<" , por lo tanto el valor de tu impuesto es de  $" << impuestoDinero<<endl;
cout <<"El costo total a pagar es de  $"<< impuestoDinero+renta<<endl;
cout <<endl;

return 0;
}
