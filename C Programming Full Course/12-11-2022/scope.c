#include<stdio.h>

int i=0;

void printI(){
printf("i = %d\n",i);
}

int main()
{

    while(i<5){
        printf("%d ",i);
        i++;

    }
    printf("\n");
    printI();

    return 0;
}


