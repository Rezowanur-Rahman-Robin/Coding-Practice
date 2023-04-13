#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSafe(vector<string> arr,int x,int y,int n){
    for(int i=0;i<=x;i++){
        if(arr[i][y]=='Q') return false;
    }
    int p=x,q=y;
    while(x>=0&&y>=0){
        if(arr[x][y]=='Q') return false;

        x--;
        y--;
    }
    x=p;
    y=q;

    while(x>=0&&y<n){
        if(arr[x][y]=='Q') return false;

        x--;
        y++;
    }

    return true;
    }
    void findResult(int n,int x,vector<string> &arr,vector<vector<string>> &ans){
        if(x>=n){
            ans.push_back(arr);
            return;
        };

       for(int i=0;i<n;i++){
         if(isSafe(arr,x,i,n)){
            arr[x][i]='Q';

            findResult(n,x+1,arr,ans);

            arr[x][i]='.';
         }
       }
       return ;
    }
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>> result;
         vector<string> initialState;
         for(int i=0;i<n;i++){
            string temp ="";
            for(int j=0;j<n;j++){
                temp+='.';
            }
            initialState.push_back(temp);

         }

        findResult(n,0,initialState,result);

        return result;
    }
};
int main(){

Solution s;
vector<vector<string>> res=s.solveNQueens(4);
for(auto i: res){
    for(auto j:i){
        cout<<j<<endl;
    }
    cout<<endl;
}


return 0;
}
