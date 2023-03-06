#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of number of rows and columns:");
    scanf("%d %d",&m,&n);
    int x[m][n],y[m][n],r[m][n];
    printf("Input 1st matrix:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("Input 2nd Matrix:\n");
           for(int i=0; i<m; i++)
{
    for(int j=0; j<n; j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    printf("After addition:\n");

    for(int i=0; i<m; i++)
{
    for(int j=0; j<n; j++)
        {
            r[i][j] = x[i][j]+y[i][j];
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }

    return 0;
}
