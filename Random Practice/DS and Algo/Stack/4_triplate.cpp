
#include<bits/stdc++.h>
using namespace std;

template<typename T, typename V, typename S>
class triple{
   T x;
   V y;
   S z;
   public:
       void setX(T x){
           this->x = x;
       }
       T getX(){
           return x;
       }
       void setY(V y){
           this->y = y;
       }
       V getY(){
           return y;
       }
       void setZ(S z){
           this->z = z;
       }
       S getZ(){
           return z;
       }
};

int main(){

    triple<int,char,double> p;
    p.setX(1);
    p.setY('A');
    p.setZ(3.56);
    cout<<p.getX()<<endl;
    cout<<p.getY()<<endl;
    cout<<p.getZ()<<endl;
}
