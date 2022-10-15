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
       int numero; 
    
    do{

            cout <<"Give me a number: ";
            cin >>numero;

            if (numero== 0){
                    resultadoFinal="    0";
            }else if(numero<0){
                    cout <<"Character invalid. Try again."<<endl;
            }else

            if (numero > 0){
                while (numero!=0){ 
                    resultadoFinal=(numero%2==0)?"0"+ resultadoFinal:"1"+ resultadoFinal;
                    numero /=2;
                
                 }
                 if (numero== 0){
                    cout <<endl;
                }
            }

        }while (numero<0);

            cout <<"In binary is: "<<resultadoFinal<<endl;
            cout <<endl;

    return 0;
    }

