//============================================================================
// Name        : L7_1_PassaggioArray.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void stampaArray(const char regione[6]){
	cout << regione << endl;
}

int main() {
	char array1[10]="Lombardia";
	char array2[6]="Lazio";
	stampaArray(array1);
	stampaArray(array2);
	return 0;
}
