#include<stdio.h>
int main(){

int n,i;
printf("Enter a number:");
scanf("%d",&n);
int count = 0;
i=2;
while(i<=n/2){

    if(n%i == 0){
        count++;
        break;
    }
    i++;
}
if(count==0){
    printf("%d is Prime.",n);
}else{
    printf("%d is not Prime.",n);
}

return 0;
}
