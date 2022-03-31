#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

/*Punto 1 del libro
- dare la scelta di quanti bits trasmettere (da 8 a 32)
- generare una sequenza random di bits da trasmettere
- stampare i dati originali e il polinomio M(x)*/


using namespace std;
//programma by Improta & Rossi
int main(){

int numerob , primo, b[numerob], cont=0, cont2=0;
cout<<"scegli quanti bit vuoi generare /min8 - max32/";
cin>>numerob;
cout<<"il numero di bit e': "<<numerob;

for(cont=0; cont<numerob; cont++){
int secondo = rand() % 2;
b[cont] = secondo;
}

cout<<"sequenza bit: ";
for(cont=0; cont<numerob; cont++){
cout<<b[cont];
}
//DA TERMINARE
}

