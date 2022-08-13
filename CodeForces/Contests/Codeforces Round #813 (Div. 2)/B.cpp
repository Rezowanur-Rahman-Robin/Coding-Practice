#include<bits/stdc++.h>
using namespace std;



int main(){
int t;
cin>>t;

while(t--){
    int n;

    cin>>n;
    vector<int> vec;

    for(int i = 0; i<n;i++){
        vec.push_back(i+1);
    }


    for(int i=n-1;i>=1;i-=2)
       {
           swap(vec[i],vec[i-1]);
       }
    for(auto i:vec)
       {
           cout<<i<<" ";
       }
    cout<<endl;


}


return 0;
}

