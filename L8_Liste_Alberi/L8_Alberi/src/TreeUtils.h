/*
 * TreeUtils.h
 *
 *  Created on: 07/ott/2013
 *      Author: Eleonora
 */

#include <iostream>

#ifndef TREEUTILS_H_
#define TREEUTILS_H_

struct TreeNode {
	int data;
	struct TreeNode* leftPtr;
	struct TreeNode* rightPtr;
};

void printPaths(TreeNode* rootNode);
TreeNode* createDummyTree();
TreeNode* createSecondDummyTree();
int countNodes(TreeNode* currentNode);

#endif /* TREEUTILS_H_ */
