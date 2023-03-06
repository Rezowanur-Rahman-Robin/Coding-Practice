#include<stdio.h>

void vowelconsonant(char str[])
{
    int countv=0,countc=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if( str[i]=='A'|| str[i]=='a'|| str[i]=='E'|| str[i]=='e'|| str[i]=='I'|| str[i]=='i'|| str[i]=='O'|| str[i]=='o'|| str[i]=='U'|| str[i]=='u')
      {
        countv++;
      }
      else
        countc++;
    }
    printf("There are %d vowels.\n",countv);
    printf("There are %d consonants.",countc);
}

int main()
{
    char str[] ="This is Bangladesh";
    vowelconsonant(str);

}
