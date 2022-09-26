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

//Declaración de variables correspondientes al total del bono, la calificación del empleado
// y la cantidad del bono que recibirá el empleado según su calificación
  double calificacionEmpleado;
  double bono=2000;
  double bonoAsignado;


  //Petición al empleado de su calificación
  cout <<"Ingrese su calificación ";
  cin >>calificacionEmpleado;

//Condicional para dar o no el bono, y cuanto se le asigna del bono según su calificación
  if (calificacionEmpleado==0.4 || calificacionEmpleado==0.6 || calificacionEmpleado==0.0 ){
       bonoAsignado=bono*calificacionEmpleado;//cálculo de porcentaje en dinero de bono que se le asigna al empleado

       cout <<"Dada tu calificación le corresponde un bono de: $"<<bonoAsignado<<endl;//Impreción del bono asignado para informar al empleado

  }
  //Asignación de una respuesta a cualquier posible valor no valido ingresado por el empleado
  else{
    cout <<"La calificación ingresada no es valida."<<endl;
  }
}