#include <iostream>
#include <vector>
#include "ListUtils.h"
#include <limits>

int sumElements(ListNode* head, int M) {
	ListNode* currentNode = head;
	int sum = 0;

	while (currentNode != NULL) {
		if (currentNode->data % M == 0)
			sum = sum + currentNode->data;

		currentNode = currentNode->nextPtr;
	}

	return sum;
}

int findMax(ListNode* head) {
	if (head == NULL)
		return -1; // Assuming values will be all positive
	else
		return std::max(head->data,
					   findMax(head->nextPtr));
}

int findEvenMin(ListNode* head) {
	ListNode* currentNode = head;
	int min = std::numeric_limits<int>::max();

	while (currentNode != NULL) {
		if (currentNode->data % 2 == 0)
			min = std::min(currentNode->data, min);

		currentNode = currentNode->nextPtr;
	}

	return min;
}

void inversePrint(ListNode* head) {
	if (head == NULL)
		return;
	else {
		inversePrint(head->nextPtr);
		std::cout << "- " << head->data << std::endl;
	}
}

std::vector<int> findPeaks(ListNode* head) {
	ListNode* currentNode = head->nextPtr;
	ListNode* previousNode = head;
	std::vector<int> peaks;

	while (currentNode != NULL) {
		if (previousNode->data < (float)currentNode->data/2 &&
				currentNode->nextPtr->data < (float)currentNode->data/2)
			peaks.push_back(currentNode->data);

		previousNode = currentNode;
		currentNode = currentNode->nextPtr;
	}

	return peaks;
}

int SimpleExercises() {
	ListNode* head = NULL;
	insertNodeToFront(head, 4);
	insertNodeToFront(head, 9);
	insertNodeToFront(head, 2);
	insertNodeToFront(head, 7);
	insertNodeToFront(head, 1);
	printList(head);

	int M = 2;
	int sum = sumElements(head, M);
	std::cout << "Sum of elements (multiples of " << M
			  << "): " << sum << std::endl;

	int max = findMax(head);
	std::cout << "Maximum element: " << max << std::endl;

	int min = findEvenMin(head);
	std::cout << "Minimum even element: " << min << std::endl;

	std::cout << "Inverse print:" << std::endl;
	inversePrint(head);

	std::cout << "Peaks:" << std::endl;
	std::vector<int> peaks = findPeaks(head);
	for (size_t i = 0; i < peaks.size(); i++)
		std::cout << "- " << peaks[i] << std::endl;

	return 0;
}
