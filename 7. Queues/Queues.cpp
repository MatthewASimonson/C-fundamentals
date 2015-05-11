/*
 * Stacks.cpp
 *
 *  Created on: May 7, 2010
 *      Author: Matthew Simonson
 */


#include <iostream>
#include <queue> // be sure to include queue template
using namespace std;

// queues are a type of container specifically designed to operate in a FIFO context (first-in first-out), where elements are inserted at one end of the container and extracted from the other end of the container.

int main()
{
// declaring an integer queue (queues of any class can be declared)

	queue <int> aqueue; // this declares an empty queue

// queue functions:

  ////////////////////////////////////////////////////////////////////////////////////
  // y.push(x) ; adds a new element x to the back of queue y                         //
  ////////////////////////////////////////////////////////////////////////////////////

 aqueue.push(5);
 aqueue.push(4);
 aqueue.push(3);
 aqueue.push(2);
 aqueue.push(1);

 ///////////////////////////////////////////////////////////////////////////////////
 // y.front() ; return first element inserted from queue y                                     //
 ///////////////////////////////////////////////////////////////////////////////////

 cout<<"The current front value of queue 'aqueue' is: "<<aqueue.front()<<endl;

 ///////////////////////////////////////////////////////////////////////////////////
 // y.back() ; return last element inserted from queue y                                     //
 ///////////////////////////////////////////////////////////////////////////////////

 cout<<"The current back value of queue 'aqueue' is: "<<aqueue.back()<<endl;

  ///////////////////////////////////////////////////////////////////////////////////
  // y.pop() ; remove bottom element from queue y  (the element first inserted)    //
  ///////////////////////////////////////////////////////////////////////////////////

 cout<<"The values in queue 'aqueue' being removed from front to back are: ";
 size_t presize = aqueue.size();// assign size of queue before any values are poped to variable 'presize'
 for (size_t i=0; i<presize;i++)
 {
	 cout<<aqueue.front()<<" "; // show next item that can be poped from queue
	 aqueue.pop();// remove top element from queue with each iteration
 }
 cout<<""<<endl;



//////////////////////////////////////////////////////////////////////////////
// y.size() ; returns the number of elements that can be stored in queue y //
//////////////////////////////////////////////////////////////////////////////

cout<<"The size of queue 'aqueue' is: "<< aqueue.size()<<endl;


//////////////////////////////////////////////////////////////////////////////
// y.empty() ; returns true or false (1 or 0) if queue y is empty or not   //
//////////////////////////////////////////////////////////////////////////////

cout<<"Is queue 'aqueue' empty?; 1=TRUE, 0=FALSE: "<< aqueue.empty()<<endl;

//////
return 0;
}

