/*
 * converting.cpp
 *
 *  Created on: May 27, 2010
 *      Author: genelab
 */

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

//////////// Converting String Data To Other Data Types and vice versa:
/* The <sstream> library has been included in this file, this library contains the functions that allow string data to be converted to other types.
 * Converting string data is very useful because often input data is in string form or extracted from a string.
 */

int main()
{
string term="100";
int number=100;

int num;// this will store the converted string
string text;// this will store the converted int
stringstream converter; // a 'stringstream' class object is a conversion object which is fed one type of data and outputs another; either the input or the output has to be a string

converter<< term; // send the string 'term' to the stringstream 'converter'
converter>>num; // now output from stream the transformed object, now in integer form
converter.clear();// NOTE: THIS STEP IS CRITICAL; AFTER USING A STRING STREAM OBJECT YOU MUST USE THE .clear() FUNCTION IN ORDER TO RE-USE IT LATER

//Now you can do arithmetic on the converted string, because it is an 'int', while before you would have encountered an error

cout<<(num+4)<<endl;

////////// Now lets convert the other way; 'int' to 'string'
converter<<num;
converter>>text;
converter.clear();

cout<<text<<endl;// the string 100; Arithmetic won't work on this because it is a string
cout<<text.insert(2,"zx")<<endl;// but now string operations will work

	return 0;
}



