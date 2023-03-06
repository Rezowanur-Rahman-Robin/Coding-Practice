#include<stdio.h>
#include<string.h>
int main(){

char str[] = "This is Bangladesh iiii";
char targetChar;
int length ,counting=0;

printf("Which character do you want to count:");
scanf("%c",&targetChar);

length = strlen(str);

for(int i=0;i<length;i++){
    if(str[i]==targetChar){
        counting++;
    }
}

printf("%c is founded %d no of times.",targetChar,counting);


return 0;
}

