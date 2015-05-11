/*
 * IS.cpp
 *
 *  Created on: May 20, 2010
 *      Author: Matthew Simonson
 */

// Using if statements

// Example format:
//  if (test-expression){execute-this-if-true}
//
// Alternate Example:
//
// if (test-expression){execute-this-if-true}
// else {execute-this-if-false}
//
# include <iostream>
using namespace std;

int main()
{
int a,b,c,d;
a=1;
b=70;
c=666;
d=70;

if (a==b)// if a is equal to b
{
	a=c; // then change the value of a to the value of c
}

if (b==c)
{
	cout<<"b and c are equal"<<endl;
}
else
{
	cout<<"b and c are not equal"<<endl;
}

cout<<""<<endl;
cout<<" Now try some on your own!!"<<endl;
	return 0;
}
