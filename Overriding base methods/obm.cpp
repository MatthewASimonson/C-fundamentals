/*
 * obm.cpp
 *
 *  Created on: Mar 4, 2010
 *      Author: Matthew Simonson
 */
# include <iostream>
using namespace std;

class man
{
public:
	void speak(){cout<<"Hello!"<<endl;}
	void speak(string msg){cout<<"  "<<msg<<endl;}
};

class hombre: public man
{
public:
	void speak(string msg){cout<<msg<<endl;}
};

int main()
{
	man henry;
	hombre enrique;
	henry.speak();
	henry.speak("It's a beautiful day!");
	enrique.speak("Hola!");
	enrique.man::speak("Es una tarde hermosa."); // THE METHOD FROM MAN 'SPEAK' WHICH USED A MESSAGE WITH SPACES BEFORE IT, WAS IMPLEMENTED WITH THIS NEW MESSAGE IN THE HOMBRE CLASS
	return 0;
}
