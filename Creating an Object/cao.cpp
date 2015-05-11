/*
 * cao.cpp
 *
 *  Created on: Mar 3, 2010
 *      Author: Matthew Simonson
 */

# include <string>
# include <iostream>
# include <cstdlib> // Provides ostream and istream
using namespace std;

class Dog // create "Dog" class of objects
{
private:
	int age,weight;
	string color;
public:
	void bark(){cout<<"WOOF!"<<endl;}// PUBLIC SETTER METHODS TO ASSIGN VALUES TO PRIVATE VARIABLES
	void setAge(int yrs){age=yrs;}//PUBLIC SETTER METHODS
	void setWeight(int lbs){weight=lbs;}//PUBLIC SETTER METHODS
	void setColor(string clr){color=clr;}//PUBLIC SETTER METHODS

	int getAge(){return age;}
	int getWeight(){return weight;}
	string getColor(){return color;}
};

int main()
{
	Dog max;
	max.setAge(12);
	max.setWeight(50);
	max.setColor("Brown");

	cout << "Max is a "<< max.getColor() << " dog"<< endl;
	cout << "Max is "<< max.getAge() << " years old"<< endl;
	cout << "Max weighs "<< max.getWeight() << " pounds"<< endl;
	max.bark();
	return 0;
}
