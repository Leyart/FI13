#include "1-CreatePrint.h"
#include "2-CountNodes.h"
#include "3-ComputeDepth.h"
#include "4-FindNode.h"
#include "5-NodeTypeCounts.h"
#include "6-CompareTrees.h"
#include "7-CheckTreeDepth.h"
#include "8-ComputeQuantities.h"
#include "9-LeavesInList.h"
#include "10-OrderedInsert.h"
#include "11-OddEvenNumbers.h"
#include "12-EqualLeafSummation.h"
#include "13-Mirror.h"
#include <iostream>

int main() {
	int exercise = -1;
	int status;

	std::cout << "Insert the exercise number: ";
	std::cin >> exercise;

	switch(exercise) {
	case 1:
		status = CreatePrint();
		break;
	case 2:
		status = CountNodes();
		break;
	case 3:
		status = ComputeDepth();
		break;
	case 4:
		status = FindNode();
		break;
	case 5:
		status = NodeTypeCounts();
		break;
	case 6:
		status = CompareTrees();
		break;
	case 7:
		status = CheckTreeDepth();
		break;
	case 8:
		status = ComputeQuantities();
		break;
	case 9:
		status = LeavesInList();
		break;
	case 10:
		status = OrderedInsert();
		break;
	case 11:
		status = OddEvenNumbers();
		break;
	case 12:
		status = EqualLeafSummation();
		break;
	case 13:
		status = Mirror();
		break;
	}

	return status;
}
