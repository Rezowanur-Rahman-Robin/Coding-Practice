#include<stdio.h>
int main()
{

    int odd[100];
    int buff;
    FILE *fc=fopen("oddnumber.txt.","w");

    if(fc==NULL)
    {
        printf("File does not exist");
    }
    else
    {

        for(int i=21;i<221;i+=2)
        {

                fprintf(fc,"%d ",i);


        }

    }
    fclose(fc);
    FILE *fp =fopen("oddnumber.txt.","r");
    for(int i=0; i<100; i++)
    {
        fscanf(fp,"%d ",&buff);
        odd[i]=buff;
    }
    for(int i=99; i>=0; i--)
    {

        printf("%d ",odd[i]);

    }
    fclose(fp);

}
