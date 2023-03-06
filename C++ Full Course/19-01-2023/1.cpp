
// C++ program to demonstrate array of strings using
// 2D character array
#include <iostream>
using namespace std;
int main()
{
	// Initialize 2D array
	char colour[4][10]
		= { "Blue", "Red", "Orange", "Yellow" };

 //colour[i][j]
 // i = no of string
 // j = max length of a string

	// Printing Strings stored in 2D array
	for (int i = 0; i < 4; i++)
		cout << colour[i] << "\n";

	return 0;
}
