//============================================================================
// Name        : L7_1_PassaggioArrayDim.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int corto = 2;
const int lungo = 4;

void stampaArray(const int array[], int dim) {
	for (int i = 0; i < dim; ++i)
		cout << array[i] << endl;
}

int main() {
	int arraylungo[lungo]={1,2,3,4};
	int arraycorto[corto]={5,6};
	stampaArray(arraylungo, lungo);
	stampaArray(arraycorto, corto);
	return 0;
}
