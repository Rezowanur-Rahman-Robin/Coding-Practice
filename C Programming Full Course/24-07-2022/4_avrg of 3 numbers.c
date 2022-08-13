
#include<stdio.h>
int main(){

int a,b,c;
float avrg;

printf("Enter first number:");
scanf("%d",&a);

printf("Enter Second Number:");
scanf("%d",&b);

printf("Enter third Number:");
scanf("%d",&c);

avrg = (a+b+c)/3.0;
///avrg =  3.345
printf("Average: %.2f \n\n\n",avrg);
printf("I am in new line. \t");
printf("Something \" ");



return 0;
}
