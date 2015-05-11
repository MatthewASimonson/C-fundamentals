/*
 * reference.cpp
 *
 *  Created on: June 3, 2010
 *      Author: Matthew Simonson
 */

// References are variables that store the values at a memory address from another variable. They can make programming much more efficient.
// They are almost the mirror image of pointers

#include <iostream>
using namespace std ;

// IGNORE THIS FUNCTION FOR NOW, LOOK AT IT WHEN SEEING HOW TO PASS REFERENCES TO FUNCTIONS:

int multiplyby2(int& value)// in the function definition, the input type is specified as an 'int&' (a reference to an int), not just as 'int'
{
	return value*2;
}

int main()
{
///////////////////////////////////////////////////////////////////////
///////// Using References:				                         //////
///////////////////////////////////////////////////////////////////////


	int num; // declare object to store an integer

	int &rNum = num ; // declare a reference object 'rnum' by placing the '&' before it; rnum now hold the same value that is stored in num, if one changes, so does the other

	rNum = 400 ; // by assigning 400 to 'rnum', the object 'num' now holds 400

	cout << "Value direct: " << num << endl ;
	cout << "Value via reference: " << rNum << endl ;

	cout << "Address direct: " << &num << endl ; // just like with pointers, when not declaring a reference the '&' symbol means something different;
	cout << "Address via reference: " << &rNum << endl ; // when not declaring a variable, putting '&' before an object will return the memory address of that object

	rNum *= 2 ; // the value in num and rnum is multiplied by 2

	cout << "Value direct: " << num << endl ; // now output just like before
	cout << "Value via reference: " << rNum << endl ;


///////////////////////////////////////////////////////////////////////
///////// Passing References to Functions:                       //////
///////////////////////////////////////////////////////////////////////

	int newnum;
	newnum=multiplyby2(rNum); // a reference object is used as input and the return value is an integer placed in object 'newnum'
	cout<<"Value stored in object 'newnum' that was returned by the reference function is: "<<newnum<<endl;

	return 0 ;
}
