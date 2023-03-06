#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool checkPalindrom(char str[]){
int length = strlen(str);
int left = 0;
int right = length - 1;
while(left<=right){
    if(str[left]!=str[right]){
        return false;
    }
    left++;
    right--;
}
return true;
}
int main()
{
    char str[] ="EYE";

    if(checkPalindrom(str)){
        printf("Palindrome!");
    }else{
        printf("Not Palindrome!");
     }

    return 0;
}
