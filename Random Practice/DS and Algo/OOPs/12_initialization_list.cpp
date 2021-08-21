#include<bits/stdc++.h>
using namespace std;

class Student{




  public:
       int age;
       const int rollNumber;
       int &x; ///age reference variable


       Student(int a,int r) : age(a) ,rollNumber(r), x(this->age){
       ///rollNumber = r;
       }

       void display(){
       cout<<age<<" "<<rollNumber<<endl;
       }


};

int main(){

Student s1(10,100);
///s1.age=10;
///s1.rollNumber=100;
s1.display();
return 0;
}

