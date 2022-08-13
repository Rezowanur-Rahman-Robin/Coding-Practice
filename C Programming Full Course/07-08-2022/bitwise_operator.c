#include<stdio.h>
int main(){

int A= 60;
int B= 13;
int result = A & B;
int result1 = A | B;
int result2 = A ^ B;
int result3 = A >> 2;
int result5 = A << 2;
int result4 = ~A;


printf("%d & %d = %d \n",A,B, result);
printf("%d | %d = %d \n",A,B, result1);
printf("%d ^ %d = %d \n",A,B, result2);
printf("%d >> %d = %d \n",A,2, result3);
printf("%d << %d = %d \n",A,2, result5);
printf("~%d = %d \n",A, result4);


printf("\n\n\n\n\n\n\n\n Assignment Operators:\n");
int x=60;
x<<=2;

printf("%d\n",x);

x=60;
x>>=2;
printf("%d\n",x);

x=60;
x&=13;
printf("%d\n",x);

x=60;
x|=13;
printf("%d\n",x);

x=60;
x^=13;
printf("%d\n",x);

return 0;
}
