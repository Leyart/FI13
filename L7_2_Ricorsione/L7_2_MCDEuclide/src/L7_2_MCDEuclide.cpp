//============================================================================
// Name        : L7_2_MCDEuclide.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int euclideIter(int m, int n) {
	while (m != n)
		if (m > n)
			m = m - n;
		else
			n = n - m;
	return m;
}

int euclideRic(int m, int n) {
	if (m == n)
		return n;
	if (m > n)
		return euclideRic(m - n, n);
	else
		return euclideRic(m, n - m);
}

int main() {
	cout << "Inserire due numeri"<< endl;
	int numero1, numero2;
	cin >> numero1 >> numero2;
	cout << "MCD iterativo: " << euclideIter(numero1, numero2) << endl;
	cout << "MCD ricorsivo: " << euclideRic(numero1, numero2) << endl;
	return 0;
}

