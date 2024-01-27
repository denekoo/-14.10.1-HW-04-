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
	
	std::string str1 = "ad";
	insert(root, str1);
	std::string str2 = "ac";
	insert(root, str2);
	


	std::string str3 = "ae";
	insert(root, str3);

	//тест для поиска слов
	std::string input = "a";
	woodenAutoComplete(root, input, "");





	return 0;
}
