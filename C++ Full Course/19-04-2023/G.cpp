#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, A[3001], i;
	while(cin>>n) {
		for(i = 0; i < n; i++)
			cin>>A[i];
		int mark[3001] = {0}, flag = 0;
		for(i = 1; i < n; i++) {
                int d = abs(A[i] - A[i-1]);
			if(d<n)
				mark[d]++;
		}
		for(i = 1; i < n; i++)
			if(mark[i] == 0)
				flag = 1;
		if(flag)
			cout<<"Not jolly"<<endl;
		else
			cout<<"Jolly"<<endl;
	}
    return 0;
}


