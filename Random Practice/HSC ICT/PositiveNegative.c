#include<stdio.h>
int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n>0){
        printf("%d is a Positive Number.",n);
    }
    else if(n<0){
        printf("%d is a Negative Number.",n);
    }
    else{
        printf("%d is a Zero.",n);
    }


return 0;
}


