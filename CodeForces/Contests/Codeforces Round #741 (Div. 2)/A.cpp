#include<bits/stdc++.h>
using namespace std;

///another way
void Solve() {
  ll l, r, a, b;
  cin >> l >> r;
  a = r;
  b = max(r/2 + 1, l);
  cout << a%b << endl;
}

int main(){

int t;
cin>>t;
int j=0;

while(j<t){
  long long n,k,i;
       cin>>n>>k;
       i=(k+2)/2;
       if(n>i)cout<<k-n<<endl;
       else cout<<k-i<<endl;


j++;
}




}
