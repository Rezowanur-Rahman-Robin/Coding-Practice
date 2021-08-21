#include<bits/stdc++.h>/
using namespace std;

class Student{

   public:

       int rollNumber;
       int age;
       static int totalStudents; ///Static means, it belongs to class not a single object. Whenever we create a new object only the non-static object will be called;


};
    int Student::totalStudents=10;

int main(){

    Student s1;

    cout<<s1.rollNumber<<" "<<s1.age<<endl;



    cout<<Student::totalStudents<<endl;


return 0;
}
