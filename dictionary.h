//Bryant Wong
//CSCI 2421 Homework 6

/* Dr. Augustine
 dictionary.h
 Last Updated:02/14/2016
 Status: Compiles and all requirements met*/

#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <string>				//for data and entry
#include <list>					//to use double linked list functionality in c++
#include <iostream>				//cout/cin etc.
#include <fstream>				//to read and save data to file
#include "DictEntry.h"			//for overloaded operator to compare lists

using namespace std;

class dictionary
{

public:
    //typedef string wordType;
    dictionary();			//default constructor declaration
	~dictionary();			//default destructor declaration
	
	
    
    /*Searches the list starting at the front of the list and moving to the back
     Returns the number of searches it took to find the findString, or a -1 if not found*/
    int searchForward(wordType &findString, list<DictEntry>& wordList);
    
    /*Searches the list starting at the back of the list and moving to the front
     Returns the number of searches it took to find the findString, or a -1 if not found*/
    int searchBackward(wordType &findString, list<DictEntry>& wordList);
    
    /*Prints the list of words in reverse alphabetic order to a file*/
    void revPrintList(ostream& output, list<DictEntry>& wordList);
	

	
    
};

/*******************************/



#endif /* dictionary_h */
