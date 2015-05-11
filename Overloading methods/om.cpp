/*
 * om.cpp
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
	void bark(string noise){cout<<noise<<endl;} // OVERLOADED BARK FUNCTION
	Dog();// DEFAULT CONSTRUCTOR - DOESN'T NEED TO BE DEFINED, BUT MUST BE CREATED WHENEVER A CONSTRUCTOR IS CREATED
	Dog(int,int); // OVERLOADED CONSTRUCTOR PROTOTYPE DECLARATION
	Dog(int,int,string);//CONSTRUCTOR PROTOTYPE
	~Dog();// DESTRUCTOR PROTOTYPE
	int getAge(){return age;}
	int getWeight(){return weight;}
	string getColor(){return color;}
};

Dog::Dog() // DEFINE DEFAULT CONSTRUCTOR
{
	age=1;
	weight=2;
	color="black";
}

Dog::Dog(int,int) //DEFINE OVERLOADED CONSTRUCTOR
{
this ->age=1;
this ->weight=20;
color="white";
}

Dog::Dog(int age,int weight, string color)// CONSTRUCTOR DEFINITION BLOCK
{
this -> age = age; // Using the 'this ->' operator means that age (first one) refers to the class member variable, which is assigned a value from the input argument age (the second one)
this -> weight = weight;
this -> color = color;
}

Dog::~Dog()// DESTRUCTOR DEFINITION BLOCK
{
cout<<"object destroyed"<<endl;
}

int main()
{
	Dog rex; //IMPLEMENTING DEFAULT CONSTRUCTOR
	cout<<"Rex is a"<< rex.getAge()<< " year old"<<endl;
	cout<<"dog who weighs"<< rex.getWeight()<<" pounds"<<endl;
	rex.bark("GRRRR!"); // IMPLEMENTING OVERLOADED FUNCTION FOR 'bark'

	Dog joe(3,10);// IMPLEMENTING OVERLOADED CONSTRUCTOR WHICH HAS VALUE FOR COLOR ALREADY SET
	cout << "joe is a "<< joe.getColor() << " dog"<< endl;
	cout << "joe is "<< joe.getAge() << " years old"<< endl;
	cout << "joe weighs "<< joe.getWeight() << " pounds"<< endl;
	joe.bark("Bowwow!");// IMPLEMENTING OVERLOADED FUNCTION FOR 'bark'


	Dog max(10,50,"brown");
	cout << "Max is a "<< max.getColor() << " dog"<< endl;
	cout << "Max is "<< max.getAge() << " years old"<< endl;
	cout << "Max weighs "<< max.getWeight() << " pounds"<< endl;
	max.bark();

	Dog paws(12,45,"black");
	cout << "Paws is a "<< paws.getColor() << " dog"<< endl;
	cout << "Paws is "<< paws.getAge() << " years old"<< endl;
	cout << "Paws weighs "<< paws.getWeight() << " pounds"<< endl;
	paws.bark();
	return 0;
}
