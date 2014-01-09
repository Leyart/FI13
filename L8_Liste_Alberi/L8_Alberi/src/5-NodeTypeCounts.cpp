#include "5-NodeTypeCounts.h"
#include "TreeUtils.h"
#include <iostream>

int countLeaves(TreeNode* currentNode) {
	if (currentNode == NULL)
		return 0;
	else if (currentNode->leftPtr == NULL && currentNode->rightPtr == NULL)
		return 1;
	else
		return countLeaves(currentNode->leftPtr) +
			   countLeaves(currentNode->rightPtr);
}

int countNodesAtEvenLevels(TreeNode* currentNode, int depth) {
	if (currentNode == NULL)
		return 0;
	else {
		int numNodesAtEvenLevels = countNodesAtEvenLevels(currentNode->leftPtr, depth+1) +
								   countNodesAtEvenLevels(currentNode->rightPtr, depth+1);
		if (depth % 2 == 0)
			return numNodesAtEvenLevels+1;
		else
			return numNodesAtEvenLevels;
	}
}

int countNodesAtEvenLevels(TreeNode* currentNode) {
	return countNodesAtEvenLevels(currentNode, 1);
}

int NodeTypeCounts() {
	TreeNode* rootNode = createDummyTree();

	int leafNumber = countLeaves(rootNode);
	std::cout << "Number of leaf nodes: " << leafNumber << std::endl;
	int nonLeafNumber = countNodes(rootNode) - countLeaves(rootNode);
	std::cout << "Number of non-leaf nodes: " << nonLeafNumber << std::endl << std::endl;

	int numNodesAtEvenLevels = countNodesAtEvenLevels(rootNode);
	std::cout << "Number of nodes at even levels: " << numNodesAtEvenLevels << std::endl;
	int numNodesAtOddLevels = countNodes(rootNode) - countNodesAtEvenLevels(rootNode);
	std::cout << "Number of nodes at odd levels: " << numNodesAtOddLevels << std::endl;

	return 0;
}
