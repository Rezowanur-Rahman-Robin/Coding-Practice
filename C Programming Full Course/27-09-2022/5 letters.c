#include<stdio.h>
int main(){

char letters[5]="robin";
char r;
for(int i=0;i<5;i++){
    r = letters[i] - 30;
    printf("%c",r);
}



return 0;
}

