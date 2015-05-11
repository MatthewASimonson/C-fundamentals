/*
 * madt.cpp
 *
 *  Created on: Mar 4, 2010
 *      Author: Matthew Simonson
 */

# include <iostream>
using namespace std;

class shape
{
public:
	virtual int getArea()=0;
	virtual int getEdge()=0;
	virtual void Draw()=0;
};

class rect: public shape //DERIVED CLASS RECT IS DECLARED WITH 2 PRIVATE VARIABLES AND A PUBLIC CONSTRUCTOR AND DESTRUCTOR; DERIVED CLASSES DON'T AUTO DESTRUCT!!!
{
private:
	int height, width;
public:
	rect(int initWidth, int initHeight)
	{
		height=initHeight;
		width=initWidth;
	}
 int getArea(){return height * width;}
 int getEdge(){return(2 * height)+(2 * width);}

 void Draw()
 {
	 for(int i=0; i<height;i++)
	 {
		 cout<<""<<endl;
		 for (int j=0; j<width; j++)
		 {cout<<"x";}
	 }
 }
	~rect();
};

int main()
{
	shape *pQuad = new rect(3,7);
	shape *pSquare = new rect(5,5);
	pQuad -> Draw();
	cout<<""<<endl;
	cout<< "Area is "<<pQuad -> getArea()<<endl;
	cout<< "Perimiter is "<<pQuad -> getEdge()<<endl;

	pSquare -> Draw();
	cout<<""<<endl;
	cout<< "Area is "<<pSquare -> getArea()<<endl;
	cout<< "Perimiter is "<<pSquare -> getEdge()<<endl;
	return 0;
}
