#include<bits/stdc++.h>
using namespace std;

class Number{

   public:
       int n;

       Number(int n){
       this->n = n;
       }

       void print(){
        cout<<n<<endl;
       }

       Number add(Number f1){
         int result = n + f1.n;

         Number newCls(result);

         return newCls;
       }
/// Plus Operator Overloading
          Number operator+(Number f1){
         int result = n + f1.n;

         Number newCls(result);

         return newCls;
       }



/// == Operator Overloading
          bool operator==(Number f){
            return n==f.n;
          }


};

int main(){

Number f1(2),f2(3);

Number f3=f1.add(f2);

f1.print();
f2.print();
f3.print();

Number f4=f1+f3;
f4.print();

if(f1==f4){
    cout<<"Equal"<<endl;
}else{
    cout<<"Not Equal"<<endl;

}



return 0;
}
