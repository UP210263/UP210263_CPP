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
    
    //Declaration of varibles
    int ingredients;
    int choose;

    //Ask the user which pizza they would prefer
     cout <<"Choose the pizza type that you want: "<<endl;
     cout <<"Push : -1- for vegetarian  or -2- for regular "<<endl;
     cin >>choose;

     if (choose ==1|| choose ==2)//follows a specific process path depending on user selection


     {
        if (choose==1){//Process for a vegetarian pizza 
            cout <<"choose vegetarian pizza."<<endl;
            cout <<"Now choose the ingredients you want, the options are: "<<endl;
            cout <<"NOTE: All pizzas have motzarell1a  and tomato."<<endl;//Show the possible ingredients to the user for their choose
            cout <<"1.Pepper "<<endl<<"2.Tófu "<<endl;
            cin >>ingredients;
            if (ingredients==1){//display chosen ingredients


                cout <<"Your vegetarian pizza will be of pepper."<<endl;
                
            }else if(ingredients==2) {
                cout <<"Your vegetarian pizza will be of tófu."<<endl;

            }else{
                cout <<"This caracter is invalid."<<endl;
            }
            

        }else{//If the user didn´t choose a number 1.The process take this way
            cout << "Choose regular pizza."<<endl;
            cout <<"Now choose the ingredients you want, the options are: "<<endl;
            cout <<"NOTE: All pizzas have motzarella  and tomato."<<endl;//Show the possible ingredients to the user choose
            cout <<"1.Pepperoni. "<<endl<<"2.Ham. "<<"3.Salmon. "<<endl;
            cin >>ingredients;
            if (ingredients==1){//Display the ingredients selected
                cout << "Your regular pizza will be of pepperoni."<<endl;
                
            }else if(ingredients==2) {
                cout <<"Your regular pizza will be of ham."<<endl;

            }else if (ingredients==3){
                cout <<"Your regular pizza will be of salmon."<<endl;

            }else{
                cout <<"This caracter is invalid."<<endl;
            }
            
            
        }
     }else{//If the user write any caracter not valid the program take this option
        cout << "This caracter is invalid. Try one more time please. ";

     }
     
    return 0;
}