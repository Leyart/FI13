/*
 * InsertFunctions.h
 *
 *  Created on: 02/ott/2013
 *      Author: Eleonora
 */

#ifndef INSERTFUNCTIONS_H_
#define INSERTFUNCTIONS_H_

struct ListNode {
	int 		 	 data;
	struct ListNode* nextPtr;
};

void insertNodeToFront(ListNode*& head, int element);
void insertNodeToTail(ListNode*& head, int element);
void smartInsertNodeToTail(ListNode*& head, ListNode*& tail, int element);
int insertAtIndex(ListNode*& head, int position, int element);
void printList(ListNode* head);

#endif /* INSERTFUNCTIONS_H_ */
