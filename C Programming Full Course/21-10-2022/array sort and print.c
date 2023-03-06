#include<stdio.h>

void printArray(int arr[],int length){
  for(int i=0 ; i<length ; i++){
    printf("%d ",arr[i]);
  }
}
// perform the bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int i = 0; i < size ; i++) {

    // loop to compare array elements
    for (int j = 0; j < size - i-1 ; j++) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[j] > array[j + 1]) {

        // swapping occurs if elements
        // are not in the intended order
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  printArray(array,size);
}
int main(){

int n;
printf("Enter array size:");
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
bubbleSort(arr,n);
return 0;
}
