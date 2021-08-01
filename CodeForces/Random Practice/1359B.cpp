#include <stdio.h>
char map[105][1005];
int main(){
	int t,n,m,x,y,i,j,cnt1,cnt2,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&n,&m,&x,&y);
		for(i=0;i<n;i++)scanf("%s",map[i]);
		cnt1=cnt2=0;
		for(i=0;i<n;i++){
			j=0;
			while(j<m){
				if(map[i][j]=='.'&&map[i][j+1]=='.')cnt2++,j+=2;//2 block quantity statistics
				 else if(map[i][j]=='.')cnt1++,j+=1;//1 block quantity statistics
				 else j+=1;//Don't forget here, you may encounter the situation of'*'
			}
		}
		 if(x<=y/2)ans=x*(cnt1+cnt2*2);//All use x for billing
		 else ans=x*cnt1+y*cnt2;//x,y are billed separately
		printf("%d\n",ans);
	}
	return 0;
}
