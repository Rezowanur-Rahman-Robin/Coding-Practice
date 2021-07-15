
#include<bits/stdc++.h>
using namespace std;

int t,i=0;

bool comparison(const pair<long long,long long> &a,const pair<long long,long long> &b){
    return a.first<b.first;
}
int main(){

 cin>>t;

 while(i<t){

    long long A,B,n;
    cin>>A>>B>>n;
   long long arr[n],arr2[n];
   vector< pair<long long,long long > > ar;

    for(int j=0;j<n;j++){
        cin>>arr[j];

    }
    for(int j=0;j<n;j++){
        cin>>arr2[j];


    }

    for(int j=0;j<n;j++){
        ar.push_back( make_pair(arr[j],arr2[j]) );

    }

    sort(ar.begin(),ar.end(),comparison);


    bool check=true;
    for(int j=0;j<n;j++){
         while(ar[j].second>0){
            B=B-ar[j].first;
            ar[j].second=ar[j].second-A;

         }

         if(B<=0 && abs(B)>ar[n-1].first){
            check=false;
            break;
         }


    }
    if(check){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
     }


    i++;
 }
}
