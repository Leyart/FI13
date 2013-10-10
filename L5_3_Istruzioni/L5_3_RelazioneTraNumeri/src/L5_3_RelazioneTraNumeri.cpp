//============================================================================
// Name        : RelazioneTraNumeri.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "Enter two integers, &  I will tell you"
			<< " the relationship they satisfy" << endl;
	cin >> num1 >> num2;
	if (num1 == num2)
		cout << num1 << " Is equal to " << num2 << endl;
	if (num1 != num2)
		cout << num1 << " Is not equal to " << num2 << endl;
	if (num1 < num2)
		cout << num1 << " Is less than " << num2 << endl;
	if (num1 > num2)
		cout << num1 << " Is greater than " << num2 << endl;
	if (num1 <= num2)
		cout << num1 << " Is less or equal to " << num2 << endl;
	if (num1 >= num2)
		cout << num1 << " Is greater or equal to " << num2 << endl;
	return 0;
}
