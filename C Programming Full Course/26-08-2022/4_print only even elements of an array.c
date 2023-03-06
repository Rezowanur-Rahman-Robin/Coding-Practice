#include<stdio.h>
int main(){

int n,i;
 printf("Enter the value of n:");
 scanf("%d",&n);

 int array[n];

 for(i=0;i<n;i++)
 {
 printf("Enter array element %d:",i+1);
 scanf("%d",&array[i]);
 }

 for(i=0;i<n;i++)
 {
     if(array[i]%2==0){
        printf("%d ",array[i]);
     }

 }

return 0;
}
