/*

 Unidad_1 actividad 2  Tipos de datos
   Author: Osiris Olimpia Martínez Osiris Olimpia
   Date: 18/09/2022
   Email: up210263@alumnos.upa.edu.mx
   Description: Mostrando diferentes tipos de datos 

*/

#include <iostream>    //Libreria para manejo de entradas y salida de pantalla

#include <stdio.h>    //Libreria para el uso de printf y scanf

using namespace std;  //Sirve para no tener que usar std::

int main()       //Función principal de tipo entero
{
    
    int entero = 4;
    float flotante = 2.565465654654;
    double grande = 2.565465654654;
    char caracter = 64;
    
    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El número entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << "  bytes" << endl;
    cout << "El número flotante es: " << flotante << endl;
    cout << "El tamaño del flotante es: " << sizeof(flotante)<< "  bytes" << endl;
    cout << "El número double es: " << grande << endl;
    cout << "El tamaño del double es: " << sizeof(grande)<< "  bytes" << endl;
    cout << "El caracter char es: " << caracter << endl;
    cout << "El tamaño del  char es: " << sizeof(caracter)<< "  byte" << endl;
    
    cout << "==================================================================" << endl;


    printf("Usando la función printf\n");
    printf("El número entero es: %i \n", entero);
    printf("El número flotante es: %3.1f \n", flotante);

     //https://cplusplus.com/reference/cstdio/printf/   fuente de información

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}
