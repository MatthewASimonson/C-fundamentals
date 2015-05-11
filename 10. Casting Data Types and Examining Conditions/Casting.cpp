/*
 * Casting.cpp
 *
 *  Created on: May 13, 2010
 *      Author: Matthew A. Simonson
 */

/* CASTING DATA TYPES:
 * Any variable of a certain data type can be transformed into a different data type using 'casting'
 * Example shown below:
 *
 * EXAMINING CONDITIONS:
 * The ternary operator examines the conditions of a statement and automatically returns one of two specified values
 * form:
 *  (test-expression) ? if-true-then-this : if-false-then-this
 *  (a=b)?7:3
 */

# include <iostream>
using namespace std;

int main()
{
int x=7;
int y=2;
// Casting Example:
cout<<"Casting Example:"<<endl;
cout<<""<<endl;
cout<<"x=7 and y=2; x/y should have a decimal, as 'int's' the computed answer of x/y is wrong, returning the following 'int' value: "<< x/y<<endl;
cout<<""<<endl;
float result=(float)x/y;
cout<<"By casting x as a 'float' type variable, the answer will be correct: "<<result<<endl;
cout<<""<<endl;

// Ternary Example:
cout<<"Ternary Example:"<<endl;
cout<<""<<endl;
int c; // declare int c
c=(x>y)?x:y; // This statement says if x is greater than y assign x to c, else assign y to c

cout<<"c=(x>y)?x:y    ; c= "<<c<<endl;
	return 0;
}
