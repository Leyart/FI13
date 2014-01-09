/*
 * ListUtils.h
 *
 *  Created on: 07/ott/2013
 *      Author: Eleonora
 */

#ifndef LISTUTILS_H_
#define LISTUTILS_H_

struct ListNode {
	int 		 	 data;
	struct ListNode* nextPtr;
	struct ListNode* previousPtr;
};

void printFromHead(ListNode* first);
void printFromTail(ListNode* last);


#endif /* LISTUTILS_H_ */
