#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);

        for(int i=0;i<numRows;i++){
            result[i].resize(i+1,1);
            for(int j=1;j<i;j++){
                result[i][j]=result[i-1][j-1]+result[i-1][j];
            }
        }

        return result;
    }
};

int main(){

vector<vector<int>> vec;
Solution s;
vec = s.generate(5);

for(auto i : vec){
    for(auto j : i){
        cout<<j<<" ";
    }
    cout<<endl;
}

}
