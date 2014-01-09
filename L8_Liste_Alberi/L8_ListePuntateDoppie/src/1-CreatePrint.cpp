#include "1-CreatePrint.h"
#include <iostream>
#include "ListUtils.h"

int CreatePrint(){
	ListNode* first = new ListNode;
	ListNode* secondNode = new ListNode;
	ListNode* last = new ListNode;

	first->data = 1;
	first->previousPtr = NULL;
	first->nextPtr = secondNode;

	secondNode->data = 2;
	secondNode->previousPtr = first;
	secondNode->nextPtr = last;

	last->data = 3;
	last->previousPtr = secondNode;
	last->nextPtr = NULL;

	printFromHead(first);
	printFromTail(last);

	return 0;
}
