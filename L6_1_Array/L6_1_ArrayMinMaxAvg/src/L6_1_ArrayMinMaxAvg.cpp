//============================================================================
// Name        : L6_1_ArrayMinMaxAvg.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int size = 10;
	int a[size] = {1,2,3,4,5,6,7,8,9,10};
		float media = a[0];
	int max = a[0], min = a[0];
	for (int i = 1; i <= size-1; ++i) {
		media += a[i];
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	media /= size;
	cout << "Media: " << media << " Min: " <<  min << " Max: " << max << endl;
	return 0;
}
