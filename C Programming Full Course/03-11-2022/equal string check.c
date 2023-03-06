#include<stdio.h>
#include<stdbool.h>

int myStringLengthFunction(char s[]){
   int i=0,length=0;
   while(s[i]!='\0'){
    length++;
    i++;
   }
   return length;
}

bool stringLengthEqualCheck(char s1[],char s2[]){
    int len1;
    int len2;
    len1 = myStringLengthFunction(s1);
    len2 = myStringLengthFunction(s2);

    if(len1 == len2){
        return true;
    }else{
        return false;
    }
}

bool stringEqualCheck(char s1[],char s2[],int length){
    for(int i=0;i<length;i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}

int main(){
char str1[] = "This is the string1";
char str2[] = "This is the string2";

if(stringLengthEqualCheck(str1,str2)){
    printf("'%s' \t '%s' is equal length\n",str1,str2);
}else{
    printf("'%s' \t '%s' is not equal length\n",str1,str2);

}

if(stringEqualCheck(str1,str2,19)){
        printf("'%s' \t '%s' is equal",str1,str2);

}else{
        printf("'%s' \t '%s' is not equal",str1,str2);

}

return 0;
}

