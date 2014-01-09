#include "12-EqualLeafSummation.h"
#include "TreeUtils.h"
#include <iostream>

int computeLeafSummation(TreeNode* currentNode) {
	if (currentNode == NULL)
		return 0;
	else if (currentNode->leftPtr == NULL && currentNode->rightPtr == NULL)
		return currentNode->data;
	return computeLeafSummation(currentNode->leftPtr) + computeLeafSummation(currentNode->rightPtr);
}

bool isLeafEqualToNumber(TreeNode* currentNode, int number) {
	if (currentNode == NULL)
		return false;
	else if (currentNode->leftPtr == NULL && currentNode->rightPtr == NULL && currentNode->data == number)
		return true;
	return isLeafEqualToNumber(currentNode->leftPtr,number) || isLeafEqualToNumber(currentNode->rightPtr,number);
}

bool isEqualLeafSummation(TreeNode* rootNode1, TreeNode* rootNode2) {
	int sumFirstTree = computeLeafSummation(rootNode1);
	int sumSecondTree = computeLeafSummation(rootNode2);

	return (sumFirstTree == sumSecondTree) || isLeafEqualToNumber(rootNode1, sumSecondTree);
}

int EqualLeafSummation() {
	TreeNode* rootNode1 = createDummyTree();

	TreeNode* rootNode2 = createDummyTree();
	bool equalLeafSummation = isEqualLeafSummation(rootNode1, rootNode2);
	if (equalLeafSummation)
		std::cout << "Equal leaf summation." << std::endl;
	else
		std::cout << "Not equal leaf summation." << std::endl;

	TreeNode* rootNode3 = createSecondDummyTree();
	equalLeafSummation = isEqualLeafSummation(rootNode1, rootNode3);
	if (equalLeafSummation)
		std::cout << "Equal leaf summation." << std::endl;
	else
		std::cout << "Not equal leaf summation." << std::endl;

	return 0;
}
