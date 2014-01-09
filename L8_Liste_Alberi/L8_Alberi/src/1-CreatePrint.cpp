#include "1-CreatePrint.h"
#include <iostream>
#include "TreeUtils.h"

int CreatePrint() {
	TreeNode* rootNode = createDummyTree();
	printPaths(rootNode);

	return 0;
}
