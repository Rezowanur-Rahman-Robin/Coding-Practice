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

};

int main(){


    //static approach
    cout<<"Static approach:"<<endl;

    Student s1(10,100);

    cout<<"S1:";
    s1.display();


    Student s2(s1);  //copy constructor
    // s2.student(s1)

    cout<<"S2:";
    s2.display();

    cout<<endl<<endl;


    //dynamic approach
    cout<<"Dynamic approach:"<<endl;

    Student *s3 = new Student(20,200);

    //static s4 is copying dynamic s3
    cout<<"Dynamic S3:";
    s3->display();

    Student s4(*s3);
    cout<<"Static S4:";
    s4.display();

    //dynamic s5 is copying dynamic s3

    Student *s5 = new Student(*s3);

    cout<<"Dynamic S3:";
    s3->display();
    cout<<"Dynamic s5:";
    s5->display();



 //dynamic s6 is copying static s1

    Student *s6 = new Student(s1);

    cout<<"Static S1:";
    s1.display();
    cout<<"Dynamic S6:";
    s6->display();

return 0;
}
