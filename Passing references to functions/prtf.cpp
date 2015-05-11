/*
 * prtf.cpp
 *
 *  Created on: Mar 3, 2010
 *      Author: Matthew Simonson
 */
# include <iostream>
using namespace std;

void writeOutput(int&);
void computeTriple(int&);

int main()
{
	int num=5;
	int& refnum=num;
	writeOutput(refnum);
	refnum+=15;
	writeOutput(refnum);
	computeTriple(refnum);
	writeOutput(refnum);
	return 0;
}

void writeOutput(int& value)
{
	cout<<"Current Value: "<<value<<endl;
}

void computeTriple(int& value)
{
	value *= 3; // make sure whenever the star is used spaces surrounding it are used correctly or errors occur
}
