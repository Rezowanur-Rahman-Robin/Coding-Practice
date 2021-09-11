#include <bits/stdc++.h>
using namespace std;


// Utility function to find
// GCD of 'a' and 'b'
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Returns LCM of array elements
int findlcm(int arr[], int n)
{
    // Initialize result
    int ans = arr[0];

    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
}


// Returns LCM of array elements
int findgcd(int arr[], int n)
{


    int GCD = 1;
    int minNumber = INT_MAX;
    for (int i = 0; i < n-1; i++){


            minNumber = arr[i] < minNumber? arr[i] : minNumber;
    }







    for (int i = minNumber; i > 0; i--){

            bool isGcd=true;
            for(int j=0; j<n;j++){
                if(arr[j]% i != 0){
                    isGcd = false;
                    break;
                }
            }

            if(isGcd){
                    GCD = i;
                return GCD;
            }
    }







    return GCD;
}

// Driver Code
int main()
{

    int n ;
    cout<<"Number of Elements:";
    cin>>n;

    int arr[n];

    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }

    cout<<"LCM:"<<findlcm(arr, n)<<endl;
     cout<<"GCD:"<<findgcd(arr, n)<<endl;
    return 0;
}
