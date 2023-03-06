#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of number of rows and columns:");
    scanf("%d %d",&m,&n);
    int x[m][n];
    printf("Input 1st matrix:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(int i=0; i<m; i++)
   {
    for(int j=0; j<n; j++)
        {
            printf("%d ",x[i][j]);

        }
    }

    return 0;
}
