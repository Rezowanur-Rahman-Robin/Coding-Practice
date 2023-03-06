#include <stdio.h>
#include<string.h>
int main() {
    int i;
    char str1[100]="This is";
    char str2[70]="my country";
    int length1=0;
    int length2=0;

    for(int i=0;str1[i]!='\0';++i)
    {
        length1++;
    }
    printf("Length1: %d\n",length1);

     for(int i=0;str2[i]!='\0';++i)
    {
        length2++;
    }
    printf("Length2: %d\n",length2);

    for(int i=length1;i<length1+length2;++i)
    {
        str1[i]=str2[i-length1];
    }

    printf("%s",str1);
    return 0;
}
