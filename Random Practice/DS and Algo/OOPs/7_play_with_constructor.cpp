#include<bits/stdc++.h>
using namespace std;
class Student{

    int age;


public:
    int rollNumber;

    Student(){
     cout<<"Constructor 1 called."<<endl;
    }

     Student(int age){

    this->age=age;

    cout<<"Constructor 2 called."<<endl;

    }

    Student(int age,int rollNumber){

    this->age=age;
    this->rollNumber=rollNumber;
    cout<<"Constructor 3 called."<<endl;

    }

     void display(){
    cout<<"AGE:"<<age<<" ROLL:"<<rollNumber<<endl;
    }

    ~Student(){
    cout<<"Destructor is called"<<endl;
    }

};

int main(){

    Student s1; //constructor 1 called

    Student s2(10);  //constructor 2 called;

    Student s3(10,100); //constructor 3 called

    Student s4(s3); //copy constructor is called

    s1=s2; //copy assignment operator is called

    Student s5=s3; //copy constructor is called.

//same as Student s5(s3)


return 0;
}
