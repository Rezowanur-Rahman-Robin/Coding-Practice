#include <iostream>
#define PI 3.1416
using namespace std;

class Sphere {
  private:
    const double density;
    double radius;
  public:

    Sphere(double r) : radius(r), density(3.5) {
      // The following initialization wouldn't work, because density is a const
      // density =  4.3;
    }

    double volume() {
      return 4 * PI * radius * radius * radius / 3;
    }
    double mass() {
      return density * volume();
    }
};
int main() {
  // your code goes here
  Sphere s(3.2);
  cout << "Volume: " << s.volume() << ", mass: " << s.mass();
  return 0;
}
