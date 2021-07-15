#include<stdio.h>
int main(){

    int n,m;
    printf("Enter First number:");
    scanf("%d",&n);

    printf("Enter Second number:");
    scanf("%d",&m);

    if(n>m){
        printf("%d is greater than %d.",n,m);
    }
    else{
       printf("%d is greater than %d",m,n);
    }

return 0;
}
