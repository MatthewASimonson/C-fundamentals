/*
 * cvm.cpp
 *
 *  Created on: Mar 4, 2010
 *      Author: Matthew Simonson
 */
# include <iostream>
using namespace std;

class parent
{
public:
	void Common() const //BY PUTTING CONST AFTER THE FUNCTION, THIS FUNCTION CAN NOT BE USED TO ALTER ANY MEMBER VARIABLES IN THE CLASS
	{cout<<"I am a part of this family,";}

	virtual void Identify() const // DECLARING SOMTHING AS A VIRTUAL METHOD MEANS IT WILL BE BASE TO BE OVERRIDDEN FOR OTHER METHODS IN DERIVED CLASSES
	{cout<<"I am the parent"<<endl;}
};

class child: public parent
{
public:
	void Identify() const
	{ cout<< "I am the child"<<endl;}
};

class grandchild: public child
{
public:
	void Identify() const
	{cout<<"I am the grandchild"<<endl;}
	void Relate() const
	{cout<<"grandchild has parent and grandparent"<<endl;}
};

int main()
{
	child son;
	grandchild grandson;
	parent *ptrChild = &son; //*ptrChild of class parent, points to son
	parent *ptrGrandchild = &grandson;
ptrChild -> Common();// THE -> OPERATOR MAKES the 'Common' FUNCTION BE APPLIED TO ptrChild
ptrChild -> Identify();
ptrGrandchild -> Common();
ptrGrandchild -> Identify();
ptrChild ->parent::Common(); // THE :: OPERATOR IS USED TO POINT ptrChild TO THE COMMON FUNCTION IN CLASS PARENT; THUS OUTPUT WILL STATE "parent" not child, but the method can still be called
ptrChild ->parent::Identify();
grandson.Relate();
	return 0;
}
