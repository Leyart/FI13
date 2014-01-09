#include "3-CreateList.h"
#include <iostream>
#include "ListUtils.h"

int CreateList() {
	// Insert from front
	ListNode* headFromFront = NULL;

	insertNodeToFront(headFromFront, 1);
	insertNodeToFront(headFromFront, 7);
	insertNodeToFront(headFromFront, 4);

	printList(headFromFront);

	// Insert from tail
	ListNode *headFromTail = NULL;

	insertNodeToTail(headFromTail, 1);
	insertNodeToTail(headFromTail, 7);
	insertNodeToTail(headFromTail, 4);

	printList(headFromTail);

	// Smart insert from tail
	ListNode* smartHead = NULL;
	ListNode* smartTail = NULL;

	smartInsertNodeToTail(smartHead, smartTail, 1);
	smartInsertNodeToTail(smartHead, smartTail, 7);
	smartInsertNodeToTail(smartHead, smartTail, 4);

	printList(smartHead);

	// Insert in the middle
	int element = 2;
	int position = 1;
	int status = insertAtIndex(headFromTail, position, element);
	printList(headFromTail);

	return status;
}
