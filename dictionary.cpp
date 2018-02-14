//Bryant Wong
//CSCI 2421 Homework 6

#include "dictionary.h"
#include "DictEntry.h"

dictionary::dictionary()
{
	//default constructor
}
dictionary::~dictionary()
{
	//default destructors
}

int dictionary::searchForward(wordType &findString, list<DictEntry>& wordList)
{
	int count = 1;
	std::list<DictEntry>::iterator iter;							//create an iterator, a pointer that points at node of the list
	for (iter = wordList.begin(); iter != wordList.end(); iter++)	//step through the list from the forwards direction
	{
		if (iter->getWord() == findString)									//if the value stored at the address iter is the word to be found
		{
			return count;											//returns the position in the list that the word was found
		}
		count++;
	}

	return -1;														//else return -1
}

int dictionary::searchBackward(wordType &findString, list<DictEntry>& wordList)
{
	int count = 1;
	std::list<DictEntry>::reverse_iterator rIter;		//create a reverse iterator to step through the list from the back end
	for (rIter = wordList.rbegin(); rIter != wordList.rend(); rIter++)		//step through the list starting from the back end
	{
		if (rIter->getWord() == findString)					//if the value stored at the address rIter is the word to be found
		{
			return count;							//return the position in the list when counting from the end
		}
		count++;
	}
	return -1;										//else if not found, return -1
}

void dictionary::revPrintList(ostream& output, list<DictEntry>& wordList)
{
	wordList.reverse();								//reverse the order of the list
	std::list<DictEntry>::iterator iter;				//create a forward iterator for the list
	for (iter = wordList.begin(); iter != wordList.end(); iter++)			//step through the list from the front
	{
		output << iter->getWord() << " ";							//output each value in the list to revsorted.txt
	}
	std::cout << "Writing reverse list into revsorted.txt" << std::endl;
}

