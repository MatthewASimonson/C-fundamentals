/*
 * Passing_pointers_to_functions.cxx
 *
 *  Created on: Mar 3, 2010
 *      Author: Matthew Simonson
 */

# include <iostream>
using namespace std;

void writeOutput(int*); // these functions will both accept a single pointer argument
void computeTriple(int*);

int main()
{
	int num=5;
	int *ptrnum; // creates int pointer
	ptrnum=&num;// assigns reference to int pointer
	writeOutput(ptrnum);
	*ptrnum=+15;
	writeOutput(ptrnum);
	computeTriple(ptrnum);
	writeOutput(ptrnum);
	return 0;
}

void writeOutput(int* value) // This function is expecting an int pointer as input (which is different syntax than if it was expecting an int and you gave it a pointer to an int!!!)
{
	cout<<"Current Value: "<<*value<< endl;
}

void computeTriple(int* value)
{
	*value *=3;
}
