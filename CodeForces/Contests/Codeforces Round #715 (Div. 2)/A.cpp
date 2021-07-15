#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){

    int n;
     cin>>n;
    int a[n];
    vector <int> even,odd;

    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i]%2==0){
            even.push_back(a[i]);
        }else{
            odd.push_back(a[i]);
        }
    }
    if(even.size()>odd.size()){
        for(int i=0;i<even.size();i++){
            cout<<even[i]<<" ";
        }
         for(int i=0;i<odd.size();i++){
            cout<<odd[i]<<" ";
        }
        cout<<endl;
    }else{
         for(int i=0;i<odd.size();i++){
            cout<<odd[i]<<" ";
        }
      for(int i=0;i<even.size();i++){
            cout<<even[i]<<" ";
        }
         cout<<endl;

     }


}


}
