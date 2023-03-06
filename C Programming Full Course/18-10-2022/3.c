#include<stdio.h>

int sub(int a,int b)
{
    int result= a-b;
    return result;
}
    float div(float a,float b)
{
    float result= a/b;
    return result;
}
int main()
{
    int x;
    float y;
    x = sub(8,4);
    y = div(24,5);
    printf("X= %d\nY= %f",x,y);
}
