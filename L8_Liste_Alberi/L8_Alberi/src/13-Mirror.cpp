#include "13-Mirror.h"
#include <iostream>
#include "TreeUtils.h"

TreeNode* mirrorTree(TreeNode* currentNode) {
	if (currentNode == NULL)
		return NULL;
	else {
		TreeNode* newMirroredNode = new TreeNode;
		newMirroredNode->data = currentNode->data;
		newMirroredNode->leftPtr = mirrorTree(currentNode->rightPtr);
		newMirroredNode->rightPtr = mirrorTree(currentNode->leftPtr);

		return newMirroredNode;
	}
}

int Mirror() {
	TreeNode* rootNode = createDummyTree();
	TreeNode* mirroredTree = mirrorTree(rootNode);

	std::cout << "Original tree paths: " << std::endl;
	printPaths(rootNode);
	std::cout << std::endl;

	std::cout << "Mirrored tree paths: " << std::endl;
	printPaths(mirroredTree);

	return 0;
}
