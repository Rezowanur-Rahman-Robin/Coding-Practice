#include<bits/stdc++.h>
using namespace std;


 bool isPalindrome(long x) {

        long xCopy = x;

        if(x>=0){

        long reverseX=0;
        long reminder;

        while(x!=0){
            reminder = x % 10;
            reverseX = reverseX * 10 + reminder;
            x /= 10;
        }

        if(xCopy == reverseX){
            return true;
        }

        return false;


        }

        return false;


    }

int main(){

int n;

cin>>n;

cout<<isPalindrome(n)<<endl;

return 0;
}
