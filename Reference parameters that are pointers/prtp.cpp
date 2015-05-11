/*
 * prtp.cpp
 *
 *  Created on: Mar 25, 2010
 *      Author: genelab
 */

# include <iostream>
using namespace std;

void add2(int*& x)
{
cout<<&x<<endl;// outputs hex address of x, thus data's too// can be useful when allocating new memory for dynamic variable with pointers
cout<<*x<<endl;// outputs value of *x, thus data's too
}

int main()
{
int data=5;
int *dptr=&data;
add2(dptr);
	return 0;
}

