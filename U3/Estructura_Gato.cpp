/*
Date:24/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This program have to break down in exchange for Mexican bills and coins an amount entered by the user
*/


#include <iostream>
#include <stdio.h>
using namespace std;

void crearEstructura();
void mostrarJugadas();
int seleccionarJugada();
void imprimegato();


char pocisionesJugadas[3][3]={{'1','2','3'},
                              {'4','5','6'},
                              {'7','8','9'}, };

char gato[3][3];

int main(){
   // crearEstructura();
    //seleccionarJugada();
    imprimegato();
}

/*
for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriz[i][j]=' ';
			printf("[%c]", matriz[i][j]);
		}*/
    
void crearEstructura (){
    for (int fila = 0; fila < 11; fila++){
        for (int col = 0; col < 11; col++)
        {
           if ((fila==3||fila==7)&&(col==3||col==7)){
                cout<<"+";
           }else if ((fila%2==0) && (col!=3 && col!=7)){
                cout <<"    ";

            }else if ((fila%2==0)&&(col==3||col==7)){
                cout<<"|";
            }else if ((col%2==0)&&(fila==3||fila==7)){
                 cout<<"-----";
            }else if ((col%2==0)&&(fila!=3||fila!=7))
            {
                cout<<" ";
            }else if ((fila%2!=0)&&(fila==3||fila==7)){
                cout<<"--";
            }else if ((fila%2!=0)&&(col==3||col==7)){
                cout<<"|";
            }else if ((fila%2!=0)&&(col!=3||col!=7)){
                cout<<"          ";
            }else if((fila==1||fila==5||fila==9)&&(col==1||col==5||col==9)){
              cout <<"X";
           } 
              
        }
      cout<<endl;
    }
}

int seleccionarJugada(){
    int jugada;
    do{
        cout<<"Chose the option that you want: ";
        cin>>jugada;
    }while (jugada<=9 && jugada>0);
    return jugada;
}


void imprimegato(){

cout<<"\t"<<gato[0][0]<<" \t|\t "<<gato[0][1]<<" \t|\t "<<gato[0][2]<<"        1 | 2 | 3"<<endl;

cout<<"\t------------------"<<"---------------\n";

cout<<"\t"<<gato[1][0]<<" \t|\t "<<gato[1][1]<<" \t|\t "<<gato[1][2]<<"        4 | 5 | 6"<<endl;

cout<<"\t------------------"<<"---------------\n";

cout<<"\t"<<gato[2][0]<<" \t|\t "<<gato[2][1]<<" \t|\t "<<gato[2][2]<<"        7 | 8 | 9"<<endl;

 



 

}


/* 
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char matriz[3][3], opc;
	int i, j;
	
	printf("Juego del gato!\n");
	
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriz[i][j]=' ';
			printf("[%c]", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nPresione Y para jugar / N para salir: ");
	scanf("%c", &opc);
	
	int fila, col, ganador=0, turno=1;
	
	if(opc == 'Y' || opc == 'y'){
		
		do{
			if(turno%2==1){
				do{
					printf("\nJugador 1: \n");
					printf("Digite fila: ");
					scanf("%d", &fila);
					printf("Digite columna: ");
					scanf("%d", &col);
					
					if(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2){
						printf("\nCoordenadas no validas, pruebe otra vez.\n");
					}
				}while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2);
				
				matriz[fila][col]='x';
				
				system("cls");
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				turno++;
			} else if(turno%2==0){
				do{
					printf("\nJugador 2: \n");
					printf("Digite fila: ");
					scanf("%d", &fila);
					printf("Digite columna: ");
					scanf("%d", &col);
					
					if(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2){
						printf("\nCoordenadas no validas, pruebe otra vez.\n");
					}
				} while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2);
				
				matriz[fila][col]='o';
				
				system("cls");
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				turno++;
			}
			
			if(matriz[0][0] == 'x' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]
			|| matriz[1][0] == 'x' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
			|| matriz[2][0] == 'x' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]
			
			|| matriz[0][0] == 'x' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
			|| matriz[0][1] == 'x' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
			|| matriz[0][2] == 'x' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]
			
			|| matriz[0][0] == 'x' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
			|| matriz[0][2] == 'x' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]){
				ganador=1;
				printf("\nFelicidades! Gano el jugador 1.\n");
			}
			
			if(matriz[0][0] == 'o' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]
			|| matriz[1][0] == 'o' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
			|| matriz[2][0] == 'o' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]
			
			|| matriz[0][0] == 'o' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
			|| matriz[0][1] == 'o' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
			|| matriz[0][2] == 'o' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]
			
			|| matriz[0][0] == 'o' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
			|| matriz[0][2] == 'o' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]){
				ganador=1;
				printf("\nFelicidades! Gano el jugador 2.\n");
			}
			
		} while(ganador != 1);
	} else {
		system("cls");
		printf("\nDe todas formas no queria que jugaras.\n");
	}
	
	return 0;
}*/



/*#include <iostream>
#include <stdio.h>
using namespace std;

 

char gato[3][3];

bool bandera=true;

//===PROTOTIPOS===

void imprimegato();

void cambiaturno(char &t);

void introduce(char t, char corden);

short evalua(char t);

int main()

{

imprimegato();

char t='X';

char posicion;

 

 while(bandera==true)

 {

   cout<<"Es el turno de "<<t<<" introduzca posicion: ";

   cin>>posicion;

   posicion=toupper(posicion);

   introduce(t,posicion);

 

  // comprueba(turno);

evalua(t);

cambiaturno(t);

   imprimegato();

  }

 

system("pause");

}//fin main

//====INTRODUCE=====

void introduce(char t, char corden)

{

 switch(corden)

 {

   case 'A':

     if(gato[0][0]!='X' && gato[0][0]!='O')

     {

       gato[0][0]=t;

//       cambiaturno(t);

     }

     else{cout<<"\n=Posicion ocupada=\n";}

     break;

   case 'B':

     if(gato[0][1]!='X' && gato[0][1]!='O')

     {

       gato[0][1]=t;

//       cambiaturno(t);

     }

     else{cout<<"\n=Posicion ocupada=\n";}

     break;

 case 'C':

     if(gato[0][2]!='X' && gato[0][2]!='O')

     {

       gato[0][2]=t;

//       cambiaturno(t);

     }

     else{cout<<"\n=Posicion ocupada=\n";}

     break;

   case 'D':

     if(gato[1][0]!='X' && gato[1][0]!='O')

     {

       gato[1][0]=t;

//       cambiaturno(t);

     }

     else{cout<<"\n=Posicion ocupada=\n";}

     break;

   case 'E':

     if(gato[1][1]!='X' && gato[1][1]!='O')

     {

       gato[1][1]=t;

 //      cambiaturno(t);

     }

     else{cout<<"\n=Posicion ocupada=\n";}

     break;

   case 'F':

     if(gato[1][2]!='X' && gato[1][2]!='O')

     {

       gato[1][2]=t;

//       cambiaturno(t);

     }

     else{cout<<"\n=Posicion ocupada=\n";}

     break;

 case 'G':

     if(gato[2][0]!='X' && gato[2][0]!='O')

     {

       gato[2][0]=t;

//       cambiaturno(t);

     }

     else{cout<<"\n=Posicion ocupada=\n";}

     break;

   case 'H':

     if(gato[2][1]!='X' && gato[2][1]!='O')

     {

       gato[2][1]=t;

//       cambiaturno(t);

     }

     else{cout<<"\n=Posicion ocupada=\n";}

     break;

   case 'I':

     if(gato[2][2]!='X' && gato[2][2]!='O')

     {

       gato[2][2]=t;

//       cambiaturno(t);

     }

     else{cout<<"\n=Posicion ocupada=\n";}

     break;

   default:

      cout<<"\nIntroduzca una posicion valida.\n";

 }//fin switch

}//fin introduce

//====CAMBIATURNO===

void cambiaturno(char &t){

if (t=='X'){t='O';}

else{t='X';}

//cout<<t

//return t;

}//fin cambiaturno

 

//=======IMPRIMEGATO=====

void imprimegato(){

cout<<"\n     ######GATO#######\n\n";

cout<<"\t"<<gato[0][0]<<" | "<<gato[0][1]<<" | "<<gato[0][2]<<"        a | b | c"<<endl;

cout<<"\t----------"<<"      -----------\n";

cout<<"\t"<<gato[1][0]<<" | "<<gato[1][1]<<" | "<<gato[1][2]<<"        d | e | f"<<endl;

cout<<"\t----------"<<"      -----------\n";

cout<<"\t"<<gato[2][0]<<" | "<<gato[2][1]<<" | "<<gato[2][2]<<"        g | h | i"<<endl;

 

cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

 

}//fin imrpimegato

short evalua(char t){

cout<<t;

short px=0;

short po=0;

short evaluacion=0;

 

cout<<"\n[0][i]\n";

for(short i=0;i<3;i++){

   if(((gato[0][i]=='X')||gato[0][i]=='\0')&&((gato[1][i]=='X')||gato[1][i]=='\0')&&((gato[2][i]=='X')||gato[2][i]=='\0'))

      {px++;}

if(gato[0][0]=='O'||gato[0][1]=='O'||gato[0][2]=='O'||gato[1][0]=='O'||gato[1][1]=='O'||gato[1][2]=='O'||gato[2][0]=='O'||gato[2][1]=='O'||gato[2][2]=='O')

 {

   if(((gato[0][i]=='O')||gato[0][i]=='\0')&&((gato[1][i]=='O')||gato[1][i]=='\0')&&((gato[2][i]=='O')||gato[2][i]=='\0'))

      {po++;}

  }

     

cout<<"\npo="<<po;

cout<<"\npx="<<px;
   }



for(short i=0;i<3;i++){

 if(((gato[i][0]=='X')||gato[i][0]=='\0')&&((gato[i][1]=='X')||gato[i][1]=='\0')&&((gato[i][2]=='X')||gato[i][2]=='\0'))

      {px++;}

if(gato[0][0]=='O'||gato[0][1]=='O'||gato[0][2]=='O'||gato[1][0]=='O'||gato[1][1]=='O'||gato[1][2]=='O'||gato[2][0]=='O'||gato[2][1]=='O'||gato[2][2]=='O')

 {

 if(((gato[i][0]=='O')||gato[i][0]=='\0')&&((gato[i][1]=='O')||gato[i][1]=='\0')&&((gato[i][2]=='O')||gato[i][2]=='\0'))

      {po++;}

  }

 

cout<<"\npo="<<po;

cout<<"\npx="<<px;

    }//fin for      

 

//Diagonales

cout<<"\ndiagonales\n";

 if(((gato[0][0]=='X')||gato[0][0]=='\0')&&((gato[1][1]=='X')||gato[1][1]=='\0')&&((gato[2][2]=='X')||gato[2][2]=='\0'))

     {px++;}

if(gato[0][0]=='O'||gato[0][1]=='O'||gato[0][2]=='O'||gato[1][0]=='O'||gato[1][1]=='O'||gato[1][2]=='O'||gato[2][0]=='O'||gato[2][1]=='O'||gato[2][2]=='O')

{

 if(((gato[0][0]=='O')||gato[0][0]=='\0')&&((gato[1][1]=='O')||gato[1][1]=='\0')&&((gato[2][2]=='O')||gato[2][2]=='\0'))

     {po++;}

 }

 

      //else{po++;}cout<<"\n1.diagonal\n";

cout<<"\npo="<<po;

cout<<"\npx="<<px;

 

 

  if(((gato[2][0]=='X')||gato[2][0]=='\0')&&((gato[1][1]=='X')||gato[1][1]=='\0')&&((gato[0][2]=='X')||gato[0][2]=='\0'))

     {px++;}

 

if(gato[0][0]=='O'||gato[0][1]=='O'||gato[0][2]=='O'||gato[1][0]=='O'||gato[1][1]=='O'||gato[1][2]=='O'||gato[2][0]=='O'||gato[2][1]=='O'||gato[2][2]=='O')

 {

  if(((gato[2][0]=='O')||gato[2][0]=='\0')&&((gato[1][1]=='O')||gato[1][1]=='\0')&&((gato[0][2]=='O')||gato[0][2]=='\0'))

     {po++;}

  }

    //else{po++;}cout<<"\n2.diagonal\n";

cout<<"\npo="<<po;

cout<<"\npx="<<px;

 

 

if (t=='X'){
    
    evaluacion=px-po;

}else{evaluacion=po-px;}

cout<<"\n\nfinales";

cout<<"\npo="<<po;

cout<<"\npx="<<px;

//return evaluacion;

cout<<"\n\nEvaluacion es: "<<evaluacion<<endl;
return 0;
}//fin evalua

*/