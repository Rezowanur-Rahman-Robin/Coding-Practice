#include<stdio.h>

int m,n;
int colorder(int x[m][n])
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",x[j][i]);
        }
    }
}
int main()
{
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
   colorder(x);

   return 0;
}
