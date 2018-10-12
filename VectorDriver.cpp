/*
* Brandon Steege
* 10/11/2018
* DESC: A test bed for the new code on VectorDriver.h
*		The added code ensures that the new functions are working as they should be
*/

#include "VectorDriver.h"
using std::cin;

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);
	vector<short> test(0);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;
	
	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	/////////
	cout << "\nSTART OF NEW CODE\nAdding to the vector: ";
	add_numbers(test); //running add_numbers function on the vector test
	add_numbers(test);//repeating
	print(test);//Printing Test
	cout << endl;
	
	cout << "print_even Function: ";
	print_even(test);//Testing print_even
	cout << endl;
	//
	cout << "is_present:\n";
	cout << "Please enter a number: ";
	short value(0);
	cin >> value; //user is inputing a value
	is_present(test, value); //testing is_present
	
	//
	cout << "std::sort function:\n";
	vector<short> sort_vector(0); //new vector called short_vector
	for (int i(0); i < 5; i++) //initializing for-loop
	{
		int random = rand() % 100 + 1; //initializing random to a random number between 1 and 100
		sort_vector.push_back(random); // adding random to the vector a total of 5 times 
	}

	cout << "Before the Sort: ";
	print(sort_vector); //printing vector before I run the sort function
	cout << endl;

	cout << "After the Sort: ";
	std::sort(sort_vector.begin(), sort_vector.end()); // sorting the vector with the sort function
	print(sort_vector); // printing after the sort
	cout << endl;

	system("pause");
	return 0;
}
