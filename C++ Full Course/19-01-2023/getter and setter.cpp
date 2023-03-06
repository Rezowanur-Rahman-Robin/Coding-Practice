#include<bits/stdc++.h>
using namespace std;

class Rectangle {
  int length;
  int width;

  public:

  // get and set for length
  void setLength(int l){
  length = l;
}
  int getLength(){
  return length;
}

  // get and set for width
  void setWidth(int w){
  width = w;
}
  int getwidth(){
  return width;
}

  int area(){
  return length * width;
}

};

int main(){

Rectangle r1;
r1.setLength(5);
r1.setWidth(3);
cout<<r1.getLength()<<endl;
cout<<r1.getwidth()<<endl;
cout<<r1.area()<<endl;

return 0;
}



