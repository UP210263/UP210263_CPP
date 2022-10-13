/*
Date:12/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This code have to do the convertion of any number in decimal sistem to binary sistem
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
//Declaration of variables
    int constante;
    int limite;
    int resultado;

    //Ask the number for the table to user
    cout << "Write a number: ";
    cin >>constante;//Read the number and it give this value to the variable "numero"
    cout <<"Indicate the limit number: ";
    cin >>limite;//Read the number and it give this value to the variable "limite"
    
    for (int contador= 1; contador <= limite; contador++){//starts the loop to repeat the multiplication and printing process
    // until the amount of assigned to the "limit" variable is reached

        for (int line= 0; line < 48; line++)//This FOR is for make the frame of the multiplication table.
        {
            cout <<"_";
        }
        
        cout <<endl;
        resultado= constante*contador;// calculate the answer of multiplication
        
        cout <<"|\t"<<contador <<"\t|  X  |\t"<<constante<<"\t|  =  |\t"<<resultado<<"\t|"<<endl;//Print the table and answers for user will can see it
   
    }

    for (int line= 0; line < 48; line++)//make the last line of table
        {
            cout <<"_";
        }
    cout <<endl;
    
    return 0;
}
