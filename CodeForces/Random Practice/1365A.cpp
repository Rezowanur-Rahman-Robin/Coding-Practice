#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int MAXN = 55;
bool vx[MAXN],vy[MAXN];

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(vx,false,sizeof(vx));
        memset(vy,false,sizeof(vy));
        int n,m,x,cnt=0;
        cin >> n >> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> x;
                if(x) vx[i]=vy[j]=true;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;!vx[i] && j<m;j++){
                if(!vy[j]) cnt++,vx[i]=vy[j]=true;
            }
        }
        if(cnt&1) cout << "Ashish" << endl;
        else cout << "Vivek" << endl;
    }
}
