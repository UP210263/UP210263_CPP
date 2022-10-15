
<h1>Unity II</h1>
<p>In this unit the use of some control structures is applied.</p><br>
<H3>Activity 01:</h3> 
<b>Calculating taxes:</b>The IF control structure was applied in its simplest form, with a double condition.
<p>The purpose of this small program is to calculate and report the tax that corresponds to each user depending on their annual income</p>

```c++
int main(){

  //Declaration of variables
   int renta;
   int impuestoPorcentaje;
   int impuestoDinero;

  //Request information about user
  cout <<"Enter the value of your rent:  ";
  cin >> renta;
  

  //Comparative analysis of the value entered by the user with the different categories
  //of income to assign the corresponding tax.
```
<P> In this first part, variables are declared and the user is asked to enter the cost of their rental</P>

```c++
  if(renta<10000){
      impuestoPorcentaje=5;
  }

  if(renta>=10000 && renta<20000){
      impuestoPorcentaje=15;
       
  }
  if(renta>=20000 && renta<35000){
      impuestoPorcentaje=20;
  }

  if(renta>=35000 && renta<60000){
      impuestoPorcentaje=30;
  }

  if(renta>=60000){
      impuestoPorcentaje=45;
  }

  //calculation of the economic value of the tax depending on the user's income.
  impuestoDinero= renta*impuestoPorcentaje/100;
```
<p>Each if does a different process for each of the income categories to assign the value corresponding to the percentage of the tax</P>

```c++
  cout <<"You have to pay a tax of:  "<<impuestoPorcentaje<< " %";
  cout <<" , therefore the value of your tax is $" << impuestoDinero<<endl;
  cout <<"The total cost to pay is $"<< impuestoDinero+renta<<endl;
  cout <<endl;

return 0;
}
```
<P> Finally, the results of the calculated tax are shown. </p>

<P>As can be seen in the code, five ifs were required, one for each tax category. The categories assign taxes according to the following standards:<br>
  From 5% to users with incomes less than $10,000; a 15% tax to users with incomes between $10,000 and $19,999; a 20% tax on users whose income is between $20,000 and $34,999; a 30% tax on users whose income is between $35,000 and $59,999; and finally a tax of 60,000 users who must pay annually $60,000 or more are assigned a tax of 45%.<br>
These ifs serve us to assign the percentage due to the user's income and, in reality, the line of code that assigns a value to the variable corresponding to the budget is the only thing found within the ifs.
Outside of the ifs, before them, there is the declaration of the three variables that were required (one for the income that the user will enter, one for the tax that is assigned in the if, and one to assign the economic value of the tax ); and after the if is the calculation that assigns the economic value by multiplying the income by the corresponding percentage. Finally, the results of the tax are printed in percentage, in money and the total to be paid with the tax included.</P>
<br><br>
<p>When running the code, the result depends on which category the entered income value fits into. Below are the samples of the result that the program would print by entering an income for each category:</p>

<h5>1.-Rent < $10,000</h5>
Assigning a rent of $8,500<br>
<img src="imagenes/ejmplo8500.png" ><br>
  
  <h5>2.-Rent < $20,000 pero = or < $10,000</h5>
    Assigning an income of $10,000<br>
<img src="imagenes/ejemplo10000.png" ><br>
    
  <h5>3.-Rent <  $35,000, pero > or = $20,000</h5>
      Assigning an income of $20,000<br>
  <img src="imagenes/ejemplo20000.png" ><br>      
  <h5> 4.-Rent <  $60,000, pero > or = $35,000</h5>
      Assigning an income of $36,200<br>
  <img src="imagenes/ejemplo36200.png" ><br>
      
  <h5>5.-Rent > or = $60,000</h5>
       Assigning an income of $65,000<br>
  <img src="imagenes/ejemplo65000.png" ><br>

<br><br><br>
<h3>Activity 02: </h3><BR>
   <p><b>Bonus calculation: </b>The next code have to calculate and show additional bonus for the user. The value of this bonus depend exclusively of note about his work. This notes have three categories: Unacceptable=0.0, Accetable=0.4 and Meritorious=0.6 or greater but smaller than 1. Their bonus will be result of their note by $2,400, that is the maximum value. 
Note:Values differents of 0.0,0.4 and 0.6> will be invalid.<p>
 <br><br>

 
<p>This is the declaration of variables corresponding to the total of the bonus, the qualification of the employee and the amount of the bonus that the employee will receive based on his qualification and and the user is asked to enter his qualification<p>

```c++
 int main(){

  double calificacionEmpleado;
  double bono=2400;
  double bonoAsignado;
  std::string desempeño;

  //Ask employees for their rating.
  cout <<"Write your rating:  ";
  cin >>calificacionEmpleado;
```
<p> The conditional is responsible for indicating whether or not the bonus will be given, and how much the bonus will be according to your user rating.

 </p>

```c++

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
       ```
      <p>Finally, the amount of the bonus to receive if one is assigned is shown.<p>

      ```c++
       cout <<"His preformance is "<<desempeño<<"You are entitled to a bonus of: $"<<bonoAsignado<<endl;
       cout <<" "<<endl;
       //Printing of the bonus assigned to inform the employee
  }
```
<p>If the user write any invalid number the code print this message<p>

```c++
  //Assigning a response to any possible invalid value entered by the employee
  else{
    cout <<"The grade entered is not valid."<<endl;
    cout <<" "<<endl;
  }
  return 0;
}

 ```
  <br>
 The possible errors mentioned above. If the user enters 0.0, the response will be: <br>
  <img src="imagenes/02/inaceplabe.png"><br>
   and when user enter 0.4 the programm will print:<br>
  <img src="imagenes/02/aceptable.png"><br>
  y en dado caso de que el empleado ingrese el desempeño de 0.6 aparecerá:<br>
  <img src="imagenes/02/apenasMeritoria.png"><br>
  en dado caso que el desempeño sea mayor a 0.6 y este dentro del rango aceptable del uno,deberá aparecer una impreción como la siguiente:<br>
  <img src="imagenes/02/Meritoria.png"><br>
 Esos son los resultados correspondientes a los desempeños aceptados , pero en caso de ingresar un numero no aceptado se mandará lo siguiente:<br>
  <img src="imagenes/02/noValida.png">
 <br><br>
 <h3>Activity 03 </h3>
 <p><b>Choose a pizza: </b>This program is a great option for buy a pizza online. 
  
  
  
  
  
  
  

    
    
  
