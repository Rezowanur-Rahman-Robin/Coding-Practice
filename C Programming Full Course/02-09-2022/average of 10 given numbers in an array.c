#include<stdio.h>
int main()
{
    int i=0,a[10],sum=0;
    float average;

    ///input 10 numbers inside an array
    for(i=0;i<10;i++)
    {
     printf("Enter number %d:",i+1);
     scanf("%d",&a[i]);
    }

    ///calculate the sum of 10 given numbers of an array
    for(i=0;i<10;i++)
    {
     sum = sum + a[i];
    }
    average=sum/10.0;
    printf("average=%f\n",average);
return 0;
}
