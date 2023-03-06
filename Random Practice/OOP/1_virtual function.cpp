#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw(); // Output: "Drawing a generic shape."
    delete s;
    return 0;
}
