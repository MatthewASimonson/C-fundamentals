/*
 * cbc.cpp
 *
 *  Created on: Mar 4, 2010
 *      Author: Matthew Simonson
 */

# include <iostream>
using namespace std;

class parent
{
public:
	parent(){cout<<"default parent constructor found"<<endl;}//DEFAULT CONSTRUCTOR CALLED FOR PARENT
	parent(int a){cout<<"overloaded parent constructor called"<<endl;} // OVERLOADED CONSTRUCTOR CALLED FOR PARENT
};

class daughter: public parent
{
public:
	daughter()
	{cout<<"Derived daughter class default called"<<endl;}
};

class son: public parent
{
public:
	son(int a) : parent(a) // SON CONSTRUCTOR IS CALLED, WHICH THEN CAUSES THE NON-DEFAULT PARENT CONSTRUCTOR TO BE CALLED
	{cout<< "The value was inherited from his parent!"<<endl;}
};

int main()
{
daughter emma;
son andrew(5);
return 0;
}
