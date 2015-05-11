/*
 * ics.h
 *
 *  Created on: Mar 5, 2010
 *      Author: Matthew Simonson
 */
//HEADER FILE - CONTAINS CLASS DEFINITIONS
 class calculator
 {
 public:
	 calculator();
	 void launch();
	 void readInput();
	 void writeOutput();
	 bool run();
 private:
	 double num1, num2;
	 char oper;
	 bool status;
 };
