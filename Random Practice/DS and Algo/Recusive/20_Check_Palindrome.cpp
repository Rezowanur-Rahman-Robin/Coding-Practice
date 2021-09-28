#include<bits/stdc++.h>
using namespace std;

bool checkPalindrom(int n,int reminder, int m ,int targetNumber){
    if(n==0){
        if(targetNumber==m){
            return true;
        }else{
            return false;
        }
    }
     reminder = n % 10;
     m = m * 10 + reminder;
     n = n/10;

 return checkPalindrom(n,reminder,m , targetNumber);
}

int main(){

int n;
cin>>n;

if(checkPalindrom(n,0,0,n)){
    cout<<"Palindrome."<<endl;
}else{
    cout<<"Not Palindrome."<<endl;
}

return 0;
}

///another way
/**
#include<iostream>
using namespace std;

bool checkPal(int a[],int s,int e){
    if(s > e){
        return true;
    }
    if(a[s] == a[e]){
        return checkPal(a,s+1,e-1);
    }else{
      return false;
    }
}

int main(){
  int a[] = {1,2,3,4,3,2,1};
  cout<<checkPal(a,0,6);
  return 0;
}
**/
