#include<bits/stdc++.h>
using namespace std;

//creating a class Student
 class Student{



  int age; //default is private

public:
    int rollNumber;

    void displayAge(){
    cout<<" "<<age<<endl;
    }

    int getAge(){
     return age;
    }

    void setAge(int n, int password){

        if(password !=1234){
            return;
        }

        if(n<0){
            return;     //age can't never be a negative number. without setter anyone can change the age to negative.But not age never be a negative number.

        }

        age=n;

    }



};


int main(){

Student s1,s2;

s1.setAge(20,1234);
s2.setAge(30,1234);

s1.displayAge();
s2.displayAge();

cout<<"Getting by getter function:"<<s1.getAge()<<endl;

return 0;
}

