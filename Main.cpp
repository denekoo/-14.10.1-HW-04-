#include<iostream>
#include"Trie.h"

// За основу дерева взят код из модуля.
// функция woodenAutoComplete будет заниматься выводом возможных вариантов слов 

void test_woodenAutoComplete()
{
	TrieNode* root = getNewNode();
	// тестовые строки и добавление в дерево
	insert(root, "ab");
	insert(root, "abde");
	insert(root, "ac");
	insert(root, "abcd");

	insert(root, "bcd");
	insert(root, "bd");
	insert(root, "b");

	//тест для поиска слов
	std::string input = "a";
	//std::string input = "ab";
	//std::string input = "abd";
	//std::string input = "ac";
	//std::string input = "abdecd";

	//std::string input = "b";

	woodenAutoComplete(root, input, "");
}


int main()
{
	//test_woodenAutoComplete();

		std::cout << " Hi! This is a simple program to complete words from the letters you enter." << std::endl;
		std::cout << " Use only a-z keys." << std::endl;
		std::cout << " Press q for exit." << std::endl;

	TrieNode* root = getNewNode();

	insert(root, "ab");
	insert(root, "abde");
	insert(root, "ac");
	insert(root, "abcd");

	insert(root, "bcd");
	insert(root, "bd");
	insert(root, "b");

	bool work = true;
	while (work)
	{
		std::cout << "Enter text: " << std::endl;

		std::string strIn;
		std::cin >> strIn;
		if (strIn == "q")
		{
			work = false;
			continue;
		}
		std::cout << " Word options:" << std::endl;
		woodenAutoComplete(root, strIn, "");
	}

	delete root;
	return 0;
}
