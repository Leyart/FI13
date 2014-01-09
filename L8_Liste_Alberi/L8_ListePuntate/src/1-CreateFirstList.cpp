#include <iostream>
#include "ListUtils.h"

int CreateFirstList() {
	ListNode* head = new ListNode;
	ListNode* secondNode = new ListNode;
	ListNode* thirdNode = new ListNode;

	head->data = 1;
	head->nextPtr = secondNode;

	secondNode->data = 7;
	secondNode->nextPtr = thirdNode;

	thirdNode->data = 4;
	thirdNode->nextPtr = NULL;

	return 0;
}
