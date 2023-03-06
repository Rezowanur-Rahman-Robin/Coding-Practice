#include <stdio.h>

/* function declaration */
double getAverage(int *arr, int size);

int main () {

   /* an int array with 5 elements */
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   /* pass pointer to the array as an argument */
   //printf("%d \n",balance);
   //printf("%d \n",balance[0]);
   //printf("%d \n",&balance[0]);

    for(int i=0;i<5;i++){
    printf("%d ",balance[i]);
   }
   printf("\n");
   avg = getAverage( balance, 5 ) ;


   /* output the returned value  */

   printf("Average value is: %f\n", avg );

     for(int i=0;i<5;i++){
    printf("%d ",balance[i]);
   }
   printf("\n");

   return 0;
}

double getAverage(int *arr, int size) {

   int  i, sum = 0;
   double avg;
   arr[2]=0;

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }

   avg = (double)sum / size;
   return avg;
}
