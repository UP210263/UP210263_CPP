/*
Date:28/09/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description: This code print the maximum value using a different funtion than main.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int getMaxVAl( int num1, int num2);

int main(){
    int num_1;
    int num_2;
    

    cout <<"Write a number: ";
    cin >>num_1;
    cout <<"Write other number: ";
    cin >>num_2;
    int valorMaximo=getMaxVAl(  num_1, num_2);
    cout <<"The maximum value is: "<<valorMaximo<<endl<<endl;
    return 0;
}


int getMaxVAl(int num1, int num2){
    return (num1>num2)?num1:num2;
}