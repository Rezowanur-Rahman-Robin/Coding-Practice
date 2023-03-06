#include<stdio.h>
int main()
{
 int n;

 printf("Enter Array Size:");
 scanf("%d",&n);

 int array[n];

 for(int i=0;i<n;i++)
 {
 printf("Enter array element %d:",i+1);
 scanf("%d",&array[i]);
 }
 for(int i=0;i<n;i++){
    printf("Array Element at index %d is:%d \n",i,array[i]);
 }


 return 0;
}



