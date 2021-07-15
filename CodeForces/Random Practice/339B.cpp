#include<bits/stdc++.h>
using namespace std;

int main(){

long long n,m;
cin>>n>>m;
long long i=0,k=0;
long long a[m];

while(i<m){

    cin>>a[i];

    i++;
}
k=a[0]-1;
for(i=0;i<m-1;i++){

            if(a[i]>a[i+1]){
                k+=((n-a[i]) + a[i+1]);

            }
            else{
                k+=(a[i+1]-a[i]);

            }


}
cout<<k<<endl;

}
