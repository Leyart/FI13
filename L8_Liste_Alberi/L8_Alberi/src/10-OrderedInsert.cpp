#include "10-OrderedInsert.h"
#include "ListUtils.h"
#include "TreeUtils.h"
#include <vector>
#include <iostream>

struct TreeStringNode {
	std::string data;
	struct TreeStringNode* leftPtr;
	struct TreeStringNode* rightPtr;
};

// ****************** List creation ****************** //
std::vector<std::string> createDummyDictionary() {
	std::vector<std::string> dictionary;
	dictionary.push_back("dog");
	dictionary.push_back("cat");
	dictionary.push_back("parrot");
	dictionary.push_back("shark");
	dictionary.push_back("horse");
	dictionary.push_back("mosquito");
	dictionary.push_back("bee");
	dictionary.push_back("alpaca");
	dictionary.push_back("crow");

	return dictionary;
}

// ****************** Tree printing ****************** //
void printPath(std::vector<std::string> path) {
	for (size_t i = 0; i < path.size(); i++)
		std::cout << path.at(i) << " - ";
	std::cout << std::endl;
}

void printPaths(TreeStringNode* rootNode, std::vector<std::string> path) {
	if (rootNode != NULL)
		path.push_back(rootNode->data);

	if (rootNode == NULL || (rootNode->leftPtr == NULL && rootNode->rightPtr == NULL))
		printPath(path);
	else {
		printPaths(rootNode->leftPtr, path);
		printPaths(rootNode->rightPtr, path);
	}
}

void printPaths(TreeStringNode* rootNode) {
	std::vector<std::string> path;

	printPaths(rootNode, path);
}

// ****************** Tree creation ****************** //
TreeStringNode* createNewNode(std::string word) {
	TreeStringNode* newNode = new TreeStringNode;
	newNode->data = word;
	newNode->leftPtr = NULL;
	newNode->rightPtr = NULL;

	return newNode;
}

TreeStringNode* saveWordInTree(TreeStringNode* rootNode, std::string word) {
	if (rootNode == NULL)
		rootNode = createNewNode(word);
	else if (rootNode->data >= word)
		rootNode->leftPtr = saveWordInTree(rootNode->leftPtr,word);
	else
		rootNode->rightPtr = saveWordInTree(rootNode->rightPtr, word);

	return rootNode;
}

TreeStringNode* saveDictionaryInTree(std::vector<std::string> dictionary) {
	TreeStringNode* rootNode = NULL;

	for (size_t i = 0; i < dictionary.size(); i++)
		rootNode = saveWordInTree(rootNode, dictionary.at(i));

	return rootNode;
}

int OrderedInsert() {
	std::vector<std::string> dictionary = createDummyDictionary();
	TreeStringNode* rootNode = saveDictionaryInTree(dictionary);

	printPaths(rootNode);

	return 0;
}
