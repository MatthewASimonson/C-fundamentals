/*
 * Stacks.cpp
 *
 *  Created on: May 7, 2010
 *      Author: Matthew Simonson
 */


#include <iostream>
#include <stack> // be sure to include stack template
using namespace std;

// Stacks are a type of container specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from the end of the container.

int main()
{
// declaring an integer stack (stacks of any class can be declared)

	stack <int> astack; // this declares an empty stack

// Stack functions:

  ////////////////////////////////////////////////////////////////////////////////////
  // y.push(x) ; adds a new element x to the top of stack y                         //
  ////////////////////////////////////////////////////////////////////////////////////

 astack.push(5);
 astack.push(4);
 astack.push(3);
 astack.push(2);
 astack.push(1);

 ///////////////////////////////////////////////////////////////////////////////////
 // y.top() ; return top element from stack y                                     //
 ///////////////////////////////////////////////////////////////////////////////////

 cout<<"The current top value of stack 'astack' is: "<<astack.top()<<endl;

  ///////////////////////////////////////////////////////////////////////////////////
  // y.pop() ; remove top element from stack y                                     //
  ///////////////////////////////////////////////////////////////////////////////////

 cout<<"The values in stack 'astack' being removed from the top are: ";
 size_t presize = astack.size();// assign size of stack before any values are poped to variable 'presize'
 for (size_t i=0; i<presize;i++)
 {
	 cout<<astack.top()<<" "; // show current top element in stack
	 astack.pop();// remove top element from stack with each iteration
 }
 cout<<""<<endl;



//////////////////////////////////////////////////////////////////////////////
// y.size() ; returns the number of elements that can be stored in stack y //
//////////////////////////////////////////////////////////////////////////////

cout<<"The size of stack 'astack' is: "<< astack.size()<<endl;


//////////////////////////////////////////////////////////////////////////////
// y.empty() ; returns true or false (1 or 0) if stack y is empty or not   //
//////////////////////////////////////////////////////////////////////////////

cout<<"Is stack 'astack' empty?; 1=TRUE, 0=FALSE: "<< astack.empty()<<endl;

//////
return 0;
}

