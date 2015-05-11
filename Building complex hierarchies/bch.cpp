/*
 * bch.cpp
 *
 *  Created on: Mar 4, 2010
 *      Author: Matthew Simonson
 */

#include <iostream>
using namespace std;

class boat // ABSTRACT DATA TYPE "BOAT"
{
protected:
	int length;
public:
	int getLength(){return length;}
	virtual void Model()=0;
};

class sailboat: public boat //ABSTRACT DATA TYPE DERIVED FROM BOAT
{
protected:
	int mast;
public:
	int getMast(){return mast;}
	virtual void Boom()=0;
};

class laser: public sailboat
{
public:
	laser(){mast=19;length=35;}
	void Model(){cout<<"Laser Classic"<<endl;}
	void Boom(){cout<<"Boom: 14ft"<<endl;}
	~laser();
};

int main()
{
	laser *ptrlaser= new laser;
	ptrlaser -> Model();
	cout<<"Length: "<<ptrlaser -> getLength()<< "ft"<< endl; // USING ARROW OPERATOR WITH POINTER GETTING VALUE FROM FUNCTION
	cout<<"Height: "<<ptrlaser -> getMast()<< "ft"<< endl;
	ptrlaser -> Boom();
}
