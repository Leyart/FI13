//============================================================================
// Name        : L7_2_FibonacciMemo.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int MAX = 10;

long fib(int n, long memo[]) {
	if (memo[n] != 0)
		return memo[n];
	memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
	return memo[n];
}

int main() {
	int n;
	long memo[MAX];
	for (int i = 2; i < MAX; i++)       // inizializzazione
		memo[i] = 0;
	memo[0] = 1;
	memo[1] = 1;  // casi base
	cout << "Inserire un intero: " << endl;
	cin >> n;
	cout << "fibonacci di " << n << " = " << fib(n, memo);
	return 0;
}
