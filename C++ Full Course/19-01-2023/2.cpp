// C++ program to demonstrate array of strings using
// array of strings.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Initialize String Array
	string colour[4]
		= { "Blue", "Red", "Orange", "Yellow" };

	// Print Strings
	for (int i = 0; i < 4; i++)
		cout << colour[i] << "\n";
}

