/*
Date:07/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This code have to do the convertion of any number in decimal sistem to binary sistem
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int constante;
    int limite;
    int resultado;
    cout << "Write a number: ";
    cin >>constante;
    cout <<"Indicate the limit number: ";
    cin >>limite;
    
    for (int contador= 1; contador <= limite; contador++){

        for (int line= 0; line < 48; line++)
        {
            cout <<"_";
        }
        
        cout <<endl;
        resultado= constante*contador;
        
        cout <<"|\t"<<contador <<"\t|  X  |\t"<<constante<<"\t|  =  |\t"<<resultado<<"\t|"<<endl;
   
    }

    for (int line= 0; line < 48; line++)
        {
            cout <<"_";
        }
    cout <<endl;
    
    return 0;
}
