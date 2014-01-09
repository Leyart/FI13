#include "ListUtils.h"
#include <iostream>

void printFromHead(ListNode* first) {
	ListNode* currentNode = first;

	std::cout << "List elements:" << std::endl;
	while (currentNode != NULL) {
		std::cout << "- " << currentNode->data << std::endl;
		currentNode = currentNode->nextPtr;
	}
}

void printFromTail(ListNode* last) {
	ListNode* currentNode = last;

	std::cout << "List elements:" << std::endl;
	while (currentNode != NULL) {
		std::cout << "- " << currentNode->data << std::endl;
		currentNode = currentNode->previousPtr;
	}
}
