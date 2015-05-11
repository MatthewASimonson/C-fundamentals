/*
 * pointer.cpp
 *
 *  Created on: Jun 1, 2010
 *      Author: Matthew Simonson
 */


// Pointers are variables that store the memory address of other variables. They can make programming much more efficient.
// They act very much like iterators, which you have encountered before.


# include <iostream>
using namespace std;

void writeOutput( int* value ) // This function is used later in the Program
{
	cout << "Current value: " << *value << endl ;
}

void computeTriple( int* value) // This function is used later in the Program
{
	*value *= 3 ;
}


int main()
{
//////////////////////////// Getting Values With Pointers:

	int a=5,b=6; // create 2 integer variables

	int *aPtr=&a; // by placing the '*' before the variable name after the type definition 'int', you are saying the variable will hold a memory address
	int *bPtr=&b; // the '&' symbol placed before a previously declared variable will produce the memory address of that variable
	// So you are telling C++ to store the memory address of 'a' in object 'aPtr'; the name 'aPtr' is a good naming convention to follow to keep things clear

	// You can use pointer variables to access the values stored at the memory address stored within the pointer variable (the value being pointed to)
	// this is done using the '*' symbol again. If the star symbol is placed before a pointer AFTER ITS INITIAL CREATION then the value that is stored at the
	// memory address inside the pointer is accessed.

	// EXAMPLE:

	cout<<"This is the value (a memory address) stored inside the pointer object aPtr: "<<aPtr<<endl;// NOTICE THAT UNLIKE ITERATORS, POINTER VALUES CAN BE DIRECTLY PRINTED (without *& before the object)
	cout<<"This is the value (a memory address) stored inside the pointer object bPtr: "<<bPtr<<endl;// OTHER THAN THIS SMALL DIFFERENCE, THEY BEHAVE IN BASICALLY THE SAME WAY
	cout<<"This is the value (an actual value) stored at the memory address that is recorded inside aPtr: "<<*aPtr<<endl;
	cout<<"This is the value (an actual value) stored at the memory address that is recorded inside bPtr: "<<*bPtr<<endl;


//////////////////////////// Moving Through Data Structures With Pointers:

// Just like iterators, pointers can be used to move through data structures, like arrays and lists

int numarray[]={1,2,3,4,5,6,7,8,9,10}; //create an array of numeric values

int *numPtr1=&numarray[0]; // the pointer now stores the address of the first variable

// NOTE: VERY IMPORTANT
// An alternative and more common way to write the previous statement is:

int *numPtr2=numarray; // This seems confusing, but actually means the exact same thing as what was assigned above; this is because array variables without an index are just pointers (address storage objects) for the first element of that array

// EXAMPLE:
// The memory address is the same:
cout<<"stated: &numarray[0] :"<< &numarray[0] <<endl;
cout<<"stated: numarray :"<< numarray<<endl;

/// Through the use of operators (such as the increment operator) the address stored in the pointer can be automatically changed:
// EXAMPLE:

for (int i=0; i<9;i++) // use a 'for loop' to execute the operator ('++' in this case; see below)
{
cout<<i+1<<": "<<endl;
cout<<"The address stored in numPtr2 : "<<numPtr2<<endl;
cout<<"The value at the address stored inside numPtr2 : "<<*numPtr2<<endl;
numPtr2++; // the iterator moves the address stored in numPtr2 to the address of the next position in the array using the increment operator '++'
}

//////////////////////////// Passing Pointers To Functions:

// When pointers are passed to functions the data being input is passed "by reference" this means the function is actually modifying the data stored in the object at the memory address stored in the pointer.
// Normally, if a regular non-pointer object is passed to a function, it is only a copy of that value that is modified and output, so the original object remains unchanged

// EXAMPLE:

	int num = 5 ;			// Regular declaration.

	int *ptr = &num ;		// Data pointer declaration.
	writeOutput( ptr ) ; 	// look back at the functions at the beginning of this script, you will see how you must specify that the input will be a pointer

	*ptr += 15 ;			// Change the pointed value, this changes the value stored at the address in ptr; equivalent to num=num+15.
	writeOutput( ptr ) ;

	computeTriple( ptr ) ;	// Change the pointed value. this also changes the value stored at the address in ptr through the use of the function
	writeOutput( ptr ) ;


	return 0;
}


