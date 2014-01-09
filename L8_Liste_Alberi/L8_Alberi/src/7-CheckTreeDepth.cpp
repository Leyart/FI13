#include "7-CheckTreeDepth.h"
#include "TreeUtils.h"
#include <iostream>

int checkDepth(TreeNode* currentNode) {
	if (currentNode == 0)
		return 0;

	int leftDepth = checkDepth(currentNode->leftPtr);
	int rightDepth = checkDepth(currentNode->rightPtr);

	if (leftDepth == -1 || rightDepth == -1)
		return -1;
	else if (leftDepth == rightDepth)
		return leftDepth + 1;
	else if (leftDepth == 0)
		return rightDepth + 1;
	else if (rightDepth == 0)
		return leftDepth + 1;

	return -1; // leftDepth != rightDepth
}

bool isSameDepth(TreeNode* currentNode) {
	if (checkDepth(currentNode) == -1)
		return false;
	else
		return true;
}

int CheckTreeDepth() {
	std::cout << "SAME LENGTH TREE" << std::endl;
	TreeNode* rootNode = createSecondDummyTree();
	if (isSameDepth(rootNode))
		std::cout << "All paths have the same length." << std::endl;
	else
		std::cout << "Not all the paths have the same length" << std::endl;

	std::cout << "NOT SAME LENGTH TREE" << std::endl;
	TreeNode* rootNode2 = createDummyTree();
	if (isSameDepth(rootNode2))
		std::cout << "All paths have the same length." << std::endl;
	else
		std::cout << "Not all the paths have the same length" << std::endl;

	return 0;
}
