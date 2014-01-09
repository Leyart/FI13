#include "4-CopyList.h"
#include <iostream>
#include "ListUtils.h"

ListNode* copyList(ListNode* head) {
	ListNode* copyHead = NULL;
	ListNode* copyTail = NULL;
	ListNode* currentNode = head;

	while (currentNode != NULL) {
		ListNode* newNode = new ListNode;
		newNode->data = currentNode->data;
		newNode->nextPtr = NULL;

		if (copyHead == NULL)
			copyHead = newNode;
		else
			copyTail->nextPtr = newNode;

		copyTail = newNode;
		currentNode = currentNode->nextPtr;
	}

	return copyHead;
}

ListNode* recursiveCopy(ListNode* currentNode) {
	if (currentNode == NULL)
		return NULL;
	else {
		ListNode* newNode = new ListNode;
		newNode->data = currentNode->data;
		newNode->nextPtr = recursiveCopy(currentNode->nextPtr);
		return newNode;
	}
}

int CopyList() {
	ListNode* head = NULL;
	insertNodeToFront(head, 1);
	insertNodeToFront(head, 4);
	insertNodeToFront(head, 7);

	ListNode* recursiveCopy = copyList(head);
	printList(recursiveCopy);

	ListNode* copy = copyList(head);
	printList(copy);

	return 0;
}
