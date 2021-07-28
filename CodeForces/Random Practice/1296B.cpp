
#include <stdio.h>
int main(){
	int t,n,sum;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n),sum=0;
		while(n>=10){
			sum+=n/10*10;
			n=n/10+n%10;
		}
		sum+=n;
		printf("%d\n",sum);
	}
	return 0;

}

