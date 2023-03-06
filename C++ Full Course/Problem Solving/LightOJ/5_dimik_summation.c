#include<stdio.h>

int main()
{

 int t;
 scanf("%d",&t);

 for(int i=0;i<t;i++){

     int n;
     scanf("%d",&n);
     int sum = 0;
     int firstElement = n%10;

     int lastElement = n/10000;

    sum = firstElement + lastElement;
    printf("Sum = %d\n",sum);
 }


 return 0;
}

