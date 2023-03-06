#include<stdio.h>
int main()
{
    int arr[]={5,10,15,20,25};
    int targetIndex;
    printf("Which index position do you wanna delete:");
    scanf("%d",&targetIndex);


    if(targetIndex>-1 && targetIndex<5){
         for(int i=targetIndex;i<4;i++){
          arr[i] = arr[i+1];
    }
    }else{
        printf("Please insert a valid index.\n");
    }

    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

