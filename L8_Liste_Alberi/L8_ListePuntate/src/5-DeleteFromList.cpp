#include "5-DeleteFromList.h"
#include <iostream>
#include "ListUtils.h"

void deleteElement(ListNode*& head, int element) {
	ListNode* currentNode = head;
	ListNode* previousNode = NULL;

	while (currentNode != NULL) {
		if (currentNode->data == element) {
			if (previousNode == NULL)
				head = currentNode->nextPtr;
			else
				previousNode->nextPtr = currentNode->nextPtr;

			delete currentNode;
			return;
		}

		previousNode = currentNode;
		currentNode = currentNode->nextPtr;
	}
}

void deleteList(ListNode*& head) {
	ListNode* currentNode = NULL;

	while (head != NULL) {
		currentNode = head->nextPtr;
		delete head;
		head = currentNode;
	}
}

int DeleteFromList() {
	ListNode* head = NULL;
	insertNodeToFront(head, 1);
	insertNodeToFront(head, 4);
	insertNodeToFront(head, 7);
	printList(head);

	deleteElement(head, 4);
	printList(head);

	deleteList(head);
	printList(head);

	return 0;
}
