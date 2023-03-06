#include<iostream>
using namespace std;
class MyClass{
public:
MyClass(){ cout<<"Constructing"<<endl; }
~ MyClass(){ cout<<"Destructing"<<endl; }
};
MyClass aFunction(MyClass m){
cout<<"In aFunction"<<endl;
return m;
}
int main()
{
cout<<"In Main"<<endl;
MyClass ob;
ob = aFunction(ob);
cout<<"The End"<<endl;
return 0;
}

