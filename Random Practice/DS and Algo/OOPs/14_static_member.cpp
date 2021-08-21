#include<bits/stdc++.h>
using namespace std;

class Student{

    static int schoolRank;

   public:

       int rollNumber;
       int age;
       static int totalStudents; ///Static means, it belongs to class not a single object. Whenever we create a new object only the non-static object will be called;


       Student(){
        totalStudents++;
       }

       int getRollNumber(){
       return rollNumber;
       }

       static int getschoolRank(){
        return schoolRank;
       }

       static int setschoolRank(int s){
        schoolRank=s;
       }



};
    int Student::totalStudents=0;

int main(){

    Student s1;

    cout<<s1.rollNumber<<" "<<s1.age<<endl; //garbage value will be printed.



    cout<<Student::totalStudents<<endl;

    Student s2,s3,s4,s5;

    cout<<Student::totalStudents<<endl;


    Student::setschoolRank(1);

    cout<<Student::getschoolRank()<<endl;

return 0;
}
