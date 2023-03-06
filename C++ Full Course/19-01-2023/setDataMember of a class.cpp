#include <iostream>
#define PI 3.1416
using namespace std;

class Circle {
  private:
    string mod = "debug";
    // int arr[] = {1, 2, 3, 4, 5};
    int radius = 1;

  public:
    void setRadius(int r) {
      if ( r >= 0 ) {
        radius = r;
      }
    }

    int getRadius() {
      return radius;
    }

    double getArea() {
      return PI * radius * radius;
    }
};

int main() {
  Circle c;
  c.setRadius(10);
  cout << "The area of a circle of radius " << c.getRadius() << " is " << c.getArea() << endl;
  return 0;
}
