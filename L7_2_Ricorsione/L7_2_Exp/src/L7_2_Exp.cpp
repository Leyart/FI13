//============================================================================
// Name        : L7_2_Exp.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int espRic(int x, int y) {
	if (y == 0)
		return 1;
	else
		return x * espRic(x, y - 1);
}

int espIter(int x, int y) {
	int e = 1;
	for (int i = 1; i <= y; i++)
		e *= x;
	return e;
}

int main() {
	cout << "Inserire base ed esponente" << endl;
	int numero1, numero2;
	cin >> numero1 >> numero2;
	cout << "Exp iterativo: " << espIter(numero1, numero2) << endl;
	cout << "Exp ricorsivo: " << espRic(numero1, numero2) << endl;
	return 0;
}
