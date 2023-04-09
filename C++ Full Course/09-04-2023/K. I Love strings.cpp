#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string A,B;
    cin>>A>>B;
    int len = max(A.length(),B.length());
    for(int i=0;i<len;i++){
        if(i<A.length()){
            cout<<A[i];
        }
        if(i<B.length()){
            cout<<B[i];
        }
    }
    cout<<endl;

}

return 0;
}
