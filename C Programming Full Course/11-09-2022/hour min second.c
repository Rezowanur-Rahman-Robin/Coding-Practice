#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int reminder,hour,min,second;
hour = n / 3600 ;
reminder = n % 3600;
n = reminder;
min = n / 60;
reminder = n % 60;
second = reminder;

printf("%d : %d : %d", hour,min,second);

return 0;
}
