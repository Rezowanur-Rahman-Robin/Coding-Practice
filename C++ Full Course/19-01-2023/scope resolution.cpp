#include<bits/stdc++.h>
using namespace std;

class Rectangle {
  int length;
  int width;

  public:

  // get and set for length
  void setLength(int l);
  int getLength();

  // get and set for width
  void setWidth(int w);
  int getWidth();

  int area();
};


void Rectangle::setLength(int l){
  length = l;
}
int Rectangle::getLength(){
  return length;
}

void Rectangle::setWidth(int w){
  width = w;
}
int Rectangle::getWidth(){
  return width;
}

int Rectangle::area(){
  return length * width;
}


int main(){
Rectangle r1;
r1.setLength(5);
r1.setWidth(3);
cout<<r1.getLength()<<endl;
cout<<r1.getWidth()<<endl;
cout<<r1.area()<<endl;

return 0;

}
