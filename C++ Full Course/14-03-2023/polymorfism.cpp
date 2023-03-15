
#include <iostream>
using namespace std;

// A simple Shape interface which provides a method to get the Shape's area
class Shape {
  public:
  virtual float getArea()=0;
};

// A Rectangle is a Shape with a specific width and height
class Rectangle : public Shape {   // derived form Shape class
  private:
  float width;
  float height;

  public:
  Rectangle(float wid, float heigh) {
    width = wid;
    height = heigh;
  }
  float getArea(){
    return width * height;
  }
};

// A Circle is a Shape with a specific radius
class Circle : public Shape {
  private:
  float radius;

  public:
  Circle(float rad){
    radius = rad;
  }
  float getArea(){
    return 3.14159f * radius * radius;
  }
};

int main() {
  Rectangle r1(2, 6),r2(1, 6),r3(2, 7);    // Creating Rectangle object
  // Referencing Shape class to Rectangle object

  Circle c1(5),c2(3),c3(2),c4(5);    // Creating Circle object
   // Referencing Shape class to Circle object

//Shape myArr = {r1,c1,r2,c2,r3,c3,c4};
Shape* sArray[5];
sArray[0] = &r1;
sArray[1] = &r2;
sArray[2] = &r3;
sArray[3] = &c1;
sArray[4] = &c2;

for(int i=0;i<5;i++){

    cout<<"Area:"<<sArray[i]->getArea()<<endl;
}




}
