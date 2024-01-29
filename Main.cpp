#include<iostream>
#include"Trie.h"
// За основу дерева взят код из модуля.
// функция woodenAutoComplete будет заниматься выводом возможных вариантов слов 

int main()
{


	TrieNode *root = getNewNode() ;
	// тестовые строки и добавление в дерево
	std:: string str = "ab";
	insert(root,str);
	
	std::string str1 = "bd";
	insert(root, str1);
	std::string str2 = "ac";
	insert(root, str2);
	


	std::string str3 = "abcd";
	insert(root, str3);

	//тест для поиска слов
	std::string input = "bd";
	woodenAutoComplete(root, input, "");

	//T9(root, "");



	return 0;
}
