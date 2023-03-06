#include<stdio.h>
#include<string.h>
///Input:
///This is Bangladesh

///Output:
///T h i s i s B a n g l a d e s h
int main()
{
    char str[] = "This is Bangladesh";
    int length = strlen(str);

    for(int i=0;i<length;i++)
      {
        if(str[i]!=' '){
            printf("%c ",str[i]);
        }
      }
    return 0;

}
