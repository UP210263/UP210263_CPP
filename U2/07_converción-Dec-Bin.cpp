/*
Date:10/10/2022
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
    
    do{//Starts the cycle to prompt the user for the number at least once 

            cout <<"Give me a number: ";//Ask for the number
            cin >>numero;//read the number

            if (numero== 0){
                    resultadoFinal="    0";
            }else if(numero<0){
                    cout <<"Character invalid. Try again."<<endl;
            }else

            if (numero > 0){
                while (numero!=0){ 
                    resultadoFinal=(numero%2==0)?"0"+ resultadoFinal:"1"+ resultadoFinal;//Calculate the number
                    //in binary and assign to the variable "FinalResult"
                    numero /=2;
                
                 }
                 if (numero== 0){
                    cout <<endl;
                }
            }

        }while (numero<0);//Finish the cycle and the process inside

            cout <<"In binary is: "<<resultadoFinal<<endl;//Printe the number in binary sistem
            cout <<endl;

    return 0;
    }

