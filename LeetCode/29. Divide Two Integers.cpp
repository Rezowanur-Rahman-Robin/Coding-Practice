#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int div, int divi) {
     bool minusCheck = (div>0 && divi<0) || (div<0 && divi >0);


       long dividend=abs(div),divisor=abs(divi);



        long k=0;
        for(long i=divisor;i<=dividend;i+=divisor){

            k++;
        }


        if(minusCheck){
            k= -k;
        }else{
        k= k;
        }






          return min(max(k,(long)INT_MIN),(long)INT_MAX);


    }
};

int main(){

int m,n;
cin>>m>>n;

Solution s1;

cout<<s1.divide(m,n)<<endl;

return 0;
}
