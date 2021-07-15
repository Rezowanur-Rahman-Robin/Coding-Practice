#include<stdio.h>
int main(){

int i,n,m;
m=1;

scanf("%d",&n);



for(i=n;i>0;i--){

    m=m*i;

}

printf("The Factorial of %d is: %d",n,m);



return 0;
}


