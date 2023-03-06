#include <iostream>
#include <string>
using namespace std;

class Date {
  int day;
  int month;
  int year;

  public:
  // Default constructor
  Date(){
    // We must define the default values for day, month, and year
    day = 0;
    month = 0;
    year = 0;
    cout<<"This is default constructor"<<endl;
  }

  // Parameterized constructor
  Date(int d, int m, int y){
    // The arguments are used as values
    day = d;
    month = m;
    year = y;
    cout<<"This is Parameterized constructor"<<endl;
  }

  // A simple print function
  void printDate(){
    cout << "Date: " << day << "/" << month << "/" << year << endl;
  }
};

int main(){
  // Call the Date constructor to create its object;
  Date p;
  Date d(1, 8, 2018); // Object created with specified values!
  p.printDate();
  d.printDate();
}

