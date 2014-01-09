#include "2-ComputeListLength.h"
#include <iostream>
#include "ListUtils.h"

ListNode* fillList() {
	ListNode* head = new ListNode;
	ListNode* secondNode = new ListNode;
	ListNode* thirdNode = new ListNode;

	head->data = 1;
	head->nextPtr = secondNode;

	secondNode->data = 7;
	secondNode->nextPtr = thirdNode;

	thirdNode->data = 4;
	thirdNode->nextPtr = NULL;

	return head;
}

int computeListLength(ListNode* head) {
	int length = 0;
	ListNode* currentNode = head;

	while (currentNode != NULL) {
		length++;
		currentNode = currentNode->nextPtr;
	}

	return length;
}

int ComputeListLength() {
	ListNode* head = fillList();

	int length = computeListLength(head);
	std::cout << "List length: " << length;

	return 0;
}
