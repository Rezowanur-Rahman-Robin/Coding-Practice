#include<stdio.h>

int main()
{
    int n;
    printf("Enter how many fibonacci number you want to generate:");
    scanf("%d",&n);
    int f[n + 2];
    int i;

    // 0th and 1st number of the
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;
    printf("%d ",f[0]);
    printf("%d ",f[1]);

    for(i = 2; i < n; i++)
    {  //Add the previous 2 numbers
       // in the series and store it
       f[i] = f[i - 1] + f[i - 2];
       printf("%d ",f[i]);
    }

   return 0;
    }
