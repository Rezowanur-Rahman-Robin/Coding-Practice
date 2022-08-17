///2.Write a program in C to read any day number in integer and display day name in the word.


#include<stdio.h>
int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    switch(n){
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    default:
        printf("Number is not in range of 0 -9.\n");
    }




return 0;
}
