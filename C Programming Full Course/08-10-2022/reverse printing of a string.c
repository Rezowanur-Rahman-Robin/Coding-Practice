#include<stdio.h>
#include<string.h>

int main(){

char str[] = "I love Bangladesh";

int length ;
length = strlen(str);
for(int i = length-1 ; i>=0 ; i--){
    printf("%c",str[i]);
}

}
