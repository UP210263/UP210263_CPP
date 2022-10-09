
/*
Date:07/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

//Declaration of variables
float precio;
int cantidad;
float total;

do{ //Start the process cycle on the registration of purchases made
    cout <<"write the number of purchased products of the same product: "<<endl;
    cout <<"NOTE:write 0 only if you want close the program."<<endl;
    cin >>cantidad;
      if(cantidad!= 0){//Discard the 0 of the numbers that will have this process
    cout <<"Now, write the price of this product: $"<<endl;//The process is to ask the price of products
    cin >>precio;
    total +=precio*cantidad;//Calculate the total price 
    cout <<"Your total is: $"<<total<<endl; //Show to the user the total price 
      }else
      cout << "Finished prcess"<<endl;//Tell the user that the program has finished

 }while (cantidad != 0);
 
 

 return 0;
 }