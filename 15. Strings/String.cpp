/*
 * String.cpp
 *
 *  Created on: May 26, 2010
 *      Author: Matthew Simonson
 */

/* Strings are a class of object that are essentially arrays of characters. char* (an array of characters) behaves much like string objects.
 * actual 'string' class objects also have several built in functions that you would have to create manually for char* objects.
 */

#include  <string>
#include <iostream>
using namespace std;

int main()
{
	//////////// Basic String Example:

	string words; // declare string object 'words'
	words="This is an example of a string object"; // assign some values
	cout<<words<<endl; // example output


	//////////// Combining strings using + and +=:

	string string1;
	string string2;
	string stringcombined;

	string1="The first part combined with ";
	string2="the second part";
	stringcombined=string1+string2; // by adding the two strings to each other, they are combined into a single object
	cout<<stringcombined<<endl;

	string string3="The alphabet: ";
	string A=" A ";
	string B=" B ";
	string C=" C ";
	string D=" D ";
	string3+=A+B+C+D; // notice this uses the += operator to combine strings, so 'string3'= 'string3'+ A + B + C + D

	cout<<string3<<endl;

	//////////// Getting String Input:

	string school;
	cout<<"What is the full name of your school?";
	getline(cin,school); // when more than one word is required for input the 'getline' function is used; this has 2 arguments, the first specifies where input is coming from
	// (usually the 'cin' function), and the second specified where to place this multi-word input.
	cout<<"You go to "<<school<<endl;

	string Day1;
	cout<<"What day of the week is it?"<<endl;
	cin>>Day1; // The 'cin' function by itself allows input for only a single word into a string variable; this can be useful for very basic input, but obviously limiting
	cout<<"Today is: "<<Day1<<endl;
	cout<<""<<endl;


	//////////// Basic String Functions:

	string message="Hello, this is a message stored in a string object";

	//// Determine size:
	cout<<"The number of characters in this string variable are: "<<message.size()<<endl;// The .size() function returns the number of characters in a string

	//// Determine if empty:
	cout<<"Is the string object 'message' empty?: (1=True, 0=False) "<<message.empty()<<endl;// the .empty() function returns 1 if a string object is empty, and 0 otherwise

	//// Clear contents of string object:
	message.clear(); //the .clear() function clears all characters that are currently stored in the string object

	cout<<"Is the string object 'message' empty now?: (1=True, 0=False) "<<message.empty()<<endl;// the .empty() function returns 1 if a string object is empty, and 0 otherwise

	//// Concatenate strings:
    // Strings can also be combined using the x.append(y) function, which is the same as x + y
	cout <<	string1.append(string2)<< "using the .append() function"<<endl;

	//// Compare strings:
	// Strings can be compared in 2 ways:
	// One way is using the '==' operator, just like with other variable types

	string alpha=A;
	string ALPHA=A;

	cout<<"do these two strings match? (1=True, 0=False) " << (alpha==ALPHA)<<endl;

	// The second way to compare strings is using the x.compare(y) function; the difference is in the values returned.
	// This comparison tells you whether string x is longer than string y, if x is longer than y, 1 is returned, else -1 is returned, if they are equal then 0 is returned

	string beta=B;

	cout<<"are these two strings the same length? (1 means x > y; 0 means x = y ; -1 means x < y) " << (alpha==beta)<<endl;

	//// Assigning string values:
	// String values can be assigned in 2 ways:

	// One way is using the '=' assignment operator, just like with other variable types

	string variable1="It's sunny today!"; // the string 'Value 1' is assigned to the string object 'variable1'
    string variable2=variable1; // the value of 'variable1' is assigned to 'variable2'

	cout<<"What is stored in variable2?: "<< variable2 <<endl;

	// The other way to to assign string variables values is using the x.assign(y) function, which assigns string value

	string variable3;
	variable3.assign(variable2);// This is the most basic use of this function, simply assigning the value of one string object to another

	cout<<"What is now stored in variable3?: "<< variable3 <<endl;

	// The assign function can also assign some sub-section of a variable to another variable:


	string variable4;
	variable4.assign(variable3,0,10); // this assigns characters 0 through 10 from 'variable3' to 'variable4';
	cout<<"What is now stored in variable4?: "<< variable4 <<endl;
	//other functions that specify numeric output can be used for the range values

	string variable5;
	variable5.assign(variable3,0,variable4.size()); // notice the second range value is not an actual number, but output from another function that is numeric
	cout<<"What is now stored in variable5?: "<< variable5 <<endl;

	//// Finding substrings:
	// the x.find(y) function can be used to see if string x contains string y; if the 'find' function finds the nested string, it returns the index of that nested string's first character,
	// if the string is not found '-1' is returned (though some compilers will return junk instead of -1, like some number like '4294967295')
	// Example:

	string John_said="It would appear that we have reached the limits of what it is possible to achieve with computer technology, although one should be careful with such statements, as they tend to sound pretty silly in 5 years.";

	cout<<"Where is the first occurrence of 'technology' start in the previous statement? "<<John_said.find("technology")<<endl;
	cout<<"Where is the first occurrence of 'C++' start in the previous statement? "<<John_said.find("C++")<<endl;

	/// the 'find' function has 4 related functions:
	// 1. the function  x.find_first_of(y) will return the index in the x string of the first character that both strings share
	// Example: in this example 'e' is the first character common to both strings, thus it's index in 'John_said' will be returned


	string Isaid="come here!";
	cout<<John_said.find_first_of(Isaid)<<endl;

	// 'e' is the first letter they both have in common, so 2, its' position in 'John_said' is returned

	// 2. the function  x.find_last_of(y) will return the index in the x string of the last character that both strings share
	// Example: in this example 'e' is the last character common to both strings, thus it's final position in 'John_said' will be returned

	cout<<John_said.find_last_of(Isaid)<<endl;

	// 3. the function  x.find_first_not_of(y) will return the index in the x string of the first character that both strings do not share
	// Example:

	string Johnz="It would appear that we have reached the limits of z";
	cout<<John_said.find_first_not_of(Johnz)<<endl;// z is the first character these two string do not share, thus its index is output

	// 4. the function  x.find_last_not_of(y) will return the index in the x string of the first character from the end (the last character) that both strings do not share
	// Example:

	string John_end="z as they tend to sound pretty silly in 5 years.";
	cout<<John_said.find_last_not_of(John_end)<<endl;// z is the first character these two string do not share, thus its index is output

	//// Swapping Strings:

	/// the x.swap(y) function is used to swap the contents of the 2 strings x and y
	// Example:

	string x_1 = "first";
	string x_2 = "second";
	cout<<"The initial state of x_1 is: "<<x_1<<", the initial state of x_2 is: "<<x_2<<endl;
	x_1.swap(x_2); // apply swap function
	cout<<"Now after swapping: x_1= "<<x_1<<", and x_2= "<<x_2<<endl;

	//// Inserting, Erasing & Replacing Strings:

	/// the x.insert(index,y) function is used to insert the values from one string into another string starting at a specified index
	// Example:

	string x_3 = x_1; // create object x_3 with same initial value as x_2

	x_2.insert(5," place!"); // inserting a new string at the 5th position, specifying the text to be inserted
	cout<<" x_2 now states: "<<x_2<<endl;

	string put1 = "e the ";
	string put2 = "ors fly!!";
	x_3.insert(2,put1); // inserting new strings at two different positions using other string objects
	x_3.insert(12,put2); //
	cout<<" x_3 now states: "<<x_3<<endl;

	/// the x.erase(index1,numchars) function is used to erase the values starting at the first specified index and stopping at the number of characters specified
	// Example:

	x_3.erase(12,20); // Now erase what was added in reverse order to return the string to its original state
	cout<<" x_3 now states: "<<x_3<<endl;
	x_3.erase(2,6);
	cout<<" x_3 now states: "<<x_3<<endl;

	/// the x.replace(index1,numchars,string) function is used to replace the values starting at the first specified index and stopping at the number of characters ahead of the index specified; this can be an object or input directly as text
	// Example:

	string like="I like climbing through the mountains";
	like.replace(7,8,"to hike"); // replace starting at 7th character through 8 more characters in string
	cout<<" 'like' now states: "<<like<<endl;

	/// the x.substr(index1,numchars) function copies the part of the string 'x' starting at index1 and stopping at the number of characters ahead of index 1 specified
	// Example:

	cout<<like.substr(27,9)<<endl; // This copies the part of the string starting at the 27th index and ending 9 beyond that.

	/// the x.at(y) function returns the character from string x at index y (this does not modify object x)

	cout<<like.at(5)<<endl;

	/// NOTE: UNLIKE the .at() function used in other data structures, with strings it can only read a value, and not assign a value from a specific index


}
