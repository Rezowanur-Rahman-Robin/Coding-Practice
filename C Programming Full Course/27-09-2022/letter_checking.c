#include<stdio.h>
int main(){

char character;
printf("Enter a character:\n");
scanf("%c",&character);
if(character >64 && character<91 ){
   character = character + 32;
   printf("%c",character);
}else if(character >96 && character<123 ){
   character = character - 32;
   printf("%c",character);
}else{
  printf("Other Character.\n");
}
///printf("%.*s",5,"abcde");
///printf("%09d",789);

return 0;
}

///A-65
/////Z-90
///a-97
///z-122
