#include<stdio.h>
int main(){

int a,b,c;
printf("Enter 3 numbers:");
scanf("%d %d %d",&a,&b,&c);


if(a>b){
    if(a>c){
        printf("%d is maximum.\n",a);
        if(b>c){
           printf("%d is middle.\n",b);
           printf("%d is minimum.\n",c);
        }else{
           printf("%d is middle.\n",c);
           printf("%d is minimum.\n",b);
        }
    }else{
        printf("%d is maximum.\n",c);

        if(a>b){
           printf("%d is middle.\n",a);
           printf("%d is minimum.\n",b);
        }else{
           printf("%d is middle.\n",b);
           printf("%d is minimum.\n",a);
        }
    }
}else{
    if(b>c){
        printf("%d is maximum.\n",b);
        if(a>c){
           printf("%d is middle.\n",a);
           printf("%d is minimum.\n",c);
        }else{
           printf("%d is middle.\n",c);
           printf("%d is minimum.\n",a);
        }
    }else{
        printf("%d is maximum.\n",c);
        if(a>b){
           printf("%d is middle.\n",a);
           printf("%d is minimum.\n",b);
        }else{
           printf("%d is middle.\n",b);
           printf("%d is minimum.\n",a);
        }
    }
}


return 0;
}
