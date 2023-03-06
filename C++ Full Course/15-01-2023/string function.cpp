// C++ Program to demonstrate the working of
// begin(), end(), rbegin(), rend(), cbegin(), cend(), crbegin(), crend()
#include <iostream>
#include <string> // for string class
using namespace std;

// Driver Code
int main()
{
	// Initializing string`
	string str = "geeksforgeeks";

	// Declaring iterator
	std::string::iterator it;

	// Declaring reverse iterator
	std::string::reverse_iterator it1;
	cout<<"Str:"<<str<<"\n";
	// Displaying string
	cout << "The string using forward iterators is : ";
	for (it = str.begin(); it != str.end(); it++){
		if(it == str.begin()) *it='G';
		cout << *it;
	}
	cout << endl;


	str = "geeksforgeeks";
	// Displaying reverse string
	cout << "The reverse string using reverse iterators is "
			": ";
	for (it1 = str.rbegin(); it1 != str.rend(); it1++){
		if(it1 == str.rbegin()) *it1='S';
		cout << *it1;
	}
	cout << endl;


str = "geeksforgeeks";
//Displaying String
cout<<"The string using constant forward iterator is :";
for(auto it2 = str.cbegin(); it2!=str.cend(); it2++){
		//if(it2 == str.cbegin()) *it2='G';
		//here modification is NOT Possible
		//error: assignment of read-only location
		//As it is a pointer to the const content, but we can inc/dec-rement the iterator
		cout<<*it2;
}
cout<<"\n";


str = "geeksforgeeks";
//Displaying String in reverse
cout<<"The reverse string using constant reverse iterator is :";
for(auto it3 = str.crbegin(); it3!=str.crend(); it3++){
		//if(it2 == str.cbegin()) *it2='S';
		//here modification is NOT Possible
		//error: assignment of read-only location
		//As it is a pointer to the const content, but we can inc/dec-rement the iterator
		cout<<*it3;
}
cout<<"\n";



	return 0;
}

//Code modified by Balakrishnan R (rbkraj000)

