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
	add_numbers(test);
	add_numbers(test);
	print(test);
	cout << endl;
	//
	cout << "print_even Function: ";
	print_even(test);
	cout << endl;
	//
	cout << "is_present:\n";
	cout << "Please enter a number: ";
	short value(0);
	cin >> value;
	is_present(test, value);
	
	//
	cout << "std::sort function:\n";
	vector<short> sort_vector(0);
	for (int i(0); i < 5; i++)
	{
		int random = rand() % 100 + 1;
		sort_vector.push_back(random);
	}

	cout << "Before the Sort: ";
	print(sort_vector);
	cout << endl;

	cout << "After the Sort: ";
	std::sort(sort_vector.begin(), sort_vector.end());
	print(sort_vector);
	cout << endl;

	system("pause");
	return 0;
}
