#include<bits/stdc++.h>
using namespace std;
class myClass{
protected:
int a,b;

public:
myClass(int a,int b){
this->a = a;
this->b = b;
}
virtual int add(){
cout<<"Called by parent class"<<endl;
return a+b;
}
virtual int subtr() final {
cout<<"Called by parent class"<<endl;
return a-b;
}

};

class child:public myClass{


public:

child(int a,int b)
: myClass(a,b){

}

 int add() override {
cout<<"Called by child class"<<endl;
return a+b;
}

 int subtr(int) {
cout<<"Called by child class"<<endl;
return a-b;
}
};

int main(){
myClass* cls = new child(1,3);



cout<<cls->subtr()<<endl;
//cout<<cls->subtr(5)<<endl;

}
