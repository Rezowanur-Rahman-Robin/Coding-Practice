#include<bits/stdc++.h>
using namespace std;

template<typename T, typename V>
class Pair{
   T x;
   V y;
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
};

int main(){

    Pair<int,char> p;
    p.setX(1);
    p.setY('A');
    cout<<p.getX()<<endl;
    cout<<p.getY()<<endl;
}
