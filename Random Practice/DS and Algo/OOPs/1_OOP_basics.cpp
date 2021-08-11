#include<bits/stdc++.h>
using namespace std;

//creating a class Student
 class Student{

public:

  int rollNumber;
  int age;

private:
    int phoneNumber;

};


int main(){

    //creating objects statically
    Student s1,s2;


    //creating object dynamically
    Student *s= new Student;
    Student *t= new Student;

    s1.age=5;
    cout<<s1.age<<endl;


    (*s).age=24;

    //another way
    t->age=21;
    cout<<(*t).age<<endl;
    cout<<s->age<<endl;

return 0;
}
