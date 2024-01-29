#pragma once
#include <iostream>
#include <string>

class Dictionary
{
	std::string m_word;
public:
	Dictionary();
	Dictionary(std::string& word);
	~Dictionary();

	friend std::ostream& operator<< (std::ostream& out, const Dictionary& d);
	friend std::istream& operator>> (std::istream& in, Dictionary& d);

	void setWord();
	void getWord();
	void FillArray();
	void addWord(std::string &str);


};
