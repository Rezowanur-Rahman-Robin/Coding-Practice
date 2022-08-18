#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
    long double a,b,c,d,w,x,y,z;
    cin>>a>>b>>c>>d;
    if(a/b<c/d){
        w = (b*c)/(a*d);
    }else {
        w = (a*d)/(b*c);
    }
    //cout<<"w:"<<w<<endl;

    if(a/b == c/d){
        cout<<0<<endl;
    }else if( a==0 || c==0 ){
        cout<<1<<endl;
     }else if( w == floor(w)   ){
        cout<<1<<endl;
     }
     else{
        cout<<2<<endl;
     }
}


return 0;
}
