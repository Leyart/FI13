//============================================================================
// Name        : L6_2_RicercaBinariaConIteratori.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<string> text = { "cammin", "del", "di", "mezzo", "nel", "nostra",
			"vita" };
	string sought;
	cout << "Inserire la parola cercata" << endl;
	cin >> sought;
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2; // original midpoint
	// while there are still elements to look at and we haven't yet found sought
	while (mid != end && *mid != sought) {
		if (sought < *mid) // is the element we want in the first half?
			end = mid; // if so, adjust the range to ignore the second	half
		else
			// the element we want is in the second half
			beg = mid + 1; // start looking with the element just after mid
		mid = beg + (end - beg) / 2; // new midpoint
	}
	auto pos = mid-text.begin(); // computes the distance from the 1st element
		if (*mid == sought) {
		cout << "Parola trovata alla posizione: " << pos << endl;
	} else
		cout << "Parola non trovata" << endl;
	return 0;
}
