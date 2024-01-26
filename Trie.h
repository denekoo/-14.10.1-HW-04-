﻿#ifndef TRIE_H
#define TRIE_H

#include <string>
using namespace std;

const int ALPHABET_SIZE = 26;

// Структура узела дерева 
struct TrieNode
{
    struct TrieNode* children[ALPHABET_SIZE];
    // isEndOfWord - true, если ключ является концом слова
    bool isEndOfWord;
   /* unsigned char letter;*/
//};

};
TrieNode* getNewNode(void);
void insert(TrieNode*, string);
bool search(TrieNode*, string);
bool isEmpty(TrieNode*);
TrieNode* remove(TrieNode*, string, int depth = 0);
//void findMinPrefixes(TrieNode*, char[], int, string&);
void woodenAutoComplete (TrieNode* root, std::string prefix, std::string endWord);

#endif