#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0;
    for(i=1 ; i<=15 ; i+=2){
        sum = sum + pow(i,2);
        printf("%d^2+ ",i);
     ///sum = sum + i*i;
    }
    printf("\nSummation: %d\n",sum);

     return 0;
}

