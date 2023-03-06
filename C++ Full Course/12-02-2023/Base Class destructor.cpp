#include <iostream>
using namespace std;

// Base class
class Base {

    public:
    ~Base(){
      cout << endl << "Base class Destructor!" ;
    }
};


// Derived class
class Derived : public Base {
    public:

    ~Derived(){
      cout << endl << "Derived class Destructor!" ;
    }
};

// main function
int main() {
    // creating object of Derived Class
    Derived obj;

}
