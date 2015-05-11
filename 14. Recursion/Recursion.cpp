/*
 * Recursion.cpp
 *
 *  Created on: May 22, 2010
 *      Author: Matthew Simonson
 */

/* Recursion is a way for functions to call themselves; this method is used when a large problem is built
 * of a smaller version or smaller versions of the large problem, so it can be solved iteratively in pieces
 *
 * Rules of Recursive functions:
 *
 * 1. Must contain statement to be executed
 * 2. Must contain an incrementing statement, which moves to next step
 * 3. Must make a call to itself
 * 4. Must contain conditional statement that controls whether to iterate to the next step or stop; otherwise an infinite loop will occur
 */

# include <iostream>
using namespace std;

//Function Definitions:
// Notice these functions are "defined" separately from where they are implemented; definitions just specify the return and input data

int factorial(int n);
int computeFactorials(int num, int max);


int main()
{
computeFactorials(1,8); // call to primary function from main()
// First argument is input number, second argument is factorial power to raise input number to
	return 0;
}

// Function Implementations:
// This is where the previously defined functions are being "implemented"; implementation specifies how a function works and can be declared after 'main()' or in a seperate file
// that is referenced

int factorial(int n)
{
	int result;
	if (n==1) result=1; // conditional exit statement that prevents infinite loop
	else result = (factorial(n-1)*n); // decrementing statement and recursive call to itself (which is also the statement that is executed)
	return result;
}

int computeFactorials(int num, int max)
{
	cout<<"Factorial of "<< num <<": ";
	cout<<factorial(num)<<endl;
	num++; // incrementing statement
	if (num > max) return 0;// conditional exit statement that prevents infinite loop
	else computeFactorials(num,max); // recursive call to itself (which is also the statement that is executed)
}




