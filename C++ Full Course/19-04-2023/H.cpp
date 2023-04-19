#include<bits/stdc++.h>
using namespace std;
void miniMaxSum(long long int arr[5])
{

    long long int minimum=0,maximum=0;
    sort(arr,arr+5);
   for(int i=1;i<5;i++){
    maximum += arr[i];
   }

    for(int i=0;i<4;i++){
    minimum += arr[i];
   }
    cout<<minimum<<" "<<maximum<<endl;


}

int main()
{
    long long int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    miniMaxSum(arr);
}
