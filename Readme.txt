*******************************************************
*  Name      :      Bryant Wong    
*  Student ID:      107571009           
*  Class     :  CSC 2421           
*  HW#       :  6        
*  Due Date  :  March 8, 2017
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

This program creates a doubly linked list named "Dictionary" reads words into it from a file.  It then sorts
the dictionary into alphabetical order and reads words to find in the dictionary from another file.
Then, it searches for each word, returning how many searches it took from the front of the list and
from the back of the list for each word.  Then, it reverses the order of the words in the dictionary and 
writes that list to an output file.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This calls all the functions to carry out the steps in the description


Name:  dictionary.cpp
   Contains member functions to search for a word from the start of a list, back of a list, reverse the
order of the list and print the words to an ouput file, input words, print the list and sort the list.

Name: dictionary.h
   Contains the class definition of dictionary class.

Name: DictEntry.h
   Contains the class DictEntry, sets wordtype to std::string and has an overloaded operator < for
sorting the dictionary.

   
*******************************************************
*  Circumstances of programs
*******************************************************
The program is complete and compiles and runs on visual studio community and csegrid.



Developed on Visual Studio Community 2015 14.0.25431.01 Update 3.



*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [WongHW5]

   Now you should see a directory named homework with the files:
        main.cpp
	dictionary.cpp
	dictionary.h
	DictEntry.h
	revsorted.txt
	dictionary.txt
	findwords.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [WongHW6] 

    Compile the program by:
    % make

3. Run the program by:
   % ./hw6

4. Delete the obj files, executables, and core dump by
   %./make clean
