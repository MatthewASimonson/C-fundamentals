/*
 * struct.cpp
 *
 *  Created on: Jun 7, 2010
 *      Author: Matthew Simonson
 */

/////////////////////////////////////////////////////////
// Data Structures in C++                              //
/////////////////////////////////////////////////////////

/* A data structure is a group of data elements grouped together under one name.
 * These data elements, known as members, can have different types and different lengths.
 * Data structures can be treated just like other fundamental objects, arrays can be created from them, as well as vectors and other structures
 */

/////////////////////////////////////////////////////////
// EXAMPLE OF USING A DATA STRUCTURE:                  //
/////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Define the data structure 'movies_t'; this has two member fields, 1. a string field 'title', and 2. an int field 'year'.
struct movies_t {
  string title;
  int year;
}; // DON'T FORGET THE ';' AFTER THE DEFINITION

// Define and Implement a function that acts on the data structure
void printmovie (movies_t movie)
{
  cout << movie.title; // notice this is outputting the title field of the 'movies_t' structure (in this case named 'movie') using the '.' notation to specify the field being accessed
  cout << " (" << movie.year << ")\n"; //notice this is outputting the year field of the 'movies_t' structure using the '.' notation to specify the field being accessed
}

int main ()
{
  movies_t mine; // Declare the structure just like any other type of object, like an int or string
  movies_t yours;
  string mystr;

  mine.title = "2001 A Space Odyssey"; // The '.' notation is used to access a structures subfields; 'mine.title' is accessing the title field of the movies_t structure named 'mine'
  mine.year = 1968;// the same dot notation is used when accessing the year field, this is how values are assigned and accessed from data structures

  cout << "Enter title: ";
  getline (cin,yours.title);
  cout << "Enter year: ";
  getline (cin,mystr);
  stringstream(mystr) >> yours.year;

  cout << "My favorite movie is: "<<endl;
  printmovie (mine);
  cout << "And yours is: "<<endl;
  printmovie (yours);


  /////////////////////////////////////////////////////////
  // USING POINTERS WITH DATA STRUCTURES:                //
  /////////////////////////////////////////////////////////

  /* Using pointers with data structures is very similiar to how they are used with any other kind of object
   * there are some small differences though.
   */

  // NOTE IMPORTANT CONCEPT BELOW IS USE OF '->' NOTATION, BE SURE TO UNDERSTAND IT!!!!!!!!!!!

  //EXAMPLE:

  string mystr2;

   movies_t amovie; // normal object declaration
   movies_t *pmovie= &amovie; // normal pointer declaration; stores address of 'amovie' in object 'pmovie', which can be accessed using the '*' operator in front of the pointer

   cout << "Enter title: ";
   getline (cin, pmovie->title); // THIS USES '->' ARROW NOTATION; which is equivalent to '(*pmovie).title';
   // basically this says the 'title' field connected to the VALUE STORED AT THE ADDRESS of pmovie
   // This is very different from *pmovie.title which will try and return the value of a different (undeclared) pointer
   cout << "Enter year: ";
   getline (cin, mystr2);
   stringstream converter;
   converter<<mystr2;  // use stringstream 'converter'
   converter>>pmovie->year;

   cout << endl;
   cout<<"You have entered:"<<endl;
   cout << pmovie->title;
   cout << " (" << pmovie->year << ")"<<endl;


  return 0;
}



