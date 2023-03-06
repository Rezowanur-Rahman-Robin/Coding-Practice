#include<stdio.h>

int myStringLengthFunction(char s[]){
   int i=0,length=0;
   while(s[i]!='\0'){
    length++;
    i++;
   }
   return length;
}

int main(){
char str[] = "This is the string";
int len=myStringLengthFunction(str);
printf("%s \nLength:%d",str,len);

return 0;
}
