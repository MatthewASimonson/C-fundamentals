/*
 * loops.cpp
 *
 *  Created on: May 20, 2010
 *      Author: Matthew Simonson
 */

/*
 * Loops are a way to change the value of a variable, allowing you to traverse and manipulate different data structures.
 *
 * There are 2 kinds of loops: 'for loops' and 'while loops'; both can be useful given certain situations, though they are essentially equivalent in extensibility
 */

/* For Loops:
 *
 * format:
 * for(start-value; kill-experssion; incrementer){ statements }
 *
 * start-value: this is the value that your loop will start at, often this is declared as 'int i=0'
 * kill-expression: with each iteration of the loop, the loop checks this expression, when the expression is true, the loop stops
 * incrementer: this tells the loop how to change the start value, commonly 'i++' is used, which means with each iteration of the loop the value of i increases by 1
 *
 */

/* While Loops:
 *
 * format:
 * while(test-expression){ statements }
 *
 * test-expression: while this expression is true, the statements are executed, each time the loop iterates it checks to make sure the statement is still true before evaluating
 * the statements
 */

#include <iostream>
using namespace std;

int main()
{
//For loop example:

	for(int i=0;i<11;i++) // notice the last value output by the loop occurs when i<11, thus 10
	{
		cout<<"The value of i is: "<< i<<endl;
	}

	cout<<""<<endl;

//While loop example 1:
	int i=0; // declare variable int i and assign value of zero; while i was declared in the previous loop, it only exists within the scope of that loop because it was declared within the loop
	while(i<11)
	{
		i++;// increase value of i;
		cout<<"The value of i is: "<< i<<endl;
	}

	cout<<""<<endl;

//While loop example 2:
	 i=0; // i has already been declared in the scope of the 'main()' function, thus we just have to change its value back to zero
	while(i<11)
	{
		cout<<"The value of i is: "<< i<<endl;
		i++;// increase value of i;
	}

	cout<<""<<endl;
	cout<<"Notice the difference in the two while loops?, do you know why they execute differently?"<<endl;
	return 0;
}
