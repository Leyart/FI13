#include "8-ComputeQuantities.h"
#include "TreeUtils.h"
#include <iostream>

int computeNodeSum(TreeNode* currentNode) {
	if (currentNode == NULL)
		return 0;
	if (currentNode->leftPtr == NULL && currentNode->rightPtr == NULL)
		return currentNode->data;
	else
		return computeNodeSum(currentNode->leftPtr) +
			   computeNodeSum(currentNode->rightPtr);
}

int computeMaxPath(TreeNode* currentNode){
	if (currentNode == NULL)
		return 0;
	if (currentNode->leftPtr == NULL && currentNode->rightPtr == NULL)
		return currentNode->data;
	else
		return std::max(currentNode-> data + computeMaxPath(currentNode->leftPtr),
						currentNode->data + computeMaxPath(currentNode->rightPtr));
}

int ComputeQuantities() {
	TreeNode* rootNode = createDummyTree();

	std::cout << "Node sum: " << computeNodeSum(rootNode) << std::endl;
	std::cout << "Max path sum: " << computeMaxPath(rootNode) << std::endl;

	return 0;
}
