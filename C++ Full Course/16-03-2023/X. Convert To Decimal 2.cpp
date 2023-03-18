#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int result = 0;
    int i = 0;
    bool finish = false;

    while(n>0){
        int reminder = n % 2;
        n = n/2;
        if(reminder){
           result += round(pow(2,i));
           i++;
        }
    }
    cout<<result<<endl;
}


return 0;
}
