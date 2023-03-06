#include <stdio.h>

main() {

   FILE *fp;
   char buff[255];

   fp = fopen("D:\\My Programs/C Programming Full Course/12-12-2022/file/namota.txt", "r");
   fscanf(fp, "%s", buff);
   printf("%s\n", buff );
   fscanf(fp, "%s", buff);
   printf("%s\n", buff );
   fscanf(fp, "%s", buff);
   printf("%s\n", buff );
   fscanf(fp, "%s", buff);
   printf("%s\n", buff );
   fscanf(fp, "%s", buff);
   printf("%s\n", buff );


   fgets(buff, 255, (FILE*)fp);
   printf("%s\n", buff );
   fgets(buff, 255, (FILE*)fp);
   printf("%s\n", buff );
   fgets(buff, 255, (FILE*)fp);
   printf("%s\n", buff );
   fgets(buff, 255, (FILE*)fp);
   printf("%s\n", buff );
   fgets(buff, 255, (FILE*)fp);
   printf("%s\n", buff );



   fclose(fp);

}
