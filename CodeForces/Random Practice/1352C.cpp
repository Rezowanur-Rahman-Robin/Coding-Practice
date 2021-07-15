#include<cstdio>
using namespace std;

int main(){
	int t,n,k,cnt,temp;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		cnt=0;
		while(1){
			temp=k/n-cnt;
			if(!temp){
				break;
			}
			k+=temp;
			cnt+=temp;
		}
		printf("%d\n",k);
	}
	return 0;
}
