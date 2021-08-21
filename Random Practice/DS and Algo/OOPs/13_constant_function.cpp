#include<bits/stdc++.h>
using namespace std;

class Test{

  public:
      int a;

      Test(int a){
       this->a=a;
      }

      //can be a const function
      int getA()const{
        return a;
      }
      //can not be a const function. as it is updating the value;
      int setA(int a){
        this->a = a;
      }
      //can be a const function. as it is not updating the value;
      void print()const{
         cout<<"A:"<<a<<endl;
      }

};

int main(){

    Test const p(5);
    p.print();
    ///p.setA(10);
    cout<<p.getA()<<endl;

return 0;
}
