#include<bits/stdc++.h>
using namespace std;

class A{

public:

int value;
  A& operator ^ (int b){
    value = value + b;
    return * this;
  }

    A(int n){
    value = n;
    }

};

A& operator ^ (A& a, A& b){
   a.value + b.value;
   return a;
 }


int main(){
A a(5),b(6);
a = a^b;
cout<<a^b<<endl;
}
