#include<bits/stdc++.h>
using namespace std;

class Student{

  int age;
  char *name;

  public:
      Student(int age,char *name){
      this->age=age;
      //this->name=name; this is the shallow copy

      //deep copy
      this->name = new char[strlen(name) + 1];
      strcpy(this->name,name);
      }

      void display(){
      cout<<name<<" "<<age<<endl;
      }




};

int main(){

    char name[]="robin";
    Student s1(20,name);

    s1.display();

    name[4]='s';
    Student s2(30,name);
    s2.display();

    s1.display();

    //when we change the name[4] then parameter of s1 is also changed.
    //because our pointer inside the class is pointing the same address for both the object .
    //so, here we have shallow copy
    //we can solve it by deep copy;

    //shallow copy = copy the address of 0th index only
    //deep copy = copy the entire array

return 0;
}
