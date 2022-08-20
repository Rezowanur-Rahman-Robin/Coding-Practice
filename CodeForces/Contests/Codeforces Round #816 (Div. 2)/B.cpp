
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
    long long n,k,b,s;
    cin>>n>>k>>b>>s;
    vector<long long> vec;
    long long lastElement= b*k;

    long long remaining = s - lastElement;
    vec.push_back(lastElement);
    int i=0,subs;
    if(b*k>s){
        cout<<-1<<endl;
    }else{
    while(i<n-1){
            //cout<<"Remaining"<<remaining<<endl;

         if(remaining>0){
            if(remaining<k){
                subs = remaining;
            }else{
                subs = k-1;
            }
            remaining = remaining - subs;
            vec.push_back(subs);
         }else{
            vec.push_back(0);
         }
        i++;
    }
    if(remaining>0){
        cout<<-1<<endl;
    }else if(remaining==0){
      reverse(vec.begin(),vec.end());
      for(auto i:vec){
        cout<<i<<" ";
      }
    cout<<endl;
    }
    }



}


return 0;
}

