#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "This is Bangladesh";
    int length,counting=1;
    length = strlen(str);
    for(int i=0;i<length;i++)
    {
        if(str[i]==' ')
      {
          counting++;
      }
    }
    printf("There are %d words.",counting);
    return 0;
}
