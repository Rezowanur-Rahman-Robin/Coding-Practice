#include <stdio.h>
int main()
{
   FILE *fp;
   fp = fopen("D:\\My Programs/C Programming Full Course/12-12-2022/file/text.txt", "w+");
   fprintf(fp, "bbbbbbbbbbbbbb");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
   return 0;
}
