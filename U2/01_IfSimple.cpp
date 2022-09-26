
/*
Date: 22/09/2022
Author: Martínez Ramírez Osiris Olimpia 
Email: Uup210263@alumnos.upa.edu.mx
Description: Using the if sentence for a condition.

*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main (){

int dato=88;
int num;

cout <<"Ingrese un valor entero:  ";
cin >>num;

  if(num>dato){

    cout <<"Tú valor es mayor a los primeros  "<<dato<< " números."<< endl;

  }

if(num<dato){

    cout <<"Tú valor está dentro de los primeros  "<<dato-1<< " números."<< endl;

}

if(num==dato){

    cout <<"Genial ingresaste el  "<<dato<< " :) , yo también."<< endl;

}

if(num!=dato){

    cout <<"Tú valor no es el  "<<dato<< " verdad."<< endl;

}

if(num>=dato){

    cout <<"Tú valor es mayor o igual al "<<dato<< "  -.-"<< endl;

}

if(num<=dato){

    cout <<"Tú valor está dentro de los primeros  "<<dato<< " números."<< endl;

}


return 0;


}
