//============================================================================
// Name        : L6_1_ArrayInvertiSequenza.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main1() {
	const int size = 10;
	char buffer[size];
	int i = 0;
	while (i < size) {
		cout << "Prossimo carattere: " << endl;
		cin >> buffer[i];
		++i;
	}
	--i;
	while (i >= 0) {
		cout << buffer[i] << endl;
		--i;
	}
	return 0;
}

int main2() {
	const int maxSize = 10;
	char buffer[maxSize];
	int size, i = 0;
	cout << "Inserire la lunghezza della sequenza: " << endl;
	cin >> size;
	if (size > maxSize)
		cout << "Sequenza troppo lunga, max = " << maxSize << endl;
	else {
		while (i < size) {
			cout << "Prossimo carattere: " << endl;
			cin >> buffer[i];
			++i;
		}
		--i;
		while (i >= 0) {
			cout << buffer[i] << endl;
			--i;
		}
	}
	return 0;
}

int main3() { // uso ctrl-z come sentinella
	const int maxSize = 10;
	char buffer[maxSize];
	int i = 0;
	cout << "Prossimo carattere, ctrl-z per terminare: " << endl;
	while (i < maxSize && cin >> buffer[i]) {
		cout << "Prossimo carattere, ctrl-z per terminare: " << endl;
		++i;
	}
	--i;
	while (i >= 0) {
		cout << buffer[i] << endl;
		--i;
	}

	return 0;
}

int main() {
//  main1();
//	main2();
	main3();
	return 0;
}
