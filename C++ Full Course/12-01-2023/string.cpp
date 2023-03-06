// C++ Program to demonstrate the working of
// getline(), push_back() and pop_back()
#include <iostream>
#include <string> // for string class
using namespace std;

// Driver Code
int main()
{
	// Declaring string
	string str;

	// Taking string input using getline()
	getline(cin, str);

	// Displaying string
	cout << "The initial string is : ";
	cout << str << endl;

	// Inserting a character
	str.push_back('s');

	// Displaying string
	cout << "The string after push_back operation is : ";
	cout << str << endl;

	// Deleting a character
	str.pop_back();

	// Displaying string
	cout << "The string after pop_back operation is : ";
	cout << str << endl;


	string str2 = "geeksforgeeks is for geeks";

    // Displaying string
    cout << "The initial string is : ";
    cout << str2 << endl;

    // Resizing string using resize()
    str2.resize(13);

    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str2 << endl;

    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str2.capacity() << endl;

    // Displaying length of the string
    cout << "The length of the string is :" << str2.length()
         << endl;

    // Decreasing the capacity of string
    // using shrink_to_fit()
    str2.shrink_to_fit();

    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str2.capacity() << endl;

	return 0;
}

