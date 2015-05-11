/*
 * ics.cpp
 *
 *  Created on: Mar 5, 2010
 *      Author: Matthew Simonson
 */
// IMPLEMENTATION FILE: CONTAINS FUNCTION DEFINITIONS FOR CLASSES IN HEADER FILE
# include <iostream>
# include "ics.h"
using namespace std;

calculator::calculator(){status=true;} // ESSENTIALLY A DEFAULT CONSTRUCTOR

void calculator::launch()
{
	cout<<endl<<"*** SUM CALCULATOR ***" << endl;
	cout<<"Enter a number, an operator(+-*/), and another number "<<endl<<"Hit return to calculate, Enter zero to exit."<<endl;
}

void calculator::readInput()
{
	cout<<">";cin>>num1;//GET FIRST NUMBER
	if (num1==0)status = false;//EXIT IF ZERO
	else {cin>>oper;cin>>num2;}//OR GET REST
}

void calculator::writeOutput()
{
	if (status) switch(oper)
	{
	case '+':{cout<<(num1 + num2)<<endl; break;}
	case '-':{cout<<(num1 - num2)<<endl; break;}
	case '*':{cout<<(num1 * num2)<<endl; break;}
	case '/':{if(num2 != 0) cout<< (num1/num2)<<endl;
	else cout<<"Cannot divide by zero!"<<endl;}
	}
}

bool calculator::run(){return status;}
