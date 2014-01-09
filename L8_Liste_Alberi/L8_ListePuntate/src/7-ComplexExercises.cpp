#include <iostream>
#include <vector>
#include <cmath>

struct LineNode {
	int x;
	int y;
	struct LineNode* nextPtr;
};

void printList(LineNode* head) {
	LineNode* currentNode = head;

	std::cout << "List elements:" << std::endl;
	while (currentNode != NULL) {
		std::cout << " - (" << currentNode->x << ";"
				  << currentNode->y << ")" << std::endl;
		currentNode = currentNode->nextPtr;
	}
}

void insertNodeToFront(LineNode*& head, int x, int y) {
	LineNode* newNode = new LineNode;
	newNode->x = x;
	newNode->y = y;
	newNode->nextPtr = head;

	head = newNode;
}

LineNode* findFirstElement(LineNode* list) {
	return list;
}

LineNode* findLastElement(LineNode* list) {
	while (list->nextPtr != NULL)
		list = list->nextPtr;

	return list;
}

float computeDistance(LineNode* firstPt, LineNode* secondPt) {
	int x1 = firstPt->x;
	int y1 = firstPt->y;
	int x2 = secondPt->x;
	int y2 = secondPt->y;

	float distance = std::sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	return distance;
}

float computeLineLength(LineNode* head) {
	LineNode* currentNode = head->nextPtr;
	LineNode* previousNode = head;

	float length = 0;

	while (currentNode != NULL) {
		length += computeDistance(currentNode, previousNode);

		previousNode = currentNode;
		currentNode = currentNode->nextPtr;
	}

	return length;
}

// Check whether B is a shortcut of A
bool isShortcut(LineNode* A, LineNode* B) {
	if (A == NULL || B == NULL)
		return false;

	LineNode* firstElementA = findFirstElement(A);
	LineNode* lastElementA = findLastElement(A);
	LineNode* firstElementB = findFirstElement(B);
	LineNode* lastElementB = findLastElement(B);

	if (firstElementA->x == firstElementB->x &&
			firstElementA->y == firstElementB->y &&
			lastElementA->x == lastElementB->x &&
			lastElementB->y == lastElementB->y) {
		float lengthA = computeLineLength(A);
		float lengthB = computeLineLength(B);

		if (lengthB < lengthA)
			return true;
		else
			return false;
	}
	else
		return false;
}

void checkShortcut(LineNode* firstList, LineNode* secondList) {
	bool shortcut = isShortcut(firstList,secondList);
		if (shortcut)
			std::cout << "The second list is shortcut of the first list" << std::endl;
		else
			std::cout << "The second list is NOT shortcut of the first list" << std::endl;
}

bool isDisjointed(LineNode* A, LineNode* B) {
	bool disjointed = true;
	LineNode* currentNodeA = A;

	while (currentNodeA != NULL) {
		LineNode* currentNodeB = B;
		int xA = currentNodeA -> x;
		int yA = currentNodeA -> y;

		while (currentNodeB != NULL) {
			int xB = currentNodeB -> x;
			int yB = currentNodeB -> y;

			if (xA == xB && yA == yB) {
				disjointed = false;
				break;
			}

			currentNodeB = currentNodeB -> nextPtr;
		}

		if (disjointed == false)
			break;

		currentNodeA = currentNodeA -> nextPtr;
	}

	return disjointed;
}

void checkDisjointed(LineNode* firstList, LineNode* secondList) {
	bool disjointed = isDisjointed(firstList, secondList);

	if (disjointed)
		std::cout << "The lists are disjointed" << std::endl;
	else
		std::cout << "The lists are NOT disjointed" << std::endl;
}

bool isEqualFromHere(LineNode* A, LineNode*B) {
	LineNode* currentNodeA = A;
	LineNode* currentNodeB = B;
	bool equal = true;

	while (currentNodeA != NULL && currentNodeB != NULL) {
		int xA = currentNodeA->x;
		int yA = currentNodeA->y;
		int xB = currentNodeB->x;
		int yB = currentNodeB->y;

		if (xA != xB || yA != yB) {
			equal = false;
			break;
		}
		currentNodeA = currentNodeA->nextPtr;
		currentNodeB = currentNodeB->nextPtr;
	}
	if (currentNodeA == NULL && currentNodeB != NULL)
		equal = false;

	return equal;
}

// Check whether B is contained in A
bool isContained(LineNode* A, LineNode* B) {
	LineNode* currentNodeA = A;
	bool contained = false;

	LineNode* currentNodeB = B;
	int xB = currentNodeB->x;
	int yB = currentNodeB->y;

	while (currentNodeA != NULL) {
		int xA = currentNodeA->x;
		int yA = currentNodeA->y;

		if (xA == xB && yA == yB)
			contained = isEqualFromHere(currentNodeA, currentNodeB);

		if (contained == true)
			break;

		currentNodeA = currentNodeA -> nextPtr;
	}

	return contained;
}

void checkContained(LineNode* firstList, LineNode* secondList) {
	bool contained = isContained(firstList, secondList);

	if (contained)
		std::cout << "The second list is contained in the first list" << std::endl;
	else
		std::cout << "The second list is NOT contained in the first list" << std::endl;
}


int ComplexExercises() {
	std::cout << "Lists: A" << std::endl;
	LineNode* A = NULL;
	insertNodeToFront(A, 4, 1);
	insertNodeToFront(A, 9, 2);
	insertNodeToFront(A, 2, 5);
	insertNodeToFront(A, 7, 6);
	insertNodeToFront(A, 1, 1);
	printList(A);
	std::cout << std::endl;

	std::cout << "Lists: A and B" << std::endl;
	LineNode* B = NULL;
	insertNodeToFront(B, 9, 2);
	insertNodeToFront(B, 2, 5);
	insertNodeToFront(B, 7, 6);
	printList(B);
	checkShortcut(A,B);
	checkDisjointed(A,B);
	checkContained(A,B);
	std::cout << std::endl;

	std::cout << "Lists: A and C" << std::endl;
	LineNode* C = NULL;
	insertNodeToFront(C, 3, 2);
	insertNodeToFront(C, 4, 9);
	printList(C);
	checkShortcut(A,C);
	checkDisjointed(A,C);
	checkContained(A,C);
	std::cout << std::endl;

	std::cout << "Lists: A and D" << std::endl;
	LineNode* D = NULL;
	insertNodeToFront(D, 4, 1);
	insertNodeToFront(D, 3, 1);
	insertNodeToFront(D, 1, 1);
	printList(D);
	checkShortcut(A,D);
	checkDisjointed(A,D);
	checkContained(A,D);
	std::cout << std::endl;

	return 0;
}
