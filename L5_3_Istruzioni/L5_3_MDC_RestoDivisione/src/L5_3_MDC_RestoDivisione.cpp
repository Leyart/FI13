//============================================================================
// Name        : L5_3_MCD_RestoDivisione.cpp
// Author      : Davide Bonacina
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Soluzione piu' veloce del metodo delle sottrazioni, usando il resto della divisione tra due numeri
//Proposta da: Davide Bonacina

int main()
{
    int a, b, Max, Min, MCD;
	cout<<"inserisci 2 numeri interi:"<<endl;
	cin>>a;  //Prendo il primo numero
	cin>>b;  //Prendo il secondo
	if(!cin){cout<<"Non hai inserito un numero intero, vero?"<<endl;return 0;} //Verificio che non vi siano problemi di lettura
    if(a<0) //Evito eventuali errori di calcolo nel caso di inserimento di numeri negativi
    	a=-a;
    if(b<0)
    	b=-b;
	if((a==0)||(b==0)) //Verifico che i numeri siano diversi da 0
		MCD=0; //Restituisco il valore 0
	if(a-b>0)  //Determino il maggiore ed il minore tra i 2 numeri
	{
		Max=a;
		Min=b;
	}
	else
	{
		Min=a;
	    Max=b;
	}
	int resto;
	resto= Max%Min;//divisione 1
	if(resto==0)
	    MCD=Min;
	while(!(resto==0))
	{
	    int max;
	    MCD=resto; //Sostituisco il valore minimo con il resto della divisione 1
	    max=Min; //Sostituisco il valore massimo con il valore minimo della divisione 1
	    resto= max%MCD;//se il resto è uguale a 0, il valore minimo della divisione è il MCD
	}
	cout<<"Il Massimo comun divisore è: "<<MCD<<endl;
	return 0;
}
