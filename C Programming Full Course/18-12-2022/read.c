#include<stdio.h>
int main()
{
    int a[10];
    FILE *fc=fopen("numbers.txt.","w");

    if(fc==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("Enter 10 numbers:");
        int x;
        for(int i=0; i<10; i++)
        {
            scanf("%d",&x);
            fprintf(fc,"%d ",x);
        }
    }
    fclose(fc);
    FILE *fp =fopen("numbers.txt.","r");
    for(int i=0; i<10; i++)
    {
        int p;
        fscanf(fp,"%d ",p);
    }
    for(int i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    fclose(fp);

}
