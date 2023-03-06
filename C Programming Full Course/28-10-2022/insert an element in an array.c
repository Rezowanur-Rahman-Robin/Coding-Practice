#include<stdio.h>
int main()
{
    int arr[]={11,17,23,29,35};
    int targetIndex,element;
    printf("Which index position do you wanna insert:");
    scanf("%d",&targetIndex);
    printf("Which element do you wanna insert:");
    scanf("%d",&element);

    if(targetIndex>-1 && targetIndex<5){
        arr[targetIndex] = element;
    }else{
        printf("Please insert a valid index.\n");
    }

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

