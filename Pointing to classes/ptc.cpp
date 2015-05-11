/*
 * ptc.cpp
 *
 *  Created on: Mar 4, 2010
 *      Author: Matthew Simonson
 */

#include <iostream>
using namespace std;

class base
{
public:
	void identify(int adr) const
	{
		cout<<"Base class called by Ox"<<hex<<adr<<endl;// FUNCTION RETURNS HEX ADDRESS 'hex' CAUSES INT DATA 2B DISPLAYED IN HEX FORMAT
	}
};

class subA : public base{}; // ONLY ONE INSTANCE OF A SUBX CLASSES EXIST, WHICH INHERITS ITS VALUES FROM BASE
class subB : public base{};

int main()
{
	base* ptrA = new subA;// THE 'new' OPERATOR IS USED WHEN ONLY ONE INSTANCE OF A CLASS EXISTS, THIS REFRENCES ITS POSITION IN MEMORY, OTHERISE NORMAL REFERENCES TO SPECIFIC INSTANCES SHOULD BE USED
	base* ptrB = new subB;
	ptrA ->identify((int) &ptrA); // CASTING IS USED TO CONVERT REFERENCE TYPE TO INT, WHICH IS REQUIRED RETURN TYPE OF IDENTIFY
	ptrB ->identify((int) &ptrB); // THE -> CLASS POINTER OPERATOR IS HERE TO CALL CLASS METHODS
	return 0;
}
