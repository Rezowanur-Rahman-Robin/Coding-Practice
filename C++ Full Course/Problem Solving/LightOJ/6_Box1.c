#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int k=1;k<n+1;k++)
    {
      int t;
    scanf("%d",&t);
    for(int i=1;i<t+1;i++)
     {
        for(int j=1;j<t+1;j++)
        {
            printf("*");
        }
           printf("\n");
     }
    if(k!=n){
       printf("\n");
    }
    }
  return 0;
}
