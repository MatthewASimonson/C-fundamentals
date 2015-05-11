/*
 * Operators.cpp
 *
 *  Created on: May 20, 2010
 *      Author: Matthew Simonson
 */

// Arithmetic Operators:

/*
 *  '+' add
 *
 *  '-' subtract
 *
 *  '*' multiply
 *
 *  '/' divide
 *
 *  '%' modulus  ; this operator will divide the first value by the second and return the remainder; NOTE: BOTH OF THE VALUES THIS OPERATOR IS APPLIED TO MUST BE WHOLE NUMBERS
 *
 *  '++' increment ; this alters the given value by increasing it by 1, very useful for looping
 *
 *  '--' decrement ; this alters the given value by decreasing it by 1, also very useful for looping
 *
 */

// Assignment Operators:

/*
 *  '='  a=b means assign b value to a
 *
 *  '+=' means a=a+b
 *
 *  '-=' means a=a-b
 *
 *  '*=' means a=a*b
 *
 *  '/=' means a=a/b
 *
 *  '%=' means a=a%b
 *
 */

// Comparison Operators: return true or false based on comparison values
// NOTE: REMEMBER 1=TRUE, 0=FALSE
/*
 *  '&&'  if (a && b) ; if a and b...
 *
 *  '||'  if (a||b) ; if a or b...
 *
 *  '!'   if(b!=a) ; if b is not equal to a
 *
 *  NOTE: IN THESE EXAMPLES IF STATEMENTS WERE USED, COMPARISON OPERATORS CAN BE USED IN OTHER CONTEXTS WHEN APPOPRIATE
 */

// Logical Operators: return true or false based on logical comparison
// NOTE: REMEMBER 1=TRUE, 0=FALSE
/*
 *  '=='  (a==b) ; is a equal to b?
 *
 *  '!='  (a!=b) ; is a not equal to b?
 *
 *  '>'   (a>b) ; is a greater than b?
 *
 *  '<'   (a<b) ; is a less than than b?
 *
 *  '>='  (a>=b) ; is a greater than or equal to b?
 *
 *  '<='  (a>=b) ; is a less than or equal to b?
 *
 */
// EXAMPLES:

# include <iostream>
using namespace std;

int main()
{

float x=2.2;
float y= 4.45;

cout<<" y = 4.45"<<" "<<" x = 2.2"<<" "<<" z = 2"<<" "<<" w = 7 "<<endl;
// addition:

cout<<"x + y = "<<x+y<<endl;

// subtraction:

cout<<"x - y = "<<x-y<<endl;

// multiply:

cout<<"x * y = "<<x*y<<endl;

// divide:

cout<<"y/x = "<<x+y<<endl;

// modulus:
int z=2;
int w=7;
cout<<"w % z = "<<w % z<<"  REMEMBER ONLY WHOLE NUMBERS!!!"<<endl;

// increment:
x=++x;
cout<<"x++ = "<<x<<endl;

// decrement:
y=y--;
cout<<"y-- = "<<y<<endl;

cout<<" Experiment with the others on your own!!!!"<<endl;

}
