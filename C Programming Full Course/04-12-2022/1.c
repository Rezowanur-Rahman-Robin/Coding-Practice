#include<stdio.h>
void printBangladesh(int n){
if(n==0){
    return;
}

printf("Bangladesh.\n");

n--;
printBangladesh(n);

}

int main(){

printBangladesh(5);

return 0;
}
