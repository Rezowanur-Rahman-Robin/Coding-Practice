#include<bits/stdc++.h>
using namespace std;

//creating a class Student
 class Student{



  int age; //default is private

public:

    int rollNumber;

    //default constructor

    Student(){
      cout<<"Default Constructor is called."<<endl;
    }

    //parameterized constructor
    Student(int r,int a){
     cout<<"Parameterized Constructor is called"<<endl;
     rollNumber=r;
     age=a;
    }

    void display(){
    cout<<"AGE:"<<age<<" ROLL:"<<rollNumber<<endl;
    }




};


int main(){

Student s1(45,15),s2;

s1.display();



return 0;
}


