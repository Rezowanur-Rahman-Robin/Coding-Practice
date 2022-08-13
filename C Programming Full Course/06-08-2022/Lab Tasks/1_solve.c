#include<stdio.h>

int main(){

int a = 5;
float b = 5.00;
double c = 5.00;
char d = 'x';

printf("Size of int: %d bytes.\n", sizeof(a));
printf("Size of float: %d bytes.\n", sizeof(b));
printf("Size of double: %d bytes.\n", sizeof(c));
printf("Size of char: %d byte.\n", sizeof(d));


return 0;

}
