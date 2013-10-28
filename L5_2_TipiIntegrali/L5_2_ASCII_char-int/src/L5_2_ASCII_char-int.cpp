//============================================================================
// Name        : L5_1_ASCII_char-int.cpp
// Author      : Piero Fraternali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {   // Legge un carattere e stampa il codice ASCII
  char c;      // se è una minuscola; altrimenti termina.
  int i;
  cout << "Scrivi un car. minuscolo (maiusc. x finire)" << endl;
  cin >> c;
  while (c >= 'a' && c <= 'z') {
     i = c; // assegna il valore del carattere a un intero
     cout << "Valore ASCII per " << c << " è: " << i << endl;
     cout << "Scrivi car. minuscolo (maiusc. x finire)" << endl;
     cin >> c;
  }
  return 0;
}

