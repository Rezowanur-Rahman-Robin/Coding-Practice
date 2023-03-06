#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    scanf("%s",str);

    if(str[0]=='a' ||
       str[0]=='e' ||
       str[0]=='i' ||
       str[0]=='o' ||
       str[0]=='u' ||
       str[0]=='A' ||
       str[0]=='E' ||
       str[0]=='I' ||
       str[0]=='O' ||
       str[0]=='U'
       ){
        printf("%syay",str);
       }else{

         char temp = str[0];
         int length = strlen(str);

         for(int i=0;i<length-1;i++){
            str[i]= str[i+1];
         }
         str[length-1]=temp;
         printf("%say",str);
       }


}
