/*
 * Creating_Variables.cpp
 *
 *  Created on: May 5, 2010
 *      Author: Matthew Simonson
 */

# include <iostream>
using namespace std;

int main()
{
	// Character data type:
	// Notice single quotes!!
	char letter='A';
	char Bee, See, Dee;
	Bee='B';
	See='C';
	Dee='D';

	// Integer data type:
	int one=1;
	int two,three,four;
	two=2;
	three=3;
	four=4;

	// Float data type:
	// Accurate up to 6 decimal places

	float a_sequence=0.123456;
	float b_seq, c_seq, d_seq;
	b_seq=12.34;
	c_seq=.025;
	d_seq=.5;

	// Double data type:
	// just like float, but accurate up to 10 decimal places

	double w_seq=0.1234567891;
	double x_seq, y_seq, z_seq;
	x_seq=12.34;
	y_seq=.0256666666;
	z_seq=.5;

	//Bool data type:
	// 0=False, 1=True

	bool answer1=false;
	bool answer2=true;


	///////////////////////////
	//Example Output:        //
	///////////////////////////

	cout<<"Character output: "<<letter<<" "<<Bee<<" "<<See<<" "<<Dee<<endl;
	cout<<""<<endl;
	cout<<"Integer output: "<<one<<" "<<two<<" "<<three<<" "<<four<<endl;
	cout<<""<<endl;
	cout<<"Float output: "<<a_sequence<<" "<<b_seq<<" "<<c_seq<<" "<<d_seq<<endl;
	cout<<""<<endl;
	cout<<"Double output: "<<w_seq<<" "<<x_seq<<" "<<y_seq<<" "<<z_seq<<endl;
	cout<<""<<endl;
	cout<<"Bool output: answer1: "<<answer1<<" "<<"answer2: "<<answer2<<endl;
	cout<<""<<endl;
	return 0;
}
