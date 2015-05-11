/*
 * icp.cpp
 *
 *  Created on: Mar 4, 2010
 *      Author: Matthew Simonson
 */

# include <iostream>
using namespace std;

class polygon
{
protected: // PROTECTED VARIABLES ARE ONLY ACCESIBLE TO MEMBERS OF THIS CLASS AND CLASSES DERIVED FROM THIS CLASS
	int width, height;
public:
	void setValues(int w,int h){width=w;height=h;}
};

class rectangle: public polygon // THE RECTANGLE CLASS INHERITS ALL POLYGON VARIABLES
{
public:
	int area(){return(width * height);} //RECTANGLE HAS A SPECIFIC AREA FUNCTION
};

class triangle: public polygon // THE TRIANGLE CLASS INHERITS ALL POLYGON VARIABLES
{
public:
	int area(){return ((width * height)/2);} // TRIANGLE HAS A SPECIFIC AREA FUNCTION
};
int main()
{
	rectangle rect; triangle tri;
	rect.setValues(2,3); tri.setValues(2,3);
	cout<<"Rectangle area: "<<rect.area()<<endl;
	cout<<"Triangle area: "<<tri.area()<<endl;
	return 0;
}
