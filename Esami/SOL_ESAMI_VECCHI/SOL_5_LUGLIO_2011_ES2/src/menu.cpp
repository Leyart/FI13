//============================================================================
// Name        : menu.cpp
// Author      : Luca Galli
// Version     : 1.0
// Description : Implementazione della classe menu
//============================================================================

#ifndef IMPLEMENTAZIONE_CPP_
#define IMPLEMENTAZIONE_CPP_

#include <iostream>
#include "menu.h"

using std::cout;
using std::endl;


/*COSTRUTTORI*/

menu::menu(string nS, string c) {   //costruttore con lista vuota
	nomeSagra = nS;
	comune = c;
	pietanze = NULL;
}

menu::menu(string nS, string c, nodo* lista) {
	nomeSagra = nS;
	comune = c;
	pietanze = lista;
}

menu::menu(string nS, string c, pietanza array[], int num) {  //costruttore con possibilità di inserimento array, e numero piatti
	                                                       //presenti all'interno del suo array
	nomeSagra = nS;
	comune = c;

	if(num>0) {
		nodo* temp;
		pietanze = new nodo();
		temp=pietanze;

		addStruct(array[0],temp);
		for(int i = 1; i < num; i++){   //copia l'array inserito, in quello della classe
			temp->next = new nodo();
			temp=temp->next;
			addStruct(array[i],temp);
		}
	}
}


menu::menu(const menu& daCopiare) {
	pietanze = NULL;
	//Riusiamo l'operatore di assegnamento che abbiamo definito...
	*this=daCopiare;
}

/*DISTRUTTORE*/

menu::~menu() {
	nodo* temp;
	while(pietanze!=NULL) {
		temp = pietanze;
		pietanze = pietanze -> next;
		delete temp;
	}
}

/*METODI PRIVATI*/

//Aggiungi un piatto in fondo alla lista
void menu::addStruct(pietanza daCopiare, nodo* copiaIn) {
	copiaIn->data.codic=daCopiare.codic;
	copiaIn->data.disp=daCopiare.disp;
	copiaIn->data.nome=daCopiare.nome;
	copiaIn->data.tipologia=daCopiare.tipologia;
	copiaIn->data.valore=daCopiare.valore;
	copiaIn->next=NULL;
}


/*METODI PUBBLICI*/


void menu::aggiungiPiatto(pietanza toAdd) {   //aggiunge piatto

	nodo* temp;
	temp = pietanze;
	/*Se il menu è vuoto, dobbiamo aggiungere un piatto in testa*/
	if(temp==NULL) {
		temp = new nodo();
		addStruct(toAdd,temp);
	}
	else {
		/*Altrimenti arriva fino alla fine delle pietanze*/
		while(temp->next!=NULL)
			temp=temp->next;
		/*Aggiungi un nuovo nodo*/
		temp->next = new nodo();
		/*E copiaci i dati della nuova pietanza*/
		addStruct(toAdd, temp->next);
	}
}


//Supponiamo di incrementare la disponibilità solo del primo piatto trovato con quel nome
void menu::aggiungiDisp(string nom, int disp) {
	nodo* temp;
	temp = pietanze;
	while(temp!=NULL) {
			if(temp->data.nome.compare(nom)==0) {
					temp->data.disp+=disp;
					return;
			}
			temp = temp -> next;
	}
}

void menu::decrementaDisp(string nom, int disp) {
	nodo* temp;
	temp = pietanze;
	while(temp!=NULL) {
			if(temp->data.nome.compare(nom)==0) {
				if(temp->data.disp>disp)
					temp->data.disp-=disp;
				else {
					cout << "richiestà maggiore della disponibilità! ->" << nom <<" disponibilità = "<< temp->data.disp << endl;
				}
			}
			temp = temp -> next;
	}
}

//Supponiamo di eliminare solo il primo piatto con quel nome
bool menu::cancellaPiatto(string nom) {

	nodo* temp;
	nodo* prec;
	temp = pietanze;
	prec = NULL;
	if(temp!=NULL) {
		//Caso speciale, primo elemento della lista da cancellare e mettere in testa
		if(temp->data.nome.compare(nom)==0) {
			pietanze = temp->next;
			delete temp;
			return true;
		}
		prec = pietanze;
		temp = temp -> next;
		while(temp!=NULL) {
			//Il puntatore al precedente diventa l'elemento successivo, cancelliamo il corrente
			if(temp->data.nome.compare(nom)==0) {
					prec->next = temp->next;
					delete temp;
					return true;
			}
			prec = temp;
			temp = temp -> next;
		}
	}
	//Non abbiamo trovato nulla da cancellare
	return false;
}

/*Stampa gli alimenti di un determinato menu*/
void menu::getSituazione() {
	nodo* temp;
	temp = pietanze;
	cout<<"##############################"<<endl;
	cout<<"Menu:"<<nomeSagra<<endl;
	cout<<"##############################"<<endl;
	while(temp!=NULL) {
		cout << "Codice piatto: " << temp->data.codic << endl;
		cout << "Nome piatto: " << temp->data.nome << endl;
		cout << "Tipologia piatto: " << temp->data.tipologia << endl;
		cout << "Disponibilità piatto: " << temp->data.disp << endl;
		cout << "Valore piatto: " << temp->data.valore << endl;
		cout << "-------------------" << endl;
		temp = temp->next;
	}
}

/*Restituisce la somma del valore degli alimenti di una determinata tipologia presenti in un menu*/
int menu::getValore(string tipologia) {
	nodo* temp;
	temp = pietanze;
	int valore=0;
	while(temp!=NULL) {
		if(temp->data.tipologia.compare(tipologia)==0) {
			valore+=temp->data.valore;
		}
		temp=temp->next;
	}
	return valore;
}


/*Operatore di somma che restituisce la somma di due menu se sono appartenenti allo
 * stesso comune, in caso contrario restituirà solo il primo comune, per scelta nostra
 */
const menu menu::operator+(menu &secondo) {
	/*Se le sagre avvengono nello stesso paese*/
	if(this->comune.compare(secondo.comune)==0) {
		nodo* temp;
		menu primo = *this;
		/*il nome della nuova sagra è la concatenazione dei precedenti*/
		primo.nomeSagra=primo.nomeSagra+secondo.nomeSagra;
		/*Copiamo il puntatore per essere sicuri di non modificarlo*/
		temp = primo.pietanze;
		if(temp!=NULL) {
			/*Arriviamo in fondo al primo menu*/
			while(temp->next!=NULL) {
				temp=temp->next;
			}
			nodo* toCopy = secondo.pietanze;
			/*Finchè non è finito il secondo menu*/
			while(toCopy!=NULL) {
				/*Creiamo un nuovo nodo per contenere la pietanza*/
				temp->next = new nodo();
				/*Copiamo la pietanza nel primo menu*/
				addStruct(toCopy->data, temp->next);
				/*Ci spostiamo alla pietanza da copiare successiva*/
				toCopy = toCopy->next;
				/*E alla posizione successiva nel primo menu*/
				temp=temp->next;
			}
		}
		return primo;
	}
	else
		return *this;
}

const menu& menu::operator=(const menu & two) {
	nodo* temp;
	nodo* start=NULL;
	this->comune=two.comune;
	this->nomeSagra=two.nomeSagra;

	/*Cancelliamo gli elementi appartenenti al primo menu, se presenti*/
	while(this->pietanze!=NULL) {
		temp=this->pietanze->next;
		delete this->pietanze;
		this->pietanze=temp;
	}
	temp = two.pietanze;

	/*Finché non abbiamo percorso tutto il secondo menu*/
	while(temp!=NULL) {
		/*Caso speciale, siamo all'inizio della lista, crea un nodo direttamente in pietanze*/
		if(start==NULL) {
					this->pietanze = new nodo();
					start=this->pietanze;
		}
		/*La lista è stata creata, aggiungi il nodo al puntatore all'elemento successivo*/
		else {
					this->pietanze->next = new nodo();
					this->pietanze = this->pietanze->next;
		}
		/*Copiamo la pietanza corrente aggiungendola alla lista*/
		addStruct(temp->data,this->pietanze);
		/*Passiamo alla pietanza successiva del secondo menu*/
		temp=temp->next;
	}
	this->pietanze = start;
	return *this;
}



#endif /* IMPLEMENTAZIONE_CPP_ */
