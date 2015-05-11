/*
 * Employing_Variable_Arrays.cpp
 *
 *  Created on: May 5, 2010
 *      Author: Matthew Simonson
 */

# include <iostream>
using namespace std;

int main()
{
	// With all arrays indexing always starts at zero:

	// Integer Arrays:
	int array1[5]={0,1,2,3,4};

	int array2[5]; // values must be placed in an array 1 at a time unless placed there at the time of its creation
	array2[0]=1;
	array2[1]=2;
	array2[2]=3;
	array2[3]=4;
	array2[4]=5;

	char* letters="ABCD";// char* notation creates an array of characters; this is a better way to implement than using {} notation with characters

	// Output Character Array: indexing always starts at zero, output of entire array is not allowed
	cout<<letters[0]<<endl;
	cout<<letters[1]<<endl;
	cout<<letters[2]<<endl;
	cout<<letters[3]<<endl;
	cout<<letters[4]<<endl;

    // Multi-dimensional arrays can be created too:
	int array_multi[2][3]={{1,2,3},{4,5,6}}; // This array stores two sub-arrays of size 3; This can be extended to as many dimensions as one wants

	return 0;
}
