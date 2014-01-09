#include "9-LeavesInList.h"
#include "TreeUtils.h"
#include "ListUtils.h"
#include <iostream>

void saveLeavesInList(TreeNode* currentNode, ListNode*& head) {
	if (currentNode == NULL)
		return;
	else if (currentNode->leftPtr == NULL && currentNode->rightPtr == NULL) {
		ListNode* newLeaf = new ListNode;
		newLeaf->data = currentNode->data;
		newLeaf->nextPtr = head;
		head = newLeaf;
	}
	else {
		saveLeavesInList(currentNode->leftPtr, head);
		saveLeavesInList(currentNode->rightPtr, head);
	}
}

int LeavesInList() {
	TreeNode* rootNode = createDummyTree();
	ListNode* leafList = NULL;

	printPaths(rootNode);

	saveLeavesInList(rootNode, leafList);
	printList(leafList);

	return 0;
}
