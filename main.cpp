//Bryant Wong
//CSCI 2421 Homework 6

#include "dictionary.h"
#include "DictEntry.h"

int main()
{
	list <DictEntry> wordList;
	dictionary dict;			//creates an instance of class dictionary
	std::ifstream infile("dictionary.txt");		//open file dictionary.txt and associate it to the instream infile
	wordType entry;
	while (std::getline(infile >> std::ws, entry))		//while data is read from the stream until end of file
	{
		DictEntry temp;			//create temp obj DictEntry
		temp.setWord(entry);		//set the word in this obj to the word from input file
		wordList.push_back(temp);			//enter the data into the list at the back
	}
	std::cout << "Importing dictionary.txt" << std::endl;	//calls member function to inpur data from the txt document to the list
	infile.close();		

	wordList.sort();		//sorts the list into alphabetical or increasing value
	std::cout << "Dictionary sorted into:" << std::endl;
	std::list<DictEntry>::iterator iter;
	for (iter = wordList.begin(); iter != wordList.end(); iter++)		//prints the list 
	{
		std::cout << iter->getWord() << " ";
	}
	std::cout << std::endl;

	std::ifstream inputfile("findwords.txt");		//opens findwords.txt and associates it with instream inputfile
	std::list<wordType> findList;		//create a new list findList to hold words we will be searching for
	wordType findEntry;
	while (std::getline(inputfile >> std::ws, findEntry))
	{
		findList.push_back(findEntry);		//read entries from findwords.txt to findList
	}
	inputfile.close();

	std::list<wordType>::iterator iter2;				//create a forward iterator
	for (iter2 = findList.begin(); iter2 != findList.end(); iter2++)		//steps through findList 
	{
		if (dict.searchForward(*iter2, wordList) == -1)		//if the value at iter2 is not in the dictionary
		{
			std::cout << *iter2 << " was not found in the dictionary from the front." << std::endl;
		}
		else if (dict.searchBackward(*iter2, wordList) == -1)		//if the value at iter2 is not in the dictionary
		{
			std::cout << *iter2 << " was not found in the dictionary from the back." << std::endl;
		}
		{
			//it takes however many comparisons to find the word in the list from forward and backwards searching
			std::cout << "It took " << dict.searchForward(*iter2, wordList) << " comparisons to find " << *iter2 << " by searching from the front " << std::endl;
			std::cout << "It took " << dict.searchBackward(*iter2, wordList) << " comparisons to find " << *iter2 << " by searching from the back " << std::endl;
		}
	}
	
	std::ofstream outfile("revsorted.txt");		//opens revsorted.txt to save the reverse data
	dict.revPrintList(outfile, wordList);				//reverses the order of the list and prints the data to revsorted.txt
	std::cin.get();
}