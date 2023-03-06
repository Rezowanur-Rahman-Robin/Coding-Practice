#include<stdio.h>
int main()
{
 FILE *fc;
 int i,n,mult=1;
 printf("Enter the value of n:");
 scanf("%d",&n);
 fc= fopen("D:\\My Programs/C Programming Full Course/12-12-2022/file/namota.txt","a+");
 for(i=1;i<=10;i++)
 {
   mult=n*i;
  fprintf(fc,"%d X %d = %d\n",n,i,mult);

 }
 fprintf(fc,"\n\n\n\n",n,i,mult);

 fclose(fc);

}
