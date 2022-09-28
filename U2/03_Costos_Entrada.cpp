/*
Date:28/09/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description: This code print the cost from enter to play room
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

int old;
int cost;
cout << "Enter you old: " ;
cin >>old;

if (old<0){
    cout << "The number entered is invalue, try one more time please."<< endl;
}else{
    if (old<4){
        cout << "Your enter is free!!"<<endl;
        cost=0;

    }else if (old>18){
        cost=10;
    }else 
    {
       cost=5; 
    }
    cout <<"The cost of your enter is: $" << cost<<endl;
}
}



