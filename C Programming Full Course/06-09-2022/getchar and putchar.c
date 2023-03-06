#include <stdio.h>
#include <conio.h>
void main()
{
    char c;
    int i = 378;
    float t = 123.43453434;
    printf("%6d \n %-6d ttt  \n %2.4f \n %12.4f",i,i,t,t);
    printf ("\n Enter a character \n");
    c = getchar(); // get a single character
    printf(" You have passed ");
    putchar(c); // print a single character using putchar

    getch();
}
