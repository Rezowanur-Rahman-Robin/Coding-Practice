#include<stdio.h>
#include<stdlib.h>
int main(){
int r1,c1,r2,c2,i,j,k;

printf("enter the number of row for matrix 1=");
scanf("%d",&r1);
printf("enter the number of column for matrix 1=");
scanf("%d",&c1);

printf("enter the number of row for matrix 2=");
scanf("%d",&r2);
printf("enter the number of column for matrix 2=");
scanf("%d",&c2);

if(r2==c1){

int a[r1][c1],b[r2][c2],mul[r1][c2];
printf("enter the first matrix element=\n");

for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix element=\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}

printf("multiply of the matrix=\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
mul[i][j]=0;
for(k=0;k<r2;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
//for printing result
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
}else {
 printf("Multiplication impossible.\n");
}

return 0;
}

