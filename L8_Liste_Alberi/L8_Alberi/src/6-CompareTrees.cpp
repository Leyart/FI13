#include "6-CompareTrees.h"
#include "TreeUtils.h"
#include <iostream>

bool isEqual(TreeNode* currentNode1, TreeNode* currentNode2) {
	if (currentNode1 == NULL && currentNode2 == NULL)
		return 1;
	else if (currentNode1 == NULL || currentNode2 == NULL)
		return 0;
	else {
		return (currentNode1-> data == currentNode2 -> data &&
				isEqual(currentNode1->leftPtr, currentNode2->leftPtr) &&
				isEqual(currentNode1->rightPtr, currentNode2->rightPtr));
	}
}

int CompareTrees() {
	TreeNode* rootNode1 = createDummyTree();
	TreeNode* rootNode2 = createSecondDummyTree();

	bool equal = isEqual(rootNode1, rootNode2);
	if (equal)
		std::cout << "Equal trees." << std::endl;
	else
		std::cout << "Different trees." << std::endl;

	return 0;
}
