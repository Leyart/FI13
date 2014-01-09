#include "3-ComputeDepth.h"
#include "TreeUtils.h"
#include <iostream>

int computeTreeHeight(TreeNode* currentNode) {
	if (currentNode == NULL)
		return 0;
	else
		return 1 + std::max(computeTreeHeight(currentNode->leftPtr),
							computeTreeHeight(currentNode->rightPtr));
}

int ComputeDepth() {
	TreeNode* rootNode = createDummyTree();
	int maxDepth = computeTreeHeight(rootNode);
	std::cout << "Max depth: " << maxDepth << std::endl;

	return 0;
}
