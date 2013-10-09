//============================================================================
// Name        : L5_2_pigreco.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "pigreco.h"
using namespace std;
extern const float pigreco;

int main() {
	float radius;
	cout << "Insert the value of the radius: " << endl;
	cin >> radius;
	cout << "Value of pigreco: " << pigreco << endl;
	cout << "Perimeter of the circle: " << perimeter(radius) << endl;
	cout << "Area of the circle: " << area(radius) << endl;
	return 0;
}
