#include<iostream>
#include"Trie.h"



int main()
{
	TrieNode *root = getNewNode() ;
	std:: string str = "abc";
	insert(root,str);
	std::string input = "ab";
	woodenAutoComplete(root, input, "");




	return 0;
}
