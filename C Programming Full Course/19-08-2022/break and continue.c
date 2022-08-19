#include<stdio.h>
int main(){

    output:
    printf("Loop break by goto.\n");

for(int i = 1; i<=10; i++){
   /*
    if(i==5){
        break;
    }
    if(i==5){
        continue;
    }
    */
    if(i==5){
        goto output;
    }
    printf("%d. Fahmida \n",i);
}



}
