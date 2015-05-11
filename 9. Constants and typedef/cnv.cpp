/*
 * constants.cpp
 *
 *  Created on: May 12, 2010
 *      Author: Matthew Simonson
 */

// Data that will not be changed while a program is running should be declared as a
// constant. Constant variables are CAPITALIZED for stylistic reasons and for easy recognition

# include <iostream>
using namespace std;

int main()
{
	// Declaring a constant of type 'float':

	const float PI=3.14159; // PI is declared as a constant and cannot be modified by any code in the program

	cout<<"PI is approximately: "<<PI<<endl;

	// Sometimes a value type (like 'int' or 'char') is used in several places in the same program, but the class of that value type may need to be changed depending on what the program
	// will be doing with it. In this situation you can declare the value type at the beginning of the program and use 'typedef' to define a special data type that will change when you change that single initial value
	// Example:

	typedef int value_type; // a custom value type called 'value_type' has been created (you could call it anything, 'apple', 'orange', etc...), this is equivalent to an 'int', this could be changed to float or double or
	// anything that would make sense with the programs' use if needed. This can save a lot of time, so you don't have to go through and find every instance of a certain type of variable and change it where needed.

	for(value_type i=0;i<10; i++)
	{
		cout<<"i is equal to: "<<i<<endl;
	}


	return 0;
}
