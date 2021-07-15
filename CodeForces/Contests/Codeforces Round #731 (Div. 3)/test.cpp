#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;



// Function to demonstrate insert
void insertDemo(string str1, string str2)
{

    // Inserts str2 in str1 starting
    // from 6th index of str1
    str1.insert(6,1, 'a');
    cout << "Using insert : ";
    cout << str1;
}

// Driver code
int main()
{
    string str1("Hello World! ");
    string str2("GeeksforGeeks ");

  cout<<str1.insert(0,1,'a')<<endl;
  cout<<str1.insert(str1.length()-1,1,'a')<<endl;

    return 0;
}
