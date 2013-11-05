//============================================================================
// Name        : L7_2_Hanoi.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void hanoi (int altezza, char da, char a, char transito) {
   if ( altezza != 0 ) {
      hanoi (altezza-1, da, transito, a);
      cout << "Sposta cerchio da " << da << " a "<< a <<endl;
      hanoi (altezza-1, transito, a, da);
   }
}


int main() {
	hanoi (3, 'A', 'C', 'B');
	return 0;
}
