#include "TreeUtils.h"
#include "ListUtils.h"

void printPath(ListNode* first) {
	ListNode* currentNode = first;

	std::cout << "- ";
	while(currentNode != NULL) {
		std::cout << currentNode->data << " ";
		currentNode = currentNode->nextPtr;
	}
	std::cout << std::endl;
}

void addNodeToList(int data, ListNode*& pathHead, ListNode*& pathTail) {
	ListNode* newNode = new ListNode;
	newNode->nextPtr = NULL;
	newNode->data = data;
	if (pathHead == NULL) {
		pathHead = newNode;
		pathTail = newNode;
	}
	else {
		pathTail->nextPtr = newNode;
		pathTail = newNode;
	}
}

void printPaths(TreeNode* rootNode, ListNode* pathHead, ListNode* pathTail) {
	if (rootNode == NULL)
		return;

	addNodeToList(rootNode->data, pathHead, pathTail);

	if (rootNode->leftPtr == NULL && rootNode->rightPtr == NULL)
		printPath(pathHead);
	else {
		printPaths(rootNode->leftPtr, pathHead, pathTail);
		printPaths(rootNode->rightPtr, pathHead, pathTail);
	}
}

void printPaths(TreeNode* rootNode) {
	if (rootNode == NULL) {
		std::cout << "Empty tree." << std::endl;
		return;
	}

	ListNode* pathHead = NULL;
	ListNode* pathTail = NULL;
	printPaths(rootNode, pathHead, pathTail);
}

int countNodes(TreeNode* currentNode) {
	if (currentNode == NULL)
		return 0;
	else
		return 1 + countNodes(currentNode->leftPtr) + countNodes(currentNode->rightPtr);
}


// ************* Dummy Construction ************* //
TreeNode* createDummyTree() {
	TreeNode* rootNode = new TreeNode;
	TreeNode* leftChild = new TreeNode;
	TreeNode* rightChild = new TreeNode;
	TreeNode* leftChild2 = new TreeNode;
	TreeNode* rightChild2 = new TreeNode;

	rootNode->data = 1;
	rootNode->leftPtr = leftChild;
	rootNode->rightPtr = rightChild;

	leftChild->data = 2;
	leftChild->leftPtr = leftChild2;
	leftChild->rightPtr = rightChild2;

	rightChild->data = 3;
	rightChild->leftPtr = NULL;
	rightChild->rightPtr = NULL;

	leftChild2-> data = 4;
	leftChild2->leftPtr = NULL;
	leftChild2->rightPtr = NULL;

	rightChild2-> data = 5;
	rightChild2->leftPtr = NULL;
	rightChild2->rightPtr = NULL;

	return rootNode;
}

// ************* Dummy Construction ************* //
TreeNode* createSecondDummyTree() {
	TreeNode* rootNode = new TreeNode;
	TreeNode* leftChild = new TreeNode;
	TreeNode* rightChild = new TreeNode;

	rootNode->data = 1;
	rootNode->leftPtr = leftChild;
	rootNode->rightPtr = rightChild;

	leftChild->data = 2;
	leftChild->leftPtr = NULL;
	leftChild->rightPtr = NULL;

	rightChild->data = 3;
	rightChild->leftPtr = NULL;
	rightChild->rightPtr = NULL;

	return rootNode;
}
