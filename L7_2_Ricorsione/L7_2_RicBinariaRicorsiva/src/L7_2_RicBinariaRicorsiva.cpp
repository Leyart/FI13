//============================================================================
// Name        : L7_2_RicBinariaRicorsiva.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int size = 10;

bool BinarySearch(int array[], int low, int high, int val) {
	int m;
	if (low > high)
		return false;
	else {
		m = (low + high) / 2;
		if (val == array[m])
			return true;
		else if (val > array[m])
			return BinarySearch(array, m + 1, high, val);
		else
			return BinarySearch(array, low, m - 1, val);
	}
}

int main() {
	int sequenza[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int valore;
	cin >> valore;
	bool trovato = BinarySearch(sequenza, 0, size - 1, valore);
	if (trovato)
		cout << "Risultato trovato " << endl;
	else
		cout << "Risultato non presente" << endl;
	return 0;
}
