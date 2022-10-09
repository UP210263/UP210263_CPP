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

//Declaration of variables
   int renta;
   int impuestoPorcentaje;
   int impuestoDinero;

//Request information about user
  cout <<"Enter the value of your rent:  ";
  cin >> renta;
  

  //Comparative analysis of the value entered by the user with the different categories
  //of income to assign the corresponding tax.


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

//calculation of the economic value of the tax depending on the user's income.
impuestoDinero= renta*impuestoPorcentaje/100;


//Printing of the results. Informing users that tax is assigned
// and how much you will have to pay.

cout <<"You have to pay a tax of:  "<<impuestoPorcentaje<< " %";
cout <<" , therefore the value of your tax is $" << impuestoDinero<<endl;
cout <<"The total cost to pay is $"<< impuestoDinero+renta<<endl;
cout <<endl;

return 0;
}

