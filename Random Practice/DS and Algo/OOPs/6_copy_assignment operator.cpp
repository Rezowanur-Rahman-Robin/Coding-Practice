#include<bits/stdc++.h>
using namespace std;

class Student{

    int age;


public:
    int rollNumber;

    Student(int age,int rollNumber){

    this->age=age;
    this->rollNumber=rollNumber;

    }

     void display(){
    cout<<"AGE:"<<age<<" ROLL:"<<rollNumber<<endl;
    }

    ~Student(){
    cout<<"Destructor is called"<<endl;
    }

};

int main(){


    Student s1(10,100);
    Student s2(20,200);
    Student *s3 = new Student(30,300);
    //copy assignment operator
    s2=s1;
    *s3=s1;
    s2= *s3;

delete s3;//for dynamic memory we have to use the keyword delete.It's not deleted automatically.As s3 is not a object it's just like a pointer.when we delete this pointer,the s3 object will be deleted.




return 0;
}

