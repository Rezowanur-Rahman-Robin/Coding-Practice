// CPP program to illustrate Pair in STL
#include <iostream>
#include <utility>
using namespace std;

// Driver Code
int main()
{
	// defining a pair
	pair<int, char> PAIR1;

	// first part of the pair
	PAIR1.first = 100;
	// second part of the pair
	PAIR1.second = 'G';

	cout << PAIR1.first << " ";
	cout << PAIR1.second << endl;

	pair<int,int> pr1=make_pair(2,3);

	cout << pr1.first << " ";
	cout << pr1.second << endl;

    pair<int,int> pr2={4,5};

	cout << pr2.first << " ";
	cout << pr2.second << endl;

	pr1.swap(pr2) ;

	cout<<endl;
    cout << pr1.first << " ";
	cout << pr1.second << endl;

	cout << pr2.first << " ";
	cout << pr2.second << endl;



	return 0;
}
