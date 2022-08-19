#include<stdio.h>
int main(){
    int i=0;
    while(1){

        int operation;
        float x,y;
    printf("Please Input First Number:");
    scanf("%f",&x);
    printf("Please Input Second Number:");
    scanf("%f",&y);
    printf("Choose operations:\n1 for addition\n2 for substraction\n3 for multiplication\n4 for division\nEnter Chosen Operation number:");

    scanf("%d",&operation);
    if(operation==1)
    printf("%.2f",x+y);
    else if(operation==2)
    printf("%.2f",x-y);
    else if(operation==3)
    printf("%.2f",x*y);
    else if(operation==4)
    printf("%.2f ",x/y);

    printf("\n\n\n");
            i++;
   }
  return 0;
  }


