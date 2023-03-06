#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    int j=0;
    while(j<t){
      int n;
    scanf("%d",&n);

    printf("Case %d: ",j+1);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    j++;
    }

  return 0;
}
