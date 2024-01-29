#include"Dictionary.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <vector>
#include <Windows.h>


Dictionary::Dictionary() {} 
Dictionary::Dictionary(std::string& word) : m_word{ word } {} 
Dictionary::~Dictionary() {}

std::ostream& operator<< (std::ostream& out, const Dictionary& d)
{
    out << d.m_word;
    return out;
}
std::istream& operator>> (std::istream& in, Dictionary& d) 
{
    in >> d.m_word;
    return in;
}

void Dictionary::setWord() 
{
    std::getline(std::cin >> std::ws, m_word);
}
void Dictionary::getWord() //функция получения слов
{
    std::cout << m_word;
}

//int size{ 1 };
//std::vector<Dictionary> array(size);  //объявляем массив для размещения вводимых слов
//std::vector<std::string> words;
//Dictionary d;            //объявляем экземпляр класса

void Dictionary::addWord(std::string &str)
{



}


void Dictionary::FillArray() //функция ввода слов с клавиатуры
{
    //std::cout << "Введите количество вводимых слов: ";
    //std::cin >> size;
    //for (int j = 0; j < size; ++j)
    //{
    //    d.setWords();
    //    array.push_back(d);
    //}
    //std::cout << "Введенные слова: ";
    //for (int i = 0; i < (std::end(array) - std::begin(array)); ++i) //выводим созданный массив на консоль
    //{
    //    std::cout << array[i] << '\n';
    //}
    //std::ofstream out("Words.txt", std::ios::app); //сохраняем массив в текстовый файл
    //for (int i = 0; i < (std::end(array) - std::begin(array)); ++i)
    //{
    //    out << array[i] << std::endl;
    //}
    //std::cout << '\n';
}