#include<stdio.h>
int main(){
levelStart:
        printf("level starting:\n");


    int input ;
    scanf("%d",&input);

    if(input % 2 == 0){
        goto evenPrint;
    }else{
        goto oddPrint;
    }

    evenPrint:
        printf("Even\n");
    oddPrint:
        printf("Odd\n");

    goto levelStart;


return 0;
}
