//============================================================================
// Name        : L7_1_ScambioValori.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swapByValue(int p, int q) {
	int temp;
	temp = p;
	p = q;
	q = temp;
}

void swapByRef(int &p, int &q) {
	int temp;
	temp = p;
	p = q;
	q = temp;
}

int main() {
	int a = 1, b = 2;
	cout << "Valori iniziali: " << a << ' ' << b << endl;
	swapByValue(a, b);
	cout << "Valori dopo swapByValue: " << a << ' ' << b << endl;
	swapByRef(a, b);
	cout << "Valori dopo swapByRef: " << a << ' ' << b << endl;
	return 0;
}
