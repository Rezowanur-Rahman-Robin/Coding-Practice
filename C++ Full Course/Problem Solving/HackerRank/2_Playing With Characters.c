#include<stdio.h>
int main(){

char c;
char str[100];
char sen[200];
scanf("%c",&c);
scanf("%s\n",&str);
scanf("%[^\n]%*c",&sen);
printf("%c\n",c);
printf("%s\n",str);
printf("%s\n",sen);

return 0;
}
