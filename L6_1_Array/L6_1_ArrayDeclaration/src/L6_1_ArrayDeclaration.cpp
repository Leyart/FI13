//============================================================================
// Name        : L6_1_ArrayDeclaration.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int size = 3;
	int sizevar = 4;
	int arr[size]; // ok, dimension is constant
	int arr2[sizevar]; // forbidden by the language, allowed by the compiler!!! do not use !!
	arr[0] = 1;
	cin >> arr[1];
	cin >> arr[2];
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	arr2[0] = 1;
	cout << arr2[0] << endl;
	return 0;
}
