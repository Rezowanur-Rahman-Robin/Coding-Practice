#include<stdio.h>
#include<string.h>
int main()
{
    char str[] ="This is Bangladesh";
    int length,countv=0,countc=0;
    length=strlen(str);
    for(int i=0;i<length;i++)
    {
      if(str[i]=='A')
      {
        countv++;
      }
      else if(str[i]=='a'){
                countv++;
      }
      else if(str[i]=='E'){
                countv++;
      }
      else if(str[i]=='e'){
                countv++;
      }
      else if(str[i]=='I'){
                countv++;
      }
      else if(str[i]=='i'){
                countv++;
      }
      else if(str[i]=='O'){
                countv++;
      }
      else if(str[i]=='o'){
                countv++;
      }
      else if(str[i]=='U'){
                countv++;
      }
      else if(str[i]=='u'){
                countv++;
      }else{
                countc++;
       }
    }
    printf("There are %d vowels.\n",countv);
    printf("There are %d consonants.",countc);
    return 0;
}
