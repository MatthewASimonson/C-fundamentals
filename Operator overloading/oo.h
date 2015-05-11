/*
 * bool_dog.h
 *
 *  Created on: Mar 5, 2010
 *      Author: genelab
 */
// HEADER FILE CONTAINS CLASS DEFINITIONS
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
	bool operator==(Dog& d2);// OPERATOR OVERLOADING METHOD FUNCTION
};
