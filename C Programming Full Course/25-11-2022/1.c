#include<stdio.h>
 int n,temp,*p;
int main()
{
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    p=&arr;
printf("The Array:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
 sort(arr,&x,&y);
}
int sort(int x,int y)
{

 for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(p+i) > *(p+j))
            {
                temp = *(p+i);
                * (p+i) =* (p+j);
                *(p+j) = temp;
            }
        }

    }

}

    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(p+i));
    }
}
