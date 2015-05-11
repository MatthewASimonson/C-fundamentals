/*
 * cao_client.cpp
 *
 *  Created on: Mar 5, 2010
 *      Author: genelab
 */
# include<iostream>
# include<string>
# include "oo.h"

int main()
{
	Dog max;
	max.setAge(13);
	max.setWeight(20);
	max.setColor("Brown");

	cout << "Max is a "<< max.getColor() << " dog"<< endl;
	cout << "Max is "<< max.getAge() << " years old"<< endl;
	cout << "Max weighs "<< max.getWeight() << " pounds"<< endl;
	max.bark();

	Dog paws;
	paws.setAge(12);
	paws.setWeight(50);
	paws.setColor("Brown");
	cout << "Paws is a "<< paws.getColor() << " dog"<< endl;
	cout << "Paws is "<< paws.getAge() << " years old"<< endl;
	cout << "Paws weighs "<< paws.getWeight() << " pounds"<< endl;
	paws.bark();

	string same;
	if (max==paws)
	{
	same="yes";
	}
	else
	{
	same="no";
	}
	cout<<"Do max and paws have same age and weight and color? "<<same<<endl;

	return 0;
}

