#include <bits/stdc++.h>
using namespace std;

const int N = 310;

int a[N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i = 0,j = n-1;i<=j;i++,j--) {
            if( i != j)
                cout << a[i] << ' ' << a[j] << ' ';
            else
                cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
