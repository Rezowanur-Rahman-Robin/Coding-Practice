#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n==0){
         return false;

        }
        else{
            return (ceil(log2(n)) == floor(log2(n)) );
        }

    }
};

int main(){

int n;
cin>>n;

Solution s;

if(s.isPowerOfTwo(n)){
    cout<<"TRUE"<<endl;
}else{
    cout<<"FALSE"<<endl;
}

return 0;
}
