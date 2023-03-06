#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int i;
    for(i=1; i<=n; i++)
    {

        char str[120];
        scanf("%s",str);
        int l=strlen(str);


        if(str[l-1]%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }

    }


    return 0;
}






