#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int i=1;
    while(i<=n){
        for(int j=0;j<=n-i;j++){
            int myMax = arr[j];
            for(int k=j;k<j+i;k++){
                if(arr[k]>myMax){
                    myMax = arr[k];
                }

            }
            cout<<myMax<<" ";
        }


        i++;
    }
    cout<<endl;

}

return 0;
}
