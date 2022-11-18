
<h1>Unity III</h1>
<H2>Construcción de un tablero de Gato funcional </H2><br>
<div align="center"> 
<img width="500"  height="70" src="https://i.pinimg.com/originals/07/24/88/0724884440e8ddd0896ff557b75a222a.gif">
</div>

<h3>Index:</h3>
<b><p>1.-¿Funciones?<br>
      2.-¿Cómo esta compuesto el código?<br>
      3.-¿Cómo funciona el código?<br>
      4.-¿Cómo usarlo?<br>
      5.-Flujo del proceso<br>
      6.-Ejemplos de funicionamiento<br>
      7.-Comclusión</p></b><br>


<p>En el transcurso de esta unidad desarrollamos poco a poco el código necesario para generar un juedo del Gato funcional.<br>
A continuación se presentara la explicación detalladas sobre cómo funciona, y en que orden se ejecutan cada una de las partes de este código.</p><br><br>


<h3>1.-¿Funciones?</h3>

<p> Puesto que el tema principal de esta unidad fueron las FUNCIONES, estas estan muy presentes dentro de la estructura del código del juego.<br>
Antes que nada es necesario dejar en claro que es una función para no dejar cabos sueltos;pues bien, las FUNCIONES son como cajones de código en el que se guarda comandos especificos para la ejecución de un proceso determinado. Dicho cajón posee un nombre único que es utilizado por el programador para invocar el procedimiento que posee dentro de si, y que se puede repetir cuantas veces sean necesarias con solo escribir su nombre. </p><br><br>



<h3>2.-¿Cómo esta compuesto el código?</h3>

<p>Ahora que está claro el término FUNCIÓN, es tiempo de comentar que este programa requiere de 16 funciones para lograr que el juego funcione como se mostrará más adelante.<br> 
Si bien el código es algo extenso para la naturaleaza del producto final, lo cierto, es que el elemento culpable de la extención del código es la semi inteligencia de la que dotamos al PC para que al jugar contra los usuarios representara un verdadero reto el juego. Gracias a esta inteligencia fue necesario replicar varias de las funciones ya existentes y hacerles pequeñas modificaciones para que cumplieran la labor de realizar simulaciones de posibles jugadas para la PC y de esta forma no solo sacar números de forma aleatoria.<br>
Las funciones que se utilizaron fueron: </p><br>

```c++
        void ttablero(int);                          
        int seleccionarJugada();
        void copiarTablero();
        void reescribirCasilla(int);
        bool comprobarCasillaOcupada(int);
        bool comprobarCasillaImagOcupada(int);
        bool identificarGanador(int);
        bool identificarGanadorImag(int);
        int obtenerJugada();
        void reescribirCasillaImag(int);
        int buenaJugada(char);
        void jugarGato();
        void colocarJugada();
        int inteligencia();
        int jugarPC();
        void jugar2palyers();
        int numJugadores;
```
<P>De la misma manera comenzamos a implementar matrices pequeñas. En este juego, las matrices tienen el papel de ser el tablero no visual del juego, por lo que en esta matriz se registran cada una de las jugadas de ambos participantes en el juego. Además existe un segundo tablero que cumple la función de ser el lienzo en el que se realizan las simulaciones que necesita la PC para escoger una jugada. Dichas matrices son:<br></p>

```c++
//Tablero en el que se registra el juego real entre los dos participantes
char espacioJuego[3][3] = {{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};

//Tablero en el que se realizan las simulaciones para la PC
char copiaEspacio[3][3] = {{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};   
```

<p>Si bien las matrices son modificadas fuera de la vista de los usuarios, estas siempres estan en constante cambio de valores en sus determinados espacios. El motivo por el cual el usuario puede ver el tablero, a pesar de estar basado en una matriz, es por que en la funcion ttablero damos instrucciones para que a través de ciclos for se imprima laestructura base tan representativa del juego del gato </p>

```c++
// ttablero funtion
      void ttablero(int)
      {
            int fi = 0, co = 0;
            for (int fila = 0; fila < 5; fila++)
            {
                  for (int columna = 0; columna < 9; columna++)
                  {
                        if (fila == 1 || fila == 3)
                        {
                              cout << "_";
                        }
                        else if (columna == 1 || columna == 4 || columna == 7)
                        {
                        cout << espacioJuego[fi][co];
                        co++;
                        }else{
                              cout << " ";
                        }
                        if (columna == 2 || columna == 5)
                        {
                              cout << "|";
                        }
                  }
                  cout << endl;
                  if (fila % 2 == 0)
                  {
                        fi++;
                  }
                  co = 0;
            }
            cout << endl;
      }


```
<p></p>





