//============================================================================
// Name        : L7_2_Fibonacci.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int fibo(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return (fibo(n - 1) + fibo(n - 2));
}

int main() {
	int numero;
	cin >> numero;
	cout << "Fibonacci di " << numero << "= " << fibo(numero) << endl;
	return 0;
}
