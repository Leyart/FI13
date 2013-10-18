
#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	vector<int> a, b;
	double valore,  prodotto = 0.0, normaA = 0.0, normaB = 0.0, coseno=0.0;
	int lunghezza = 0;
	cout << endl << "Inserisci la lunghezza dei vettori: " << endl;
	cin >> lunghezza;
	cout << endl << "Inserisci gli elementi di a: " << endl;
	for (int i = 0; i < lunghezza; ++i) {
		cin >> valore;
		a.push_back(valore);
		normaA += valore * valore;
	}
	cout << endl << "Inserisci gli elementi di b: " << endl;
	for (int i = 0; i < lunghezza; ++i) {
		cin >> valore;
		b.push_back(valore);
		normaB += valore * valore;
		prodotto += a[i] * b[i];
	}
	coseno = prodotto/(sqrt(normaA)*sqrt(normaB));
	cout << "Il prodotto scalare vale: " << prodotto << endl;
	cout << "La norma di A vale: " << normaA << endl;
	cout << "La norma di B vale: " << normaB << endl;
	cout << "Il coseno di similitudine vale: " << coseno << endl;

	return 0;
}

