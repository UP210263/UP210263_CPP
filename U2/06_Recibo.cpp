#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

float precio;
int cantidad;
float total;

do{ 
    cout <<"write the number of purchased products of the same product: "<<endl;
    cout <<"NOTE:write 0 only if you want close the program."<<endl;
    cin >>cantidad;
      if(cantidad!= 0){
    cout <<"Now, write the price of this product: $"<<endl;
    cin >>precio;
    total +=precio*cantidad;
    cout <<"Your total is: $"<<total<<endl;
      }else
      cout << "Finished prcess"<<endl;

 }while (cantidad != 0);
 
 

 return 0;
 }