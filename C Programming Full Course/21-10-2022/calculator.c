#include<stdio.h>
float calculate(float a, float b, char op){
  float result;
  if(op == '+'){
    result = a+b;
  }else if(op == '-'){
    result = a-b;
  }else if(op == '*'){
    result = a*b;
  }else if(op == '/'){
    result = a/b;
  }
  return result;
}
int main()
{
    float x,y;
    char operatr;
    while(1){
    printf("Enter your operation:");
    scanf("%f %c %f",&x,&operatr,&y);
    printf("Result: %.0f %c %.0f = %.2f\n",x,operatr,y,calculate(x,y,operatr));
    }
}
