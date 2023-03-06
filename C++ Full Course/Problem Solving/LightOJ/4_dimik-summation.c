
#include<stdio.h>
int main()
{
 int t;
 scanf("%d",&t);

 for(int i=0;i<t;i++){
    char number[10];
    int sum = 0;
    scanf("%s",&number);
    sum = number[0] + number[4] - 96;
    printf("Sum = %d\n",sum);
 }



 return 0;
}
