#include<stdio.h>
struct data{
  char name[20];
  char address[50];
};
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size - 1; ++step) {

    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

int main()
{
    int n;
    scanf("%d",&n);
    struct data myData[n];
    for(int i=0;i<n;i++){
        printf("Enter Name for user %d:",i+1);
        scanf("%s",&myData[i].name);
        printf("Enter Address for user %d:",i+1);
        scanf("%s",&myData[i].address);
    }

    printf("Before Sorting:\n");
    for(int i=0;i<n;i++){
        printf("%d:\n",i+1);
        printf("Name:%s:\n",myData[i].name);
        printf("Address:%s:\n",myData[i].address);

    }

      // loop to access each array element
  for (int step = 0; step < n - 1; ++step) {

    // loop to compare array elements
    for (int i = 0; i < n - step - 1; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (myData[i].name[0] > myData[i + 1].name[0]) {

        // swapping occurs if elements
        // are not in the intended order
        struct data temp = myData[i];
        myData[i] = myData[i + 1];
        myData[i + 1] = temp;
      }
    }
  }
    printf("\n\n\n\n\nAfter Sorting:\n");
    for(int i=0;i<n;i++){
        printf("%d:\n",i+1);
        printf("Name:%s:\n",myData[i].name);
        printf("Address:%s:\n",myData[i].address);

    }
    return 0;
}
