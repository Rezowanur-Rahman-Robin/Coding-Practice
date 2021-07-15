#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int Xa,Ya,Xb,Yb,Xf,Yf,diffX,diffY;

    cin>>Xa>>Ya>>Xb>>Yb>>Xf>>Yf;

    diffX=abs(Xa-Xb);
    diffY=abs(Ya-Yb);


    if(diffX==0 && ( (Ya<Yf && Yf<Yb) || (Yb<Yf && Yf<Ya) )){
                 cout<<diffX+diffY+2<<endl;
            }else if(diffY==0 && ( (Xa<Xf && Xf<Xb) || (Xb<Xf && Xf<Xa ))){
                 cout<<diffX+diffY+2<<endl;
            }else{
            cout<<diffX+diffY<<endl;
            }
}

return 0;
}
