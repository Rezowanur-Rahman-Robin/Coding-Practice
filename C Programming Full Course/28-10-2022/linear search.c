#include<stdio.h>
int main()
{
    int i,n,element,array[100],position=-1,check=0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    printf("Enter the array:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the Element you want to search:");
    scanf("%d",&element);

    for(int i=0; i<n; i++)
    {
        if(element==array[i])
        {
            printf("%d is founded at index:%d",element,i);
            check = 1;
            break;
        }
    }
    if(check != 1){
        printf("%d is not found.",element);
    }
    return 0;
}
