#include<stdio.h>
int main(){

    int num ;
    printf("Enter a number:");
    scanf("%d",&num);
    int count = 0;
    int dup = num;
    while(num!=0){
        if(num%2==1){
            count++;
        }
        num /= 2;
    }

    if(count %2 ==0){
        printf("%d is Evil Number \n",dup);
    }else{
        printf("%d is an odious Number. \n",dup);
    }

return 0;
}


