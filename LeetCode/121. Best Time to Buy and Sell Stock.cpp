#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = INT_MIN;
        int minnm = prices[0];
        for(int i=0;i<prices.size();i++){
            if(result<(prices[i]-minnm)){
                result = prices[i]-minnm;
            }
            if(prices[i]<minnm){
                minnm = prices[i];
            }
        }
        return result>0 ? result : 0;
    }
};

int main(){
Solution s;
vector<int> vec = {7,1,5,3,6,4};

cout<<s.maxProfit(vec)<<endl;


return 0;
}
