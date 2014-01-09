#include "2-CountNodes.h"
#include <iostream>
#include "TreeUtils.h"

int CountNodes() {
	TreeNode* rootNode = createDummyTree();
	int numNodes = countNodes(rootNode);
	std::cout << "Node count: " << numNodes << std::endl;

	return 0;
}
