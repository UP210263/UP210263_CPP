/*
Date:07/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This code have to do the convertion of any number in decimal sistem to binary sistem
*/
#include <iostream>
#include <stdio.h>
using namespace std;
string resultadoFinal;
    
    
    int main(){
    
    do{

            cout <<"Give me a number: ";
            cin >>numero;

            while (numero != 0){
    
                 resultadoFinal=(numero%2==0)?"0"+ resultadoFinal:"1"+ resultadoFinal;
                 numero /=2;
            }
            if (numero==0){
                cout <<"In binary your number is: "<<endl;
            }else if (numero< 0){
                cout <<"This caracter is invalid"<<endl;
            }else 
                cout <<"The number in binary sistem is: "<<resultadoFinal<<endl;
    }while (numero<0);

            cout <<"Finished process"<<endl;

    return 0;
}
