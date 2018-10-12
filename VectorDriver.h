#pragma once
/* File: VectorDriver.cpp
* Athr: Dimitri Zarzhitsky
* Date: October 16, 2002
*
* Desc: provides the basic framework and examples for an introduction to
*       the STL::vector, iterators, and the algorithms facilities.
*
* Edited by: Rafe Cooley
* Date: October 1, 2017 (the future)
*
* Edited by: Brandon Steege
* Date: October 11, 2018
* Desc:
* The added code allows for multiple new functions that can be used to manipulate vectors and their data
*/
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

/* fill vector that has pre-allocated space with consecutive numbers*/
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}

/* print our vector in a fancy way */
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}
/* add_numbers adds a random number to the vector a total of 10 times. */
void add_numbers(vector<short> &data)
{

	for (int i(0); i < 10; i++) //for loop to add 10 times
	{
		int random = rand() % 100 + 1; // initializing random to a random number between 1 and 100
		data.push_back(random); // adding random to the vector
	}
}
/* print_even prints out every element in the vector with an even position in the vector */
void print_even(const vector<short> &data) 
{
	if (data.empty()) 
	{
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) //initializing for loop to only run for as many counts as the vector is long
		{
			if (i % 2 == 0) //using modulo to determine the even values
			{
				cout << ", " << data.at(i); //printing each element that is at an even loaction
			}
		}
		cout << ">";
	}
}
/* Using iterators to see if a user inputed value is equal to a value in the vector */
bool is_present(const vector<short> &data, short value) 
{
	std::vector<short>::const_iterator iter = data.begin(); // initializing the iterator to be at the start of the vector

	while (iter != data.end()) //while loop runs until the iterator reaches teh end of the vector
	{
		if (*iter == value) //returns true if iterator is equal to the value given by user
		{
			cout << "True!" << endl;
			return true;
		}

		iter++; // returns false for any other reason
	}
	cout << "False! " << endl;
	return false;
}

