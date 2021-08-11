#include<bits/stdc++.h>
using namespace std;

//creating a class Student
 class Student{



  int age; //default is private

public:

    int rollNumber;

    //default constructor

    Student(int rollNumber,int age){
      cout<<"Using this keyword Constructor is called."<<endl;

      this->rollNumber = rollNumber;
      this->age = age;
    }



    void display(){
    cout<<"AGE:"<<age<<" ROLL:"<<rollNumber<<endl;
    }




};


int main(){

Student s1(45,15);

s1.display();



return 0;
}



