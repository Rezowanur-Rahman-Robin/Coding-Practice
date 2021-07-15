

#include<stdio.h>
int main(){

int n;
printf("Enter the year:");
scanf("%d",&n);

if((n%4 == 0 && n%100 != 0) || (n%400 == 0)){
    printf("%d is leap year.",n);
}else{
    printf("%d is not leap year.",n);
 }

return 0;
}





