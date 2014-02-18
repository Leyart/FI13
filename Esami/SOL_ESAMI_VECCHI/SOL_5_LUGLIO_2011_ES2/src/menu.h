//============================================================================
// Name        : menu.h
// Author      : Luca Galli
// Version     : 1.0
// Description : Header della classe menu
//============================================================================

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <list>
using std::string;


struct pietanza {
	int codic;
	string nome;
	string tipologia;
	int disp;
	int valore;
};

struct nodo {
	pietanza data;
	struct nodo* next;
};

class menu {

private:
	string nomeSagra;
	string comune;
	nodo* pietanze;

	void addStruct(pietanza daCopiare, nodo* copiaIn);

public:

	menu(string nS, string c);    //LISTA VUOTA
	menu(string nS, string c, pietanza array[], int num);    //possibilità di inserire una lista già piena tramite array!
	menu(string nS, string c, nodo* esistente);
	//Copy constructor, necessario per la rule of the three
	menu(const menu& daCopiare);
	~menu();


	//Devi seguire la RULE OF THE THREE: Se dichiari un distruttore, ricordati che devi sempre definire anche copy constructor e copy assignment
	const menu operator+(menu &two);
	//Copy Assignment, necessario per la rule of the three e comunque da richiesta dell'esercizio
	const menu& operator=(const menu & two);
	void aggiungiPiatto(pietanza toAdd); //aggiunge piatto
	void aggiungiDisp(string nom, int disp);   //aggiunge disponibilità
	void decrementaDisp(string nom, int disp);  //decrementa disponibilità
	bool cancellaPiatto(string nom);      //cancella piatto; restituisce true se cancellato, false se non cancellato
	void getSituazione();              //stampa situazione corrente
	int getValore(string tipologia);
};



#endif /* HEADER_H_ */
