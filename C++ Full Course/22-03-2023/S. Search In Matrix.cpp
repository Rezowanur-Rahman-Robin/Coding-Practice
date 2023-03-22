#include<bits/stdc++.h>
using namespace std;

int main(){

int m,n,x;
cin>>m>>n;
int arr[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    cin>>arr[i][j];
}
}
cin>>x;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    if(x==arr[i][j]){
        cout<<"will not take number"<<endl;
        return 0;
    }
}
}

cout<<"will take number"<<endl;

return 0;
}
