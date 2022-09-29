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
  double bono=2400;
  double bonoAsignado;
  std::string desempeño;

  //Petición al empleado de su calificación
  cout <<"Ingrese su calificación ";
  cin >>calificacionEmpleado;

//Condicional para dar o no el bono, y cuanto se le asigna del bono según su calificación
  if (calificacionEmpleado==0.4 || calificacionEmpleado>=0.6 && calificacionEmpleado<=1|| calificacionEmpleado==0.0 ){
       bonoAsignado=bono*calificacionEmpleado;//cálculo de porcentaje en dinero de bono que se le asigna al empleado
       if (calificacionEmpleado==0.4){
           desempeño=" Aceptable ";
       }else{
        if(calificacionEmpleado>=0.6){
          desempeño=" Meritorio ";
        }else{
          desempeño=" Inaceptable ";
        }
       }
       
       cout <<"Su desempeño es"<<desempeño<<"le corresponde un bono de: $"<<bonoAsignado<<endl;
       cout <<" "<<endl;
       //Impresión del bono asignado para informar al empleado

  }
  //Asignación de una respuesta a cualquier posible valor no valido ingresado por el empleado
  else{
    cout <<"La calificación ingresada no es valida."<<endl;
    cout <<" "<<endl;
  }
  return 0;
}



