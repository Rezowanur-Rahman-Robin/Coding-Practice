#include <stdio.h>
int arraypointer(int[]);
int main()
{
    int a[5]={34,23,78,68,49};
    arraypointer(&a[0]);
    return 0;
}
int arraypointer(int *x)
{
     for(int i=0; i<5; i++)
        printf("Address: %d Value:%d \n",(x+i),*(x+i));
}
