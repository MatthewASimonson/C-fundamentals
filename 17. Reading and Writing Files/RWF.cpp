/*
 * RWF.cpp
 *
 *  Created on: May 28, 2010
 *      Author: Matthew Simonson
 */

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

/* Reading and Writing to files:
 *
 * Reading, writing and modifying files is an important aspect of any programming language.
 * This demonstrates how to perfrom the operations. the 'fstream' library must be included when writing to a file
 * NOTE: THE NAMES OF ALL VARIABLES, INCLUDING ANY OFSTREAM OBJECTS ARE JUST ARBITRARY AND COULD BE CALLED ANYTHING, HOWEVER MEANINGFUL NAMES WERE SELECTED IN THE EXAMPLES
 */

//////////////WRITING TO A FILE:

int main()
{
	string poem = "\n\tI never saw a man who looked" ; // create a string object to be written to a file
	poem.append( "\n\tWith such a wistful eye" ) ;// using the append function add new lines to the string;
	poem.append( "\n\tUpon that little tent of blue" ) ; // '\n' tells the string to format a new line, '\t' means add a tab
	poem.append( "\n\tWhich prisoners call the sky" ) ;

	ofstream writer( "poem.txt" ) ; // an 'ofstream' type object (output file stream) must be created to write to a file, in this case the object is names 'writer()'; the file name is specified in quotes when the ofstream object is first created

	if( ! writer ) // You should always have this if statement before trying to write to a file; it checks to see if the writer object was able to create the file data will be written to
	{
		cout << "Error opening file for output" << endl ;// if a problem occurred creating the file, an error will be returned and the program will quit
		return -1 ;
	}

	writer << poem << endl ; // this pipes the string object 'poem' to the 'ofstream' object 'writer', which will cause the string to be written to the file

	writer.close() ; // this closes the writer object and stops it from trying to write to the file that was created.
	// ofstream objects MUST BE CLOSED AFTER EACH USE TO ALLOW RE-USE

//////////////APPENDING TO A FILE:

	string info = "\n\tThe Ballad of Reading Gaol" ; // generate string object 'append' which will be written out and added to the end of poem.txt
	info.append( "\n\t\t\tOscar Wilde 1898" ) ;

	ofstream appender( "poem.txt" , ios::app ) ; // an 'ofstream' object with the name 'appender' has been created, the second parameter 'ios::app' tells the 'ofstream' object to append to the file stated in the first parameter

	if( ! appender )// usual check statement to make sure the file can be opened by 'appender'
	{
		cout << "Error opening file for output" << endl ;
		return -1 ;
	}

	appender << info << endl ; // pipe string object 'info' to object appender, so it's added to the  end of poem.txt

	appender.close() ; // this closes the appender object and stops it from trying to write to the file that was modified.
	// ofstream objects MUST BE CLOSED AFTER EACH USE TO ALLOW RE-USE

//////////////READING FROM A FILE:

	string line; // generate string variable to be filled with lines of text from a file

	ifstream reader( "poem.txt" ); // generate an 'ifstream' object (input file stream), with the name of the file to be read inside

	if( ! reader )// usual check statement to make sure the file can be opened by 'reader', just like when writing to a file
	{
		cout << "Error opening input file" << endl ;
		return -1 ;
	}
	else
	for( int i=0; ! reader.eof() ; i++ ) // This loop is ran if no errors occur and the file is opened.
	{
		getline( reader , line ) ;; // One line is read in at a time with the getline() function, inside the parenthesis, the name of the reader object and the location of where the read material goes are stated
		cout << line ; // the string object 'line' is storing the data being read in and this is then printed
	}
	reader.close() ; // ifstream objects MUST BE CLOSED AFTER EACH USE TO ALLOW RE-USE


	return 0 ;
}
