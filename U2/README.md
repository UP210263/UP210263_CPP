
<h1>Unidad II</h1>
<p>En esta unidad se aplica el uso de algunas estructuras de control</p><br>
<b>Actividad 1:<br></b> 
<b>Cálculo de impuestos:</b>Se aplico la estructura de control IF en su forma más simple, con doble condición.
<p>EL proposito de este pequeño programa es calcular e informar del impuesto que le corresponde a cada usuario dependiendo de su renta anual</p>
<img src="imagenes/code1.png" >
<img src="imagenes/code2.png" >

<P>Como se puede observar en el código, se requirieron cinco if, uno por cada categoria en impuestos. Las categorias asignan impuestos según los siguientes estandares:<br>
  De 5% a los usuarios con rentas menores a $10,000;un impuesto de 15% a usuarios con rentas entre $10,000 y $19,999; un impuesto de 20% a los usuarios cuyas rentas rondan los $20,000 a los $34,999; un impuesto de 30% a usuarios cuyas rentas se encuantran entre los $35,000 y $59,999; y finalmente un impuesto de 60,000 a lus usuarios que debenpagar anualmente $60,000 o más se les asigna un impuesto del 45%.<br>
Estos if nos sirven para asignarle el porcentaje debido a la renta del usuario y, en realidad, la linea de código que le asigan valor a la variable correspondiente al presupuesto es lo único que se encuentra dentro de los if.
Fuera de los if se en cuentran, antes de ellos, la declaracion de las tres variables que se requirieron(una para la renta que ingresará el usuario, una para el impuesto que se asigna el en if y una para asignarle el valor económico del impuesto); y después de los if se encuentra el calculo que asinagrá el valor económico mediante la multiplicación de la renta por el porcentaje que le corresponda. Finalmente se impirmen los resultados del impuesto en porcentaje, en dinero y el total a pagar con el impuesto incluido.</P>
<br><br>
<p>Al correr el código el resultado depende de en que categoria encaje el valor de la renta ingresada. A continuación se encuentran las musetras del resultado que impirmiría el programa ingreasando una renta para cada categoria:</p>

<h5>1.-Renta < $10,000</h5>
Asignandole una renta de $8,500<br>
<img src="imagenes/ejmplo8500.png" ><br>
  
  <h5>2.-Renta < $20,000 pero = ó < $10,000</h5>
    Asignandole una renta de $10,000<br>
<img src="imagenes/ejemplo10000.png" ><br>
    
  <h5>3.-Renta <  $35,000, pero > ó = $20,000</h5>
      Asignando una renta de $20,000<br>
<img src="imagenes/ejemplo20000.png" ><br>
      
  <h5> 4.-Renta <  $60,000, pero > ó = $35,000</h5>
       Asignandole una renta de $36,200<br>
<img src="imagenes/ejemplo36200.png" ><br>
      
   <h5>5.-Renta > ó = $60,000</h5>
       Asignandole una renta de $65,000<br>
<img src="imagenes/ejemplo65000.png" ><br>
   
    
  
