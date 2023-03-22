
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
    int count = 0;
    while(i<=n){

        for(int j=0;j<=n-i;j++){
            count++;
            for(int k=j;k<j+i-1;k++){
                    //cout<<arr[k]<<" "<<arr[k+1]<<endl;

                if(arr[k]>arr[k+1]) {
                   count--;
                   break;
                }

            }
             //cout<<"Count:"<<count<<endl;;

        }


        i++;
    }
    cout<<count<<endl;

}

return 0;
}
