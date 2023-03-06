#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   int t;
   scanf("%d\n",&t);
    for(int n=0;n<t;n++)
    {
        char str[1000];
        cin.getline(str,1000);
        int cn=0;
        int l=strlen(str);
        for(int i=0;i<l;i++)
        {
            if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o'|| str[i]=='u' || str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
            {
                cn++;
            }
        }

        printf("Number of vowels = %d\n",cn);
    }
 return 0;
}


