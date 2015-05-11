/*
 * oo.cpp
 *
 *  Created on: Mar 6, 2010
 *      Author: genelab
 */
# include <iostream>
# include "oo.h"
# include <string>
using namespace std;

bool Dog::operator==(Dog& d2)
	{
		return
		(getAge() == d2.getAge()) //THIS COMPARES INT'S OF DOG'S AGES
	    &&
	    (getWeight() == d2.getWeight()) //THIS COMPARES INT'S OF DOG'S WEIGHTS
	    &&
	    ((getColor().compare(d2.getColor())==0));// THIS COMPARES STRING'S OF DOG' COLOR
	}
