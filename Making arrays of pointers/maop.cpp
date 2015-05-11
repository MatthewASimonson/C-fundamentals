/*
 * maop.cpp
 *
 *  Created on: Mar 3, 2010
 *      Author: Matt Simonson
 */

# include <iostream>
using namespace std;

int main()
{
	char letters[8]={'C','+','+',' ','F','u','n','\0'}; // character arrays always have to have a terminator character at the end
	char* text="C++ Fun";
	char* term="Element";
	char* lang="C++";
	char* apt1[3]={"Great","Program","Fun"};
	char* apt2[3]={lang,"is","Fun"};
	char* apt3[3]={apt2[0],apt2[1],apt1[0]};
	char* apt4[3]={apt1[2],apt2[1],apt2[2]};
	cout<<letters<<endl;
	cout<<text<<endl;
	for (int i=0;i<3;i++)
	{
		cout<<term<<i<<" ";
		cout<<apt1[i]<<" ";
		cout<<apt2[i]<<" ";
		cout<<apt3[i]<<" ";
		cout<<apt4[i]<<endl;
	}
	return 0;
}
