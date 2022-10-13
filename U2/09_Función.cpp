/*
Date:12/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This code have to calculate the multiplication table of any number
*/
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

float calcularFuncion(float x){
    return pow(x,2)-x-12;
}

int main(int argc, char const *argv[])
{
    float numberA;
    float numberB;
    float numberC=(numberA+numberB)/2;

    cout << "Give the number 'a': " ;
    cin >>numberA;
    cout << "Give the number 'b': " ;
    cin >>numberB;
    float yA=calcularFuncion(numberA);
    float yB=calcularFuncion(numberB);
    float yC=calcularFuncion(numberC);

    cout <<yA<<endl;
    cout <<yB<<endl;
    cout <<yC<<endl;

    return 0;
}
