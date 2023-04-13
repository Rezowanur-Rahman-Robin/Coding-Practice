#include <bits/stdc++.h>
#include <string>
using namespace std;

const int MAXN = 10005;

int freq[MAXN];

int main() {
    int n;
    cin >> n;

    string a[MAXN];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        cout<<hash<string>()(a[i])<<endl;

        freq[hash<string>()(a[i]) % MAXN]++;
    }

    for(int i=0; i<n; i++) {
        if(freq[hash<string>()(a[i]) % MAXN] != 0) {
            cout << a[i] << " occurs " << freq[hash<string>()(a[i]) % MAXN] << " times" << endl;
            freq[hash<string>()(a[i]) % MAXN] = 0;
        }
    }

    return 0;
}
