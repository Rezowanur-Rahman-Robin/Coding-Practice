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
for( i = 0; i<length ; i++){
    if(str[i]==targetChar){
        isFound = true;
        break;
    }
}
if(isFound){
    printf("%c is founded at index %d of str.\n",targetChar,i);
}else{
    printf("%c is not found in str.\n",targetChar);
}
return 0;

}
