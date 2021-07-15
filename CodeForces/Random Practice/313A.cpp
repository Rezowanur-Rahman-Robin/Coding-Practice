#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

ll deleteLastDigit(ll n){
 return n/10;
}
ll deleteSecondLastDigit(ll n){
    ll temp1=n%10;
    n=n/10;
    ll temp2= n%10;

 return n-temp2+temp1;
}


int main(){
  ll n;
  cin>>n;


  if(n>=0){
    cout<<n<<endl;
  }else{
    ll deletable= max(deleteLastDigit(n),deleteSecondLastDigit(n));

    cout<<deletable<<endl;

    /*another way

     int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        cout << max(a, b) << endl;


    */

  }

}
