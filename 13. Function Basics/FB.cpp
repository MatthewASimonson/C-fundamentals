/*
 * FB.cpp
 *
 *  Created on: May 22, 2010
 *      Author: Matthew Simonson
 */

/* Functions take input, perform some specified operation with that data, then return output(sometimes)
 *
 * Why use functions:
 *
 * 1. functions make code easier to understand and update
 * 2. they can be re-used in other programs
 * 3. large programming projects can be sub-divided into independent function pieces to distribute the work load to several programmers
 *
 * function declaration form:
 *
 * return-data-type name(input-data-type input)
 * Example:
 */
# include <iostream>
using namespace std;

// Here's the definition and implementation of a function that computes the area for a rectangle:
// NOTE: variables declared within a function only exist inside that function and are independent of the rest of the program, so in 'main()' you can not call 'length' or 'width'
// that are declared in the following function
float area(float length,float width)
{
	return length*width;
}

// Here's the definition and implementation of the OVERLOADED FUNCTION: this is a function with the same name but different input parameters;
// C++ will automatically select the correct version of the function based on what the input matches, even though the function has the same name.
float area(float side)
{
	return side*side;
}


int main()
{
// Now the area function is used:
float L;
float W;
float A;
cout<<"What is the length of the rectangle?"<<endl;
cin>>L; // NOTICE THE 'cin' FUNCTION; THIS ASKS THE USER FOR INPUT AND ASSIGNS IT TO THE SPECIFIED VARIABLE
cout<<"What is the width of the rectangle?"<<endl;
cin>>W;
A=area(L,W); // now use the function and assign the output to variable 'A'
cout<<"The area of the rectangle is: "<<A<<endl;

///// NOW THE OVERLOADED FUNCTION FOR THE AREA OF A SQUARE:

cout<<""<<endl;
cout<<"What is the length of the square's side?"<<endl;
cin>>L;
A=area(L); // now the other version of the function is automatically used because there is only one input variable
cout<<"The area of the square is: "<<A<<endl;
	return 0;
}
