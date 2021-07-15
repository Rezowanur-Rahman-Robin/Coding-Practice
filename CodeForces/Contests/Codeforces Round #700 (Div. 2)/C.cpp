#include<bits/stdc++.h>
using namespace std;

int t,i=1;

int minFinder(int p,int q){
 return p>q?q:p;
}
int query(int i,int n){
 return rand() % (( n + 1 ) - 1);
}

int main(){

 cin>>t;
 int a[t];

 while(i<=t){




    a[i]=query(i,t);



    i++;
 }

 a[0]=std::numeric_limits<int>::max();

   for(int j=1;j<t;j++){
     if(a[j]<minFinder(a[j-1],a[j+1])){
        cout<<"! "<<j<<endl;
     }else{
        cout<<"? "<<j<<endl;
     }
   }
}

