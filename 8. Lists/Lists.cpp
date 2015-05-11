/*
 * Lists.cpp
 *
 *  Created on: May 7, 2010
 *      Author: genelab
 */

#include <iostream>
#include <list> // be sure to include list template
using namespace std;

/*
 * Lists are a kind of sequence container. Their elements are ordered following a linear sequence.

List containers are implemented as doubly-linked lists; Doubly linked lists can store each of the elements they contain in different and unrelated storage locations.
The ordering is kept by the association to each element of a link to the element preceding it and a link to the element following it.

This provides the following advantages over other container types:

1. Efficient insertion and removal of elements anywhere in the container.
2. Efficient moving single elements and blocks of elements within the container or even between different containers.
3. Iterating over the elements in forward or reverse order.
 */

int main()
{
	// declaring an integer list (lists of any class can be declared)

		list <int> mylist; // this declares an empty list

	////////////////////////////////////////////////////////////////
	// ****************Capacity Functions:*********************** //
	////////////////////////////////////////////////////////////////

	////////////////////////////////////////////////////////////////////
	// y.empty() ; return true if list y is empty, else return false  //
	////////////////////////////////////////////////////////////////////

	cout<<"Is 'mylist' empty? (1=TRUE, 0=FALSE): "<< mylist.empty()<<endl;

	////////////////////////////////////////////////////////////////////
	// y.size() ; return how many nodes are in the list               //
	////////////////////////////////////////////////////////////////////

	cout<<"How many nodes does 'mylist' contain?: "<< mylist.size()<<endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// y.resize(x) or y.resize(x,w); resize how many nodes are in the list to x, this either adds nodes to the end or removes them from the end //
	//                               if second parameter 'w' is given, this is the value assigned to the additional nodes					    //
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	mylist.resize(3,1);// add 3 nodes to list with value '1' in each data field

	cout<<"Now how many nodes does 'mylist' contain?: "<< mylist.size()<<endl;

	////////////////////////////////////////////////////////////////
	// ****************Data Field Access Functions:***************//
	////////////////////////////////////////////////////////////////

	////////////////////////////////////////////////////////////////////
	// y.front() ; return data field of first node in list            //
	////////////////////////////////////////////////////////////////////

	cout<<"What is the value of the data field in the first node of 'mylist'?: "<< mylist.front()<<endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// y.begin() ; return address of data field from first node in list, which must be stored in an iterator, unless output with '*' before   //
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	list <int>::iterator head_itr; // create iterator (address storage object, which cannot be directly printed!!!)
	head_itr=mylist.begin(); // mylist.begin assigns memory address of the data field from first node to head_itr ('head_itr' is an address storage object)
	cout<<"The value store in the data field of the first node is "<<*head_itr<<endl; // dereferencing '*' operator must appear before iterator is output, because we want to see the value stored at the address
	cout<<"The address of the data field in the first node is: "<< &*head_itr<<endl; // unlike pointers, where just 'head_itr' being output would print the memory address, with iterators,
	// you must place the reference operator '&' before a dereferenced iterator to output the memory address

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// y.rend() ; return address JUST BEFORE the first node in the list, which must be stored in a reverse_iterator, unless output with '*' before//
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	list <int>::reverse_iterator b4head_itr; // create iterator (address storage object, which cannot be directly printed!!!)
	b4head_itr=mylist.rend(); // mylist.begin assigns memory address of the data field from first node to head_itr ('head_itr' is an address storage object)
	cout<<"The address of the data field JUST BEFORE the first node is: "<< &*b4head_itr<<endl;
	cout<<"The address of the data field JUST BEFORE the first node is: "<< &*mylist.rend()<<endl;

	////////////////////////////////////////////////////////////////////
	// y.back() ; return data field of last node in list              //
	////////////////////////////////////////////////////////////////////

	cout<<"What is the value of the data field in the last node of 'mylist'?: "<< mylist.back()<<endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// y.rbegin() ; return address of data field from last node in list, which must be stored in a reverse_iterator, unless output with '*' before//
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	list <int>::reverse_iterator LN_itr;
	LN_itr=mylist.rbegin();
	cout<<"The value store in the data field of the last node is "<<*LN_itr<<endl; // dereferencing '*' operator must appear before iterator is output, because we want to see the value stored at the address
	cout<<"The value store in the data field of the last node is "<<*mylist.rbegin()<<endl; // equivalent, just without any assignment
	cout<<"The address of the data field in the last node is: "<< &*mylist.rbegin()<<endl; // unlike pointers, where just 'head_itr' being output would print the memory address, with iterators,
	// you must place the reference operator '&' before a dereferenced iterator to output the memory address

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// y.end() ; return address JUST AFTER the last node in the list, which must be stored in an iterator  //
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	list <int>::iterator JAE_itr;
	JAE_itr=mylist.end();
	cout<<"The address of the data field JUST AFTER the end node is: "<< &*JAE_itr<<endl; // This statement is equivalent to the next
	cout<<"The address of the data field JUST AFTER the end node is: "<< &*mylist.end()<<endl; // unlike pointers, where just 'head_itr' being output would print the memory address, with iterators,
	// you must place the reference operator '&' before a dereferenced iterator to output the memory address

	//////////////////////////////////////////////////////////////////
	// ****************Data Field Modifier Functions:***************//
	//////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////
	// y.push_front() ; insert new node at beginning of list, right before current first element     //
	///////////////////////////////////////////////////////////////////////////////////////////////////

	mylist.push_front(50); // 50 is inserted in the data field of the new front node
	cout<<"Now how many nodes does 'mylist' now contain?: "<< mylist.size()<<endl;
	cout<<"What is the value of the data field in the new first node of 'mylist'?: "<< mylist.front()<<endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////
	// y.pop_front() ; remove node at beginning of list 											 //
	///////////////////////////////////////////////////////////////////////////////////////////////////

	mylist.pop_front(); // remove front node
	cout<<"Now how many nodes does 'mylist' now contain?: "<< mylist.size()<<endl;
	cout<<"What is the value of the data field in the new first node of 'mylist'?: "<< mylist.front()<<endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////
	// y.push_back() ; insert new node at end of list, right after current last element              //
	///////////////////////////////////////////////////////////////////////////////////////////////////

	mylist.push_back(666); // 666 is inserted in the data field of the new end node
	cout<<"Now how many nodes does 'mylist' now contain?: "<< mylist.size()<<endl;
	cout<<"What is the value of the data field in the new last node of 'mylist'?: "<< mylist.back()<<endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////
	// y.pop_back() ; remove node at end of list 									         		 //
	///////////////////////////////////////////////////////////////////////////////////////////////////

	mylist.pop_back(); // remove end node
	cout<<"Now how many nodes does 'mylist' now contain?: "<< mylist.size()<<endl;
	cout<<"What is the value of the data field in the new last node of 'mylist'?: "<< mylist.back()<<endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////
	// y.insert(it,x) ; insert new node at the index specified by the iterator                       //
	///////////////////////////////////////////////////////////////////////////////////////////////////

	// List before insert:
	// Output all values in list data fields:
		 list <int>::iterator move1_itr; // create iterator (address storage object, which cannot be directly printed!!!)
		 move1_itr=mylist.begin(); // mylist.begin assigns memory address of the data field from first node to move_itr ('move_itr' is an address storage object)

		for(size_t i=0; i<mylist.size();i++)
		 {
			cout<<*move1_itr<<endl;
			move1_itr++;// make sure the increment is after output or first node data won't be shown
		 }
		cout<<"Now how many nodes does 'mylist' now contain?: "<< mylist.size()<<endl;

	// To insert a node as the 2nd position:
	list<int>::iterator it;
	it=mylist.begin(); // Must be declared b4 loop

	for (int i=0;i<2;i++) // the insert position should be the kill value
	{
		if (i==1) // remember indexing starts at zero!!!
		{
			mylist.insert(it,10);// now insert a node with 10 in the data field at position 3 in list
		}
		it++; //with each iteration the address of 'it' changes to the that of the next node
	}

	it=mylist.begin(); // Must be re-assigned b4 loop EVERY TIME OBJECT IS INSERTED!!!!!!!!!!!!!!
	for (int i=0;i<2;i++) // the insert position should be the kill value
	{
		if (i==1) // remember indexing starts at zero!!!
		{
			mylist.insert(it,12);// now insert a node with 10 in the data field at position 3 in list
		}
		it++; //with each iteration the address of 'it' changes to the that of the next node
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////
	// y.erase(it,x) ; erase at the index specified by the iterator                                  //
	///////////////////////////////////////////////////////////////////////////////////////////////////

	// List before insert:
	// Output all values in list data fields:

		 move1_itr=mylist.begin(); // mylist.begin assigns memory address of the data field from first node to move_itr ('move_itr' is an address storage object)

		for(size_t i=0; i<mylist.size();i++)
		 {
			cout<<*move1_itr<<endl;
			move1_itr++;// make sure the increment is after output or first node data won't be shown
		 }
		cout<<"Now how many nodes does 'mylist' now contain?: "<< mylist.size()<<endl;

	// To insert a node as the 2nd position:
	it=mylist.begin(); // Must be declared b4 loop

	for (int i=0;i<2;i++) // the insert position should be the kill value
	{
		if (i==3) // remember indexing starts at zero!!!
		{
			mylist.erase(it);// now erase the node at position 4 in list
		}
		it++; //with each iteration the address of 'it' changes to the that of the next node
	}

	it=mylist.begin(); // Must be re-assigned b4 loop EVERY TIME OBJECT IS ERASED!!!!!!!!!!!!!!
	for (int i=0;i<2;i++) // the insert position should be the kill value
	{
		if (i==1) // remember indexing starts at zero!!!
		{
			mylist.erase(it);// now insert a node with 10 in the data field at position 2 in list
		}
		it++; //with each iteration the address of 'it' changes to the that of the next node
	}

	/////////////////////////////////////////////////////////
	// Traverse and output all values in list data fields: //
	/////////////////////////////////////////////////////////

	 list <int>::iterator move_itr; // create iterator (address storage object, which cannot be directly printed!!!)
	 move_itr=mylist.begin(); // mylist.begin assigns memory address of the data field from first node to move_itr ('move_itr' is an address storage object)

	for(size_t i=0; i<mylist.size();i++) //
	 {
		cout<<*move_itr<<endl;
		move_itr++; // make sure the increment is after output or first node data won't be shown
	 }

	cout<<"Now how many nodes does 'mylist' now contain?: "<< mylist.size()<<endl;

	////////////////////////////////////////////////////////////////////////////
	// y.remove(x) ; remove all nodes that contain data value x from list y   //
	////////////////////////////////////////////////////////////////////////////

	mylist.remove(1); // removes all nodes that contain '1' in their data field
	cout<<"Now how many nodes does 'mylist' now contain?: "<< mylist.size()<<endl;

	cout<<"After removing all nodes containing '1', the values in the list are now:"<<endl;
	move_itr=mylist.begin(); // mylist.begin assigns memory address of the data field from first node to move_itr ('move_itr' is an address storage object)
	for(size_t i=0; i<mylist.size();i++) //
	 {
		cout<<*move_itr<<endl;
		move_itr++; // make sure the increment is after output or first node data won't be shown
	 }

	////////////////////////////////////////////////////////////////////
	// y.clear() ; delete all nodes in list y                         //
	////////////////////////////////////////////////////////////////////

	mylist.clear();
	cout<<"I just cleared the list"<<endl;
	cout<<"Is 'mylist' empty? (1=TRUE, 0=FALSE): "<< mylist.empty()<<endl;


	/////////////////////////////////////////////////////////////////////////////////
	//OK, now lets put some values back in the list using the push_front function: //
	/////////////////////////////////////////////////////////////////////////////////

	for (size_t i=0;i<10;i++)// add 10 values to list
	{
		mylist.push_front(i);
	}

	 cout<<"'mylist' now contains the following values in its data nodes:"<<endl;
	 move_itr=mylist.begin(); // mylist.begin assigns memory address of the data field from first node to move_itr ('move_itr' is an address storage object)
	for(size_t i=0; i<mylist.size();i++) //
	 {
		cout<<*move_itr<<endl;
		move_itr++; // make sure the increment is after output or first node data won't be shown
	 }

	///////////////////////////////////////////////////////////////////////////////////
	//OK, now lets put some other values back in the list using the insert function: //
	///////////////////////////////////////////////////////////////////////////////////

	it=mylist.begin(); // Must be re-assigned b4 loop EVERY TIME OBJECT IS INSERTED!!!!!!!!!!!!!!
	for (int i=0;i<6;i++) // the insert position should be the kill value
	{
		if (i==3 || i==4 || i==5) // remember indexing starts at zero!!!
		{
			mylist.insert(it,i);// now insert a node with 10 in the data field at position 3 in list
		}
		it++; //with each iteration the address of 'it' changes to the that of the next node
	}

	cout<<"'mylist' now contains the following values in its data nodes:"<<endl;
	move_itr=mylist.begin(); // mylist.begin assigns memory address of the data field from first node to move_itr ('move_itr' is an address storage object)
	for(size_t i=0; i<mylist.size();i++) //
	 {
		cout<<*move_itr<<endl;
		move_itr++; // make sure the increment is after output or first node data won't be shown
	 }
	cout<<"Now how many nodes does 'mylist' now contain?: "<< mylist.size()<<endl;

	////////////////////////////////////////////////////////////////////
	// y.reverse() ; reverse all nodes in list y                      //
	////////////////////////////////////////////////////////////////////

	 mylist.reverse();
	 cout<<"'mylist' now contains the following values in its data nodes:"<<endl;
		 move_itr=mylist.begin(); // mylist.begin assigns memory address of the data field from first node to move_itr ('move_itr' is an address storage object)
		for(size_t i=0; i<mylist.size();i++) //
		 {
			cout<<*move_itr<<endl;
			move_itr++; // make sure the increment is after output or first node data won't be shown
		 }

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// y.unique() ; leaves only one copy of a node that is adjacent to a node with the same value in its data field                    //
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	mylist.unique();
	 cout<<"'mylist' now contains the following values in its data nodes:"<<endl;
		 move_itr=mylist.begin(); // mylist.begin assigns memory address of the data field from first node to move_itr ('move_itr' is an address storage object)
		for(size_t i=0; i<mylist.size();i++) //
		 {
			cout<<*move_itr<<endl;
			move_itr++; // make sure the increment is after output or first node data won't be shown
		 }
	cout<<"Now how many nodes does 'mylist' now contain?: "<< mylist.size()<<endl;

	///////////////////////////////////////////////////
	// y.sort() ; sort list in ascending order	     //
	///////////////////////////////////////////////////

	mylist.sort();
	cout<<"'mylist' now contains the following values in its data nodes:"<<endl;
		 move_itr=mylist.begin(); // mylist.begin assigns memory address of the data field from first node to move_itr ('move_itr' is an address storage object)
		for(size_t i=0; i<mylist.size();i++) //
		 {
			cout<<*move_itr<<endl;
			move_itr++; // make sure the increment is after output or first node data won't be shown
		 }

	return 0;
}

