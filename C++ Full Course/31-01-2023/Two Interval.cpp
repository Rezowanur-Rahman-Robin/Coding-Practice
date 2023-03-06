#include<iostream>
using namespace std;

int main(){

int a,b,c,d;
int x,y;
cin>>a>>b>>c>>d;

x = a>c? a: c;
y = b<d? b: d;

if(x<=y){
    cout<<x<<" "<<y<<endl;
}else{
    cout<<-1<<endl;
}

return 0;
}
