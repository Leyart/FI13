//============================================================================
// Name        : L6_4_TestoGiustificato.cpp
// Author      : Roman Fedorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

const int TEXT_WIDTH = 80;

int main() {
	string str;
	vector<string> parole;
	string giustStr;
	vector<string> readyStrings;
	cout << "Inserisci il testo riga per riga:" << endl;
	while (getline(cin, str))
	{
		if (str.size() > TEXT_WIDTH)
		{
			cout << "Riga scartata, troppo lunga." << endl;
		}
		else
		{
			parole.clear();
			char prevc = ' ';
			int currentWordInd = -1;
			int nonSpaceCharsCount = 0;
			for (char c : str)
			{
				if (!isspace(c))
				{
					nonSpaceCharsCount++;
					string tempStr(1, c);
					if (isspace(prevc))
					{
						currentWordInd++;
						parole.push_back(tempStr);
					}
					else
					{
						parole[currentWordInd] += tempStr;
					}
				}
				prevc = c;
			}

			int spacesAvailable = TEXT_WIDTH - nonSpaceCharsCount;
			int spacesEachTime;
			int extraSpacesToPut;
			if (parole.size() > 1)
			{
				spacesEachTime = spacesAvailable / (parole.size() - 1);
				extraSpacesToPut = spacesAvailable % (parole.size() - 1);
			}
			giustStr.clear();
			for (int iParola = 0; iParola < parole.size(); iParola++)
			{
				giustStr += parole[iParola];
				if (iParola != parole.size() - 1)
				{
					string spazi(spacesEachTime, ' ');
					giustStr += spazi;
					if (extraSpacesToPut > 0)
					{
						giustStr += " ";
						extraSpacesToPut--;
					}
				}
			}
			readyStrings.push_back(giustStr);
		}
	}

	for (string readyLine : readyStrings)
	{
		cout << readyLine << endl;
	}
	return 0;
}
