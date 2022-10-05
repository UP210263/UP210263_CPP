/*

*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

//Declaration of variables
    int contador=1;
    float temperatura;
    float tempAcum=0;
    int numMayor, numMenor;
    
    
//Begin to the cycle for get the six temperatures 

    do{
        
        cout <<"Give me the temperature: "; //sum the values ​​in a cumulative variable
        cin >>temperatura;
        tempAcum += temperatura;


//save the first temperature in a variable to compare it with the following temperatures
        if(temperatura>numMayor){
            numMayor=temperatura;
        }   
        if(temperatura<numMenor){
            numMenor=temperatura;
        }   
         

        contador++;
    }while (contador<=6);

    cout <<"The average of temperature taday is: "<<tempAcum/6<<endl;//Say to user the average and 
     cout << "The bigger number is: "<<numMayor<<endl;//Say to user the bigger value
     cout <<"The minior number is: "<<numMenor<<endl;  //Say to user the minior value

     
    return 0;
    
}