#include <iostream>
#include "ListUtils.h"

void printList(ListNode* head) {
	ListNode* currentNode = head;

	std::cout << "List elements:" << std::endl;
	while (currentNode != NULL) {
		std::cout << " - " << currentNode->data << std::endl;
		currentNode = currentNode->nextPtr;
	}
}
