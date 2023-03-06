#include<stdio.h>
int fact(int );
int main()
{
    int x=1;
    int result=fact(x);
    printf("%d",result);
}
int fact(int n)
{
    if(n>100)
    {
        return 0;
    }
    else
    {
        return n+fact(n+1);
    }
}
