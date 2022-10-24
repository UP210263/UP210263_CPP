/*
Date:24/10/2022
Author: Martínez Osiris Olimpia
email: up210263@alumnos.upa.edu.mx
Description:This program have to break down in exchange for Mexican bills and coins an amount entered by the user
*/

void desglosarCambio(int);
void imprimirCambio(string);

int quini=0, doci=0, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, dos=0, uno=0;

int main (){
    int dinero;

    cout <<"Give me the total of cash: ";
    cin >>dinero;

    desglosarCambio(dinero);
    imprimirCambio();
}

void desglosarCambio (int cantidad){
do{
    
}
}

void imprimirCambio(string final){
    cout << "$500---\t"<<quini;
    cout << "$200---\t"<<doci;
    cout << "$100---\t"<<cien;
    cout << "$50----\t"<<cincuenta;
    cout << "$20----\t"<<veinte;
    cout << "$10----\t"<<diez;
    cout << "$5-----\t"<<cinco;
    cout << "$2-----\t"<<dos;
    cout << "$1-----\t"<<uno;
    
}