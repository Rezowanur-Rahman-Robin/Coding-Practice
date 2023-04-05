#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n-1);
        vector<int> a(n);
        set<int> st;
        for (int i = 0; i < n-1; i++) {
            cin >> b[i];
            st.insert(b[i]);
        }
        if(st.size()==1){
            for(int i=0;i<n;i++){
                cout<<b[0]<<" ";
            }
            cout<<endl;
            return 0;
        }
        a[0]=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==b[i]){
                a[i+1]=0;
            }else if(a[i]<b[i]){
                a[i+1]=b[i];
            }else{
                swap(a[i],a[i-1]);
                i--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

