#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return x;
        int start=1, end=x,ans=0;
        while(start<=end){
            long long int mid=start + (end-start)/2;
            if(mid*mid<=x){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};

int main(){

  int n;
  cin>>n;

  Solution s;
  cout<<s.mySqrt(n)<<endl;
}
