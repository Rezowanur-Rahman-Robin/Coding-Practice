#include<stdio.h>
int main()
{
int a[5]={5,4,6,8,9};
int *p;
p=&a[0];
int i;
for(i=0;i<5;i++)
printf("Address: %d       Value:%d \n",(p+i),*(p+i));
return 0;
}
