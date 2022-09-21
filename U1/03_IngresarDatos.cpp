/*Unidad 1 Entrada de datos
Author: Martínez Ramírezm Osiris Olimpia
Date: 21/09/2022
Description: Mostrará la forma en que el usuario ingresa tipos de datos
*/
#include <iostream>

#include<stdio.h>

using namespace std; //para evitar el uso de std:: más adelante

int main(){
    
    
    int entero;
    float flotante;
    double grande;
    char caracter;
    
    cout <<"Este programa muestra el ingreso de datos por el usuario.  \n";
    cout <<"Ingresa un dato tipo caracter: ";
    cin >> caracter;
    cout <<"El dato ingresado es : " << caracter<< endl;

    cout <<"==============================================================================" << endl;

    cout <<"Este programa muestra el ingreso de datos por el usuario.  \n";
    cout <<"Ingresa un dato tipo flotante: ";
    cin >> flotante;
    cout <<"El dato ingresado es : " << flotante << endl;

    cout <<"==============================================================================" << endl;

cout <<"Este programa muestra el ingreso de datos por el usuario.  \n";
    cout <<"Ingresa un dato tipo entero: ";
    cin >> entero;
    cout <<"El dato ingresado es : " << entero << endl;

    cout <<"==============================================================================" << endl;

    cout <<"Este programa muestra el ingreso de datos por el usuario.  \n";
    cout <<"Ingresa un dato tipo double: ";
    cin >> grande;
    cout <<"El dato ingresado es : " << grande << endl;

    cout <<"==============================================================================" << endl;


printf("Usando la función printf y scanf\n");
printf("Ingresa un dato tipo entero:   ");
scanf("%d", &entero);
printf("El dato ingresado es: %i \n", entero);



    return 0;

}

