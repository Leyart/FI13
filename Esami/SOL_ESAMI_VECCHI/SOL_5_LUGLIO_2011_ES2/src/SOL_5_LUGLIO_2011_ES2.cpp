//============================================================================
// Name        : ESERCIZIO_2_LUGLIO_2011.cpp
// Author      : Luca Galli
// Version     : 1.0
// Description : Main dell'esercizio
//============================================================================

#include <iostream>
#include "menu.h"



int main() {

	pietanza piatto[50];

	piatto[0].nome = "Lasagna";
	piatto[0].codic = 1;
	piatto[0].disp = 2;
	piatto[0].tipologia = "primo";
	piatto[0].valore = 3;

	piatto[1].codic = 2;
	piatto[1].disp = 3;
	piatto[1].nome = "polpo";
	piatto[1].tipologia = "secondo";
	piatto[1].valore = 2;

	piatto[2].codic = 3;
	piatto[2].disp = 1;
	piatto[2].nome = "ananas";
	piatto[2].tipologia = "frutta";
	piatto[2].valore = 1;

	//ESECUZIONE-----------------------------


	menu polpo("sagraDelPolpo", "Mola", piatto, 3);

	menu polpo2("sagraDelPolpo_LaVendetta", "Mola", piatto, 3);

	polpo.aggiungiPiatto({1, "mozzarella", "contorno", 2, 10});

	polpo.decrementaDisp("ananas", 2);

	polpo.cancellaPiatto("polpo");

	polpo.cancellaPiatto("Lasagna");

	menu polpo3(polpo);

	polpo3.getSituazione();

	polpo=polpo+polpo2;

	polpo.getSituazione();

	return 0;
}
