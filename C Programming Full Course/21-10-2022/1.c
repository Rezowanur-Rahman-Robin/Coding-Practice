#include<stdio.h>

int add(int a,int b)
{
    int result = a + b;
    return result;
}
int sub(int a,int b)
{
    int result = a - b;
    return result;
}
int multiply(int a,int b)
{
    int result = a * b;
    return result;
}
float division(float a,float b)
{
    float result = a / b;

    return result;
}
int reminder(int a,int b)
{
    int result = a % b;

    return result;
}
int main()
{
    float x;
    int t;
    printf("Enter the value of x:");
    scanf("%d",&t);
    if(t==1){
        x = add(2,3);
        printf("X = %.0f\n",x);
    }else if(t==2){

        x=sub(2,3);
        printf("X = %.0f\n",x);
    }
    else if(t==3){
        x=multiply(2,3);
        printf("X = %.0f\n",x);
    }
    else if(t==4){
        x=division(2,3);
        printf("X = %.2f\n",x);
    }
    else{
        x=reminder(2,3);
        printf("X = %.0f\n",x);
    }

}
