#include<stdio.h>
int main(){

float c,f;
printf("Enter the temperature in celsius : ");
scanf("%f",&c);

f= (9*c+160)/5;

printf("%.2f degree Celsius = %.2f degree Fahrenheight.",c,f);


return 0;}
