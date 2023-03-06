#include <iostream>
using namespace std;

// Base class
class Base {

    public:
    Base(){
      cout << "Base class default constructor!" << endl;
    }
    // Base class's parameterised constructor
    Base(float i) {
        cout << "Base class parameterized constructor" << endl;
    }
};


// Derived class
class Derived : public Base {
    public:
    Derived(){
      cout << "Derived class default constructor!" << endl;
    }

    // Derived class's parameterised constructor
    Derived(float num): Base(num){
        cout << "Derived class parameterized constructor" << endl;
    }
};

// main function
int main() {
    // creating object of Derived Class
    Derived obj;
    cout << endl;
    Derived obj1(10.2);
}
