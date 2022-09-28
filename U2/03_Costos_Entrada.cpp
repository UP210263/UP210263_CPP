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

//variables that the program need to run
int age;
int cost;

//Here the user have to read the personal old
cout << "Enter you old: " ;
cin >>age;

//Here the if compare the age variable with  the diferents age categories for give value to cost variable
if (age<0){
    cout << "The number entered is invalue, try one more time please."<< endl;
}else{
    if (age<4){
        cout << "Your enter is free!!"<<endl;
        cost=0;

    }else if (age>18){
        cost=10;
    }else 
    {
       cost=5; 
    }
    cout <<"The cost of your enter is: $" << cost<<endl;//Print the correspondent cost to user
}
return 0;
}



