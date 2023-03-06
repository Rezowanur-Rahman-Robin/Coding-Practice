#include<stdio.h>
#include<string.h>

int main()
{
  char str1[]="eye";
  int length=strlen(str1);
  char str2[length];

  for(int i=length-1;i>=0;i--)
  {
    str2[length-i-1]=str1[i];
  }
  int val =strcmp(str1,str2);
  if(val==0)
       {
          printf("Palindrome");
       }
      else
        {
          printf("Not a Palindrome");
        }


    return 0;
}
