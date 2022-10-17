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
    return pow(x,2)+x-6;
}

int main(){
    float numberA;
    float numberB;
    float numberC=(numberA+numberB)/2;
    float error=0.01;

    cout << "Give the number 'A': " ;
    cin >>numberA;
    cout << "Give the number 'B': " ;
    cin >>numberB;

    cout <<"|\t Number A\t|\tNumber B\t|\tNumber C\t|\tY a\t|\tY b\t|\tY c\t|"<<endl;
    do
    {
        float yA=calcularFuncion(numberA);
        float yB=calcularFuncion(numberB);
        float yC=calcularFuncion(numberC);

        if (numberA*numberC<0){
            numberB=numberC;
        }else if (numberC*numberB<0){
            numberA=numberC;
        }else{
            cout <<"Invalid entry";
        }
        for (int line= 0; line < 115; line++){
            cout <<"_";
        }
        cout <<endl;
        for (int line= 0; line < 115; line++){
            cout <<"_";
        }
        cout <<endl;
        cout <<"|\t"<<numberA<<"\t|\t"<<numberB<<"\t|\t"<<numberC<<"\t|\t"<<yA<<"\t|\t"<<yB<<"\t|\t"<<yC<<"\t|"<<endl;
        for (int line= 0; line < 115; line++){
            cout <<"_";
        }
        cout <<endl;
    } while (abs(numberC)>= error);


    return 0;
}
