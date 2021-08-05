#include<bits/stdc++.h>
using namespace std;

 int main()
{
    int t;
    long long int a,b,n,s,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a>>b>>n>>s;

        long long int d = s / n;
		d = min(d, a);

		if (s - n * d <= b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
    }
    return 0;
}
