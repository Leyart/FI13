//============================================================================
// Name        : LAB4_FibonacciVector.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, i;
	vector<int> seq;
	cout << "Inserisci N" << endl;
	cin >> n;
	seq.push_back(1);
	seq.push_back(1);
	for (i = 2; i < n; i++)
	{
		seq.push_back(seq[i-1]+seq[i-2]);
	}
	for (i = 0; i < n; i++)
	{
		cout << seq[i] << endl;
	}
	return 0;
}
