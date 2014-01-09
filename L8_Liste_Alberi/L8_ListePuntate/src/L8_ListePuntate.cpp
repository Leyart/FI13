#include "1-CreateFirstList.h"
#include "2-ComputeListLength.h"
#include "3-CreateList.h"
#include "4-CopyList.h"
#include "5-DeleteFromList.h"
#include "6-SimpleExercises.h"
#include "7-ComplexExercises.h"
#include <iostream>

int main() {
	int exercise = -1;

	std::cout << "Insert the exercise number: ";
	std::cin >> exercise;

	switch(exercise) {
	case 1:
		CreateFirstList();
		break;
	case 2:
		ComputeListLength();
		break;
	case 3:
		CreateList();
		break;
	case 4:
		CopyList();
		break;
	case 5:
		DeleteFromList();
		break;
	case 6:
		SimpleExercises();
		break;
	case 7:
		ComplexExercises();
		break;
	default:
		break;
	}

	return 0;
}
