#include<stdio.h>
int main()
{
 int i,n,t,p=0;
 long long int fact;
 scanf("%d",&t);
 while(p<t){

 scanf("%d",&n);
 fact=1;
 for(i=1;i<=n;i++)
 {
  fact=fact*i;
 }
 printf("%lld\n",fact);

    p++;
 }

 return 0;
}
