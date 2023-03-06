#include <iostream>
using namespace std;

class Circle{
  double radius;
  double pi;

  public:
  Circle (){
    radius = 0;
    pi = 3.142;
  }
  Circle(double r){
    radius = r;
    pi = 3.142;
  }

  double getRadius(){
    return radius;
  }

  double area(){
    return pi * radius * radius;
  }

  double perimeter(){
    return 2 * pi * radius;
  }
};

int main() {
  Circle c(5);
  double x = c.getRadius();
  double area = 3.1416*x*x;
  cout << "Area: " << area << endl;
  cout << "Area: " << c.area() << endl;
  cout << "Perimeter: " << c.perimeter() << endl;
}
