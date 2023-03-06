
#include<stdio.h>
int myStringCharLengthFunction(char s[]){
   int i=0,length=0;
   while(s[i]!='\0'){
    if(s[i]!=' '){
      length++;
    }
    i++;
   }
   return length;
}

int main(){
char str[] = "This is the string";
int len=myStringCharLengthFunction(str);
printf("%s \nLength:%d",str,len);

return 0;
}
