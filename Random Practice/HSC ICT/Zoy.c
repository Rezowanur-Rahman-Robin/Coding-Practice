#include <stdio.h>

int main()
{


    int n;


    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("%d\n",n);

    if(n==48){
                printf("Your input is not valid. Try again.\n");

    }
    else
        {
    if( n>=0 && n<18){
        printf("Child\n");
    }
    else if(n>=18){
        printf("Adult\n");
    }

    }




}
