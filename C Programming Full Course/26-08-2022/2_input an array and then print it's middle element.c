#include<stdio.h>
int main()
{
 int n;

 printf("Enter total student's:");
 scanf("%d",&n);

 int studentnumber[n];

 for(int i=0;i<n;i++)
 {
 printf("Enter student number %d:",i+1);
 scanf("%d",&studentnumber[i]);
 }
 if(n%2==0){
  printf("Middle Elements are:%d and %d",studentnumber[(n/2)-1],studentnumber[n/2]);
 }else{
  printf("Middle Element is:%d",studentnumber[n/2]);

 }

 return 0;
}

/*
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
*/

