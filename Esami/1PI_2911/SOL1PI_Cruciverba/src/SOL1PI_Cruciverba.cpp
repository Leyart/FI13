//============================================================================
// Name        : SOL1PI_Cruciverba.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

#define ORIZZONTALE 0
#define VERTICALE 1

#define R 4
#define C 5

string estraiParola(char m[R][C], int rig, int col, int dir)
{
	// la funzione restituisce la parola che si trova nel cella rig/col e va nella direzione dir
	// restituisce una stringa vuota ("") nel caso in cui la cella indicata non e' un inizio di una parola

	if (m[rig][col] == '*')
		return "";

	if (dir == ORIZZONTALE) {
		// se non e' la prima cella e quella precedente non e' uno spazio nero - non inizia una parola
		if ( (col > 0) && (m[rig][col - 1] != '*') )
			return "";
		// se e' l'ultima cella - non inizia una parola
		if (col == C - 1)
			return "";
		// se non e' l'ultima cella ma quella successiva e' uno spazio nero - non inizia una parola
		if ( (col < C - 1) && (m[rig][col + 1] == '*') )
			return "";
	}
	else {
		if ( (rig > 0) && (m[rig - 1][col] != '*') )
			return "";
		if (rig == R - 1)
			return "";
		if ( (rig < R - 1) && (m[rig + 1][col] == '*') )
			return "";
	}

	// Se siamo ancora qui, allora la parola e' valida - estraiamola
	string parola = "";
	while ( (m[rig][col] != '*') && (rig < R) && (col < C)) {
		//aggiunto caratteri alla stringa finche' non trovo uno spazio nero o non il limite della griglia
		parola = parola + m[rig][col];
		if (dir == ORIZZONTALE)
			col++;
		else
			rig++;

	}
	return parola;

}

int main() {
	char m[R][C] = {'A','B','I','*','I', 'T','O','*','E','R','O','B','A','M','A','S','*','*','I','Q'};
	int nParole = 0;
	//scorro tutte le celle, e se danno origine ad una parola la stampo
	for (int r = 0; r < R; r++) {
		for (int c = 0; c < C; c++) {
			string parolaHor = estraiParola(m, r, c, ORIZZONTALE);
			string parolaVer = estraiParola(m, r, c, VERTICALE);
			if ( (parolaHor != "") || (parolaVer != "") ) {
				//se da origine ad una parola in almeno un verso devo stamparla
				nParole++;
				cout << "Parola " << nParole << ": riga " << r << ", colonna " << c;
				if (parolaVer != "")
					cout << " verticale " << parolaVer;
				if (parolaHor != "")
					cout << " orizzontale " << parolaHor;
				cout << endl;
			}
		}
	}
	return 0;
}

