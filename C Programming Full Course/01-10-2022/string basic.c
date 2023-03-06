#include <stdio.h>

int main () {

   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   printf("Greeting message: %s\n", greeting );
   printf("Greeting message: %c\n", greeting[3] );
   return 0;
}
