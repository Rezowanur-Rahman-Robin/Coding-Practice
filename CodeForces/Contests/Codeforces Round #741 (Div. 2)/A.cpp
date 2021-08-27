#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
int j=0;

while(j<t){
    long long l,r;
    cin>>l>>r;

    if( (r/1) <2){

        cout<<r%l<<endl;

    }else{

        if(l < r/2){
             l= r/2 +1;
        cout<<l<<" ";
        cout<<r%l<<endl;
        }else{
            cout<<l<<" ";
           cout<<r%l<<endl;
        }



        /*
      long long mx = INT_MIN;

    for(long long i=0; i<(r-l) ; i++){
        if(r % (l+i)>mx){
            mx = r % (l+i);
        }
        if((r-i)% l>mx){
            mx = (r-i)% l;
        }
    }


    cout<<mx<<endl;
        */

    }


j++;
}




}
