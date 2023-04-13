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
    void findResult(int n,int x,vector<string> &arr,int &ans){
        if(x>=n){
            ans++;
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
    int totalNQueens(int n) {
         int result;
         vector<string> initialState;
         for(int i=0;i<n;i++){
            string temp ="";
            for(int j=0;j<n;j++){
                temp+='.';
            }
            initialState.push_back(temp);

         }
         result=0;

        findResult(n,0,initialState,result);

        return result;
    }
};
int main(){

Solution s;
int res=s.totalNQueens(4);

        cout<<res<<endl;



return 0;
}

