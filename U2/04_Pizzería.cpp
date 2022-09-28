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
    
    int choose;
     cout <<"Choose the pizza type that you want: "<<endl;
     cout <<"Push : -1- for vegetarian  or -2- for regular ";
     cin >>choose;

     if (choose ==1|| choose ==2)
     {
        if (choose==1){
            cout <<"choose vegetarian.";

        }else{
            cout << "choose regular.";
        }
     }else{
        cout << "Try one more time please. ";
     }
     

}