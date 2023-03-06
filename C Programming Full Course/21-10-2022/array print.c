#include<stdio.h>

void printArray(int arr[],int length){
  for(int i=0 ; i<length ; i++){
    printf("%d ",arr[i]);
  }
}
int main(){

int arraySize;
printf("Enter array size:");
scanf("%d",&arraySize);

int myArray[arraySize];

for(int i=0 ; i<arraySize ; i++){
    scanf("%d",&myArray[i]);
  }

printArray(myArray,arraySize);
return 0;
}
