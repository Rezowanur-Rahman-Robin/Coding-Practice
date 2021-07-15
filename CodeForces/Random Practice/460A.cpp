#include<bits/stdc++.h>
using namespace std;

int main(){

 int n,m,i,count_day=0;
 cin>>n>>m;
 i=1;
 while(n>0){
    n--;
    count_day++;

    if(i%m==0){
        n++;
    }

    i++;
 }

 cout<<count_day<<endl;
}
