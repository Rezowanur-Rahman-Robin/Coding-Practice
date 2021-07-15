#include<stdio.h>

int main(){

int n;
printf("Enter your mark:");
scanf("%d",&n);

if(n>=33 && n<=40){
    printf("You got E");
}
else if(n>=40 && n<=50)
    {

        printf("You got D");
}
else if(n>=50 && n<=60)
    {
      printf("You got C");

}
else if(n>=60 && n<=70){
      printf("You got B");

}
else if(n>=70 && n<=80)
    {
      printf("You got A");

}
else if(n>=80 && n<=100)
{
      printf("You got A+");
}
else if(n<33 && n>=0){
     printf("Failed!!!!!!");
}
else{
    printf("***Invalid Mark***\n****Please Try Again***");
}

return 0;
}
