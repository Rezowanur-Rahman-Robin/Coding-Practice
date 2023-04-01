#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
char arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int i,j;
cin>>i>>j;
i--;
j--;
if((i-1>=0)&&(arr[i-1][j]=='.')
   || (i+1<n)&&(arr[i+1][j]=='.')
   || (j+1<m)&&(arr[i][j+1]=='.')
   || (j-1>=0)&&(arr[i][j-1]=='.')
   || (i-1>=0 && j-1>=0)&&(arr[i-1][j-1]=='.')
   || (i+1<n && j+1<m)&&(arr[i+1][j+1]=='.')
   || (i-1>=0 && j+1<m)&&(arr[i-1][j+1]=='.')
   || (i+1<n && j-1>=0)&&(arr[i+1][j-1]=='.')
   ){
    cout<<"no"<<endl;
   }else{
    cout<<"yes"<<endl;
   }

}
