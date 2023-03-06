#include <stdio.h>
int main()
{
   FILE *fp;

   char name[20];
   char fName[20];
   char age[20];
   char favColor[20];
   for(int i=0;i<5;i++){
   fp = fopen("D:\\My Programs/C Programming Full Course/12-12-2022/file/mydata.txt", "a+");
   printf("Enter data for person %d\n",i+1);
   printf("Enter your name:");
   scanf("%s",&name);
   printf("Enter father's name:");
   scanf("%s",&fName);
   printf("Enter age:");
   scanf("%s",&age);
   printf("Enter Favorite color:");
   scanf("%s",&favColor);
   fprintf(fp, "Person no:%d\nName: %s\nFather Name:%s\nAge:%s\nFavorite Color:%s\n-------------------------\n",i+1,name,fName,age,favColor);

   fclose(fp);

   }

   return 0;
}
