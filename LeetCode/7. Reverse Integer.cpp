#include<bits/stdc++.h>
using namespace std;

 long long reverse(long long x) {

        long long reverseX=0,reminder;


              while(x!=0){

            reminder = x%10;
            reverseX = reverseX * 10 + reminder ;
            x /=10;
            }






         if(reverseX>= INT_MIN && reverseX <= INT_MAX ){

            return reverseX;

        }else{
                return 0;

        }




    }


int main(){
    int n;
    cin>>n;

    cout<<reverse(n)<<endl;




return 0;
}
