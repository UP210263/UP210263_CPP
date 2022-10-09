/*
Date:26/09/2022
Author:Martínez Ramírez Osiris Olimpia
email:up210263@alumnos.upa.edu.mx
Description: Calculo del bono para los empleados usando IF con tres posibilidades unidas por ||
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
//Declaration of variables corresponding to the total of the bonus, the qualification of the employee
// and the amount of the bonus the employee will receive based on their qualification
  double calificacionEmpleado;
  double bono=2400;
  double bonoAsignado;
  std::string desempeño;

  //Ask employees for their rating.
  cout <<"Write your rating:  ";
  cin >>calificacionEmpleado;

//Conditional to give or not the bonus, and how much the bonus is assigned according to your qualification
  if (calificacionEmpleado==0.4 || calificacionEmpleado>=0.6 && calificacionEmpleado<=1|| calificacionEmpleado==0.0 ){
       bonoAsignado=bono*calificacionEmpleado;//calculation of percentage in bonus money that is assigned to the employee
       if (calificacionEmpleado==0.4){
           desempeño=" Acceptable ";
       }else{
        if(calificacionEmpleado>=0.6){
          desempeño=" Meritorious ";
        }else{
          desempeño=" Unacceptable ";
        }
       }
       
       cout <<"His preformance is "<<desempeño<<"You are entitled to a bonus of: $"<<bonoAsignado<<endl;
       cout <<" "<<endl;
       //Printing of the bonus assigned to inform the employee
  }
  //Assigning a response to any possible invalid value entered by the employee
  else{
    cout <<"The grade entered is not valid."<<endl;
    cout <<" "<<endl;
  }
  return 0;
}



