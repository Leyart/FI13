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

void insertNodeToFront(ListNode*& head, int element) {
	ListNode* newNode = new ListNode;
	newNode->data = element;
	newNode->nextPtr = head;

	head = newNode;
}

void insertNodeToTail(ListNode*& head, int element) {
	ListNode* newNode = new ListNode;
	newNode->data = element;
	newNode->nextPtr = NULL;

	if (head == NULL)
		head = newNode;
	else {
		ListNode* currentNode = head;
		while (currentNode->nextPtr != NULL)
			currentNode = currentNode->nextPtr;

		currentNode->nextPtr = newNode;
	}
}

void smartInsertNodeToTail(ListNode*& head, ListNode*& tail, int element) {
	ListNode* newNode = new ListNode;
	newNode->data = element;
	newNode->nextPtr = NULL;

	if (head == NULL)
		head = newNode;
	else
		tail->nextPtr = newNode;
	tail = newNode;
}

int insertAtIndex(ListNode*& head, int position, int element) {
	ListNode* currentNode = head;

	ListNode* newNode = new ListNode;
	newNode->data = element;
	newNode->nextPtr = NULL;

	if (position == 0 || head == NULL) {
		newNode->nextPtr = head;
		head = newNode;
	}
	else {
		for (int i = 0; i < position-1; i++) {
			currentNode = currentNode->nextPtr;
			if (currentNode == NULL) {
				std::cout << "ERROR: the list length is smaller than the required position."<< std::endl;
				return -1;
			}
		}

		newNode->nextPtr = currentNode->nextPtr;
		currentNode->nextPtr = newNode;
	}
	return 0;
}
