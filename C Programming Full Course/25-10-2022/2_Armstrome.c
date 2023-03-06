#include<stdio.h>
#include<math.h>
int main(){

int n,sum=0,digit,duplicateN;
printf("Enter number to check:");
scanf("%d",&n);
duplicateN = n;
while(n>0){
 digit=n%10;
 sum+=pow(digit,3);
 n=n/10;
}
if(sum == duplicateN){
    printf("%d is an Armstrome number.",duplicateN);
}else{
    printf("%d is not an Armstrome number.",duplicateN);

}
return 0;
}
