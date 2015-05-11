/*
 * rd.cpp
 *
 *  Created on: Mar 3, 2010
 *      Author: Matthew Simonson
 */

# include <iostream>
using namespace std;

int main()
{
	int num;
	int& rnum=num;// At the address in memory of rnum, a value is stored, this value is num
	rnum=400;
	cout<<"Value direct: "<<num<<endl;
	cout<<"Value via reference: "<<rnum<<endl;
	cout<<"Address direct: "<<&num<<endl; //output the address in memory of num
	cout<<"Address via reference: "<<&rnum<<endl; //refers to rnum, which refers to num, so nums address will be output
	rnum*=2;
	cout<<"Value direct:"<<num<<endl;
	cout<<"Value via reference: "<<rnum<<endl;
 	return 0;
}

