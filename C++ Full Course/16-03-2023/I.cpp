#include<bits/stdc++.h>
using namespace std;

int getNumberLength(int num){
    int l = 0;

while(num>0){
    l++;
    num /=10;
}
return l;
}

int main(){

int n;
cin>>n;
int copyN = n;
int length=getNumberLength(n);
int result = 0;
int k=length-1;
while(n>0){
    int digit = n % 10;
    n /= 10;
    result = result + digit*round(pow(10,k)) ;
    k--;
}
if(result == copyN){
    cout<<result<<endl;
    cout<<"YES"<<endl;
}else{
    cout<<result<<endl;
    cout<<"NO"<<endl;
}

return 0;
}

