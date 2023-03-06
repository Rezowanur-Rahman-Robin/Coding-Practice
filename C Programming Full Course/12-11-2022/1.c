#include <stdio.h>
int main()
{
    int i;
    char str1[50]="Itisd esfas dfadsfasdfh";
    char str2[50];
    for(i=0;str1[i]!='\0';++i)
    {
    str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("%s \n",str2);
    printf("%s \n",str1);
    return 0;
}
