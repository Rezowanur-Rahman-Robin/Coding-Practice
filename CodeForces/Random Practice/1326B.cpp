#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll n;
	cin>>n;

	ll b[n];
	for(int i=0;i<n;i++)
		cin>>b[i];
	ll cx=0;
	ll a[n];
	a[0]=b[0];
	cx=a[0];

	for(int i=1;i<n;i++)
	{
		a[i]=cx+b[i];
		cx=max(cx,a[i]);
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

}
