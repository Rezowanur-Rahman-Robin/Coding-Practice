#include<iostream>
using namespace std;

int main(){

float x,a,b;
cin>>a>>b;
x=a/b;
int intX= (int)x;
float checkingPoint = intX + 0.5;

if(a==b){
cout<<"floor "<<(int)a<<" / "<<(int)b<<" = 1"<<endl;
cout<<"ceil "<<(int)a<<" / "<<(int)b<<" = 1"<<endl;
cout<<"round "<<(int)a<<" / "<<(int)b<<" = 1"<<endl;
}else{

cout<<"floor "<<(int)a<<" / "<<(int)b<<" = "<<intX<<endl;
cout<<"ceil "<<(int)a<<" / "<<(int)b<<" = "<<intX+1<<endl;
if(x<checkingPoint){
cout<<"round "<<(int)a<<" / "<<(int)b<<" = "<<intX<<endl;
}else{
cout<<"round "<<(int)a<<" / "<<(int)b<<" = "<<intX+1<<endl;
}
}


return 0;
}
