//============================================================================
// Name        : L7_1_PassaggioArrayTypedef.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
typedef char arraycorto[6];
typedef char arraylungo[10];

void stampaArray(arraycorto regione) {
	cout << regione << endl;
}

int main() {
	arraylungo array1 = "Lombardia";
	arraycorto array2 = "Lazio";
	stampaArray(array1);
	stampaArray(array2);
	return 0;
}
