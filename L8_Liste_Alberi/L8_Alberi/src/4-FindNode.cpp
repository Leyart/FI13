#include "4-FindNode.h"
#include "TreeUtils.h"
#include <iostream>

TreeNode* findNode(TreeNode* currentNode, int element) {
	if (currentNode == NULL || currentNode->data == element)
		return currentNode;
	else {
		TreeNode* leftSearchResult = findNode(currentNode->leftPtr, element);
		TreeNode* rightSearchResult = findNode(currentNode->rightPtr, element);
		if (leftSearchResult == NULL)
			return rightSearchResult;
		else
			return leftSearchResult;
	}
}

int FindNode() {
	TreeNode* rootNode = createDummyTree();
	int element = -1;

	std::cout << "Insert the element:";
	std::cin >> element;
	TreeNode* node = findNode(rootNode, element);
	if (node == NULL)
		std::cout << "Not found." << std::endl;
	else
		std::cout << "Found." << std::endl;

	return 0;
}
