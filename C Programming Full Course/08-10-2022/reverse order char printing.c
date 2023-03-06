#include<stdio.h>
#include<string.h>
///Input:
///This is Bangladesh

///Output:
///h s e d a l g n a B s i s i h T
int main()
{
    char str[] = "This is Bangladesh";
    int length = strlen(str);

  /*

    for(int i=length-1;i>=0;i--)
      {
        if(str[i]!=' '){
            printf("%c ",str[i]);
        }
      }
  */
   for(int i=0;i<length;i++)
      {
        if(str[length-i-1]!=' '){
            printf("%c ",str[length-i-1]);
        }
      }

    return 0;

}

