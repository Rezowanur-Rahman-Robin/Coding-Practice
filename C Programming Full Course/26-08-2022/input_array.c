#include<stdio.h>
int main(){

int studentQuantity;
printf("Enter student's quantity:");
scanf("%d",&studentQuantity);
int arrayNumber[studentQuantity];

for(int i=0; i<studentQuantity; i++){
    printf("Enter %d no student's exam total number in math:",i+1);
    scanf("%d",&arrayNumber[i]);
}
printf("First student's number is :%d \n",arrayNumber[0]);
printf("Last student's number is :%d",arrayNumber[studentQuantity-1]);

return 0;
}
