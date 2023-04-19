#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
    int A,B;
    cin>>A>>B;
    int i=1;
    while(1){

       if(i%2==0){
            if(i<=B){
                B -= i;
            }else{
              cout<<"Limak"<<endl;
              break;
            }
       }else{
           if(i<=A){
                A -= i;
            }else{
              cout<<"Bob"<<endl;
              break;
            }

       }

    i++;
    }
}

return 0;
}
