/*
Date:12/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This code have to calculate the multiplication table of any number
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


float calcularFuncion(float x){
    return pow(x,2)-(3*x)-12;
}



int main(){
    int cont=1;
    float numA,numB,numC,yA,yB,yC;
    cout << "Give me a number for 'A': ";
    cin >> numA;
    cout << "Give me a number for 'B': ";
    cin >> numB;
    numC= (numA+numB)/2;
    yA= calcularFuncion(numA);
    yB= calcularFuncion(numB);
    yC= calcularFuncion(numC);
    
     for (int i=0; i<120; i++){
        cout<< "_";
    }

    cout<< "\n";
    
    if ((yB>0 && yA<0) || (yA>0 && yB<0)){
    cout<< "|\t NUMBER\t|\t NUMBER A\t|\tNUMBER B\t|\t NUMBER C \t|\t F(A)\t\t|\t F(B) \t\t|\t F(C) \t\t| \n";
   
    for (int i=0; i<120; i++){
        cout<< "_";
    }
    
    cout<< "\n";
    
    cout<< "| \t" << cont << "\t|\t" << fixed << setprecision(3) <<numA<< "\t|\t" << numB<< "\t|\t" <<numC << "\t|\t" << yA << "\t\t|\t" << yB << "\t\t|\t" << yC << "\t\t|\n"; 
    
    for (int i=0; i<120; i++)
    {
        cout<< "_";
    }
    cout<< "\n";

        while (yC>=0.01 || yC<=-0.01)
        {
            if ((yC>0 && yA<0) || (yA>0 && yC<0))
            {
                numB= numC;
            }
            else
            {
                numA=numC;
            }
            
             numC= (numA+numB)/2;
            yA= calcularFuncion(numA);
            yB= calcularFuncion(numB);
            yC= calcularFuncion(numC);
            
            cont++;

            cout<< "| \t" <<cont<< "\t|\t" << fixed << setprecision(3) <<numA<< "\t|\t"<<numB<<"\t|\t"<<numC<<"\t|\t"<< yA << "\t\t|\t" << yB << "\t\t|\t" << yC << "\t\t|\n";

            for (int i = 0; i <120; i++)
            {
                cout<< "_";
            }
            cout<< "\n";
        }
    cout<< "The root of this function is around: "<< setprecision(1) <<numC<<"__"<<endl;
    }
    else
    {
        cout << "There's no root between the numbers. "<<endl;
    }
    return 0;
}


