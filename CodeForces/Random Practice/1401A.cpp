#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{


    int k, n, t;

    cin >> t;
    for(;t--;)
    {
        cin >> n >> k;

        if(n < k)
            cout << k - n << endl;

        else if(n % 2 == k % 2)
            cout << 0 << endl;

        else
            cout << 1 << endl;
    }

    return 0;
}
