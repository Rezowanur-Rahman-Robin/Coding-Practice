#include<stdio.h>
#include<string.h>
#include <stdbool.h>

int main(){

char str[]= "this is bangladesh which is a developing country";
char targetChar;
printf("Enter the character that you wanna search:");
scanf("%c",&targetChar);
int i;
int length = strlen(str);
bool isFound ;
isFound =false;
int f_index;
for( i = 0; i<length ; i++){
    if(str[i]==targetChar){
        isFound = true;
        f_index = i;

    }
}
if(isFound){
    printf("%c is founded at index %d of str.\n",targetChar,f_index);
}else{
    printf("%c is not found in str.\n",targetChar);
}
return 0;

}

