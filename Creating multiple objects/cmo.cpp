/*
 * cmo.cpp
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
	void setValues(int,int,string);//PUBLIC SETTER METHODS
	int getAge(){return age;}
	int getWeight(){return weight;}
	string getColor(){return color;}
};

void Dog::setValues(int age,int weight, string color)// age, weight and color are the input arguments
{
this -> age = age; // Using the 'this ->' operator means that age (first one) refers to the class member variable, which is assigned a value from the input argument age (the second one)
this -> weight = weight;
this -> color = color;
}

int main()
{
	Dog max;
	max.setValues(10,50,"brown");
	cout << "Max is a "<< max.getColor() << " dog"<< endl;
	cout << "Max is "<< max.getAge() << " years old"<< endl;
	cout << "Max weighs "<< max.getWeight() << " pounds"<< endl;
	max.bark();
	Dog paws;
	paws.setValues(12,45,"black");
	cout << "Paws is a "<< paws.getColor() << " dog"<< endl;
	cout << "Paws is "<< paws.getAge() << " years old"<< endl;
	cout << "Paws weighs "<< paws.getWeight() << " pounds"<< endl;
	paws.bark();
	return 0;
}
