/*
 * Vectors.cpp
 *
 *  Created on: May 5, 2010
 *      Author: Matthew Simonson
 */

#include <iostream>
#include <vector> // be sure to include vector template
using namespace std;

// Vectors are dynamic arrays (arrays that can change size automatically) with several built in functions to allow for data manipulation

int main()
{
// declaring an integer vector (vectors of any class can be declared, even vectors of vectors, or any other container type)

	vector <int> nums(1); // this declares an empty vector of size one, size must be declared, but can always be modified

	vector <int> nums2(2,5); // this declares a vector of size two, where each element is filled with int value 5 (which can be modified later)

// Vector functions:

  //////////////////////////////////////////////////////////////////////////
  // y.at(x) ALSO y[x]; these return the value in vector y at position x //
  //////////////////////////////////////////////////////////////////////////

// Example:
cout<<"Both are values stored in vector 'nums2' at position 0: "<< nums2.at(0)<<" "<<nums2[0]<<endl;

// modify values:

nums2.at(0)=3;
nums2[1]=4;

cout<<"Values stored in vector 'nums2' at position 0 and 1 have been modified using the equivalent ways to: "<< nums2.at(0)<<" "<<nums2[1]<<endl;

  //////////////////////////////////////////////////////////////////////////
  // y.back() ; returns the value of final element in vector y            //
  //////////////////////////////////////////////////////////////////////////

 vector <int> box(4); // create an empty 4 element vector named 'box'
 box[0]=1;
 box[1]=2;     // Manually filling the vector
 box.at(2)=3;
 box.at(3)=4; // last element

 cout<<"The last element in vector 'box' is: "<< box.back()<<endl;

  //////////////////////////////////////////////////////////////////////////
  // y.front() ; returns the value of first element in vector y           //
  //////////////////////////////////////////////////////////////////////////

 cout<<"The first element in vector 'box' is: "<< box.front()<<endl;

  //////////////////////////////////////////////////////////////////////////////
  // y.size() ; returns the number of elements that can be stored in vector y //
  //////////////////////////////////////////////////////////////////////////////

 cout<<"The size of vector 'box' is: "<< box.size()<<endl;

  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // y.resize(x) ; resize vector y so it only contains its first x elements or expand number of elements (filled with 0's by default)    //
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 box.resize(2); // resized and removes last 3 elements

 cout<<"The last element in vector 'box' is now: "<< box.back()<<endl;

 box.resize(5); // resized and now last 3 elements are empty

 cout<<"The last element in vector 'box' is now: "<< box.back()<<endl;

 //////////////////////////////////////////////////////////////////////////////
 // y.clear() ; deletes all elements of vector y                             //
 //////////////////////////////////////////////////////////////////////////////

 box.clear();

  //////////////////////////////////////////////////////////////////////////////
  // y.empty() ; returns true or false (1 or 0) if vector y is empty or not   //
  //////////////////////////////////////////////////////////////////////////////

 cout<<"Is vector 'box' empty?; 1=TRUE, 0=FALSE: "<< box.empty()<<endl;

 cout<<"The size of vector 'box' is now: "<< box.size()<<endl;

  ////////////////////////////////////////////////////////////////////////////////////
  // y.push_back(x) ; adds a new element to the end of vector y containing value x  //
  ////////////////////////////////////////////////////////////////////////////////////

 box.push_back(1);
 box.push_back(2);
 box.push_back(3);
 box.push_back(4);
 box.push_back(5);
 cout<<"The values in vector 'box' are now: ";
  for (size_t i=0; i<box.size();i++)
  {
 	 cout<<box[i]<<" ";
  }
  cout<<""<<endl;

  ///////////////////////////////////////////////////////////////////////////////////
  // y.pop_back() ; remove final element from vector y                             //
  ///////////////////////////////////////////////////////////////////////////////////

 box.pop_back();
 box.pop_back();
 cout<<"The values in vector 'box' are now: ";
 for (size_t i=0; i<box.size();i++)
 {
	 cout<<box[i]<<" ";
 }
 cout<<""<<endl;
	return 0;
}
