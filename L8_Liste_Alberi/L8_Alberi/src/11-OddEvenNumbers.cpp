#include "11-OddEvenNumbers.h"
#include "TreeUtils.h"
#include <iostream>

bool checkOddEvenNumbers(TreeNode* currentNode, int depth) {
	if (currentNode == NULL)
		return 1;
	if ((currentNode->data % 2) != (depth % 2))
		return 0;

	return checkOddEvenNumbers(currentNode->leftPtr,depth+1)
			&& checkOddEvenNumbers(currentNode->rightPtr,depth+1);
}

int OddEvenNumbers() {
	TreeNode* rootNode = createDummyTree();
	bool oddEvenChecked = checkOddEvenNumbers(rootNode, 1);
	if (oddEvenChecked)
		std::cout << "Even numbers are in even levels; odd numbers are in odd levels." << std::endl;
	else
		std::cout << "It happened somewhere that either an even number is in an odd level or viceversa." << std::endl;

	return 0;
}
