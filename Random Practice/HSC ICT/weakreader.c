
/*

#include<stdio.h>
int main(){

int n;

scanf("%d",&n);

if(n==1){
        printf("Saturday");

}else if(n==2){

       printf("Sunday");

}
else if(n==3){

       printf("Monday");

}
else if(n==4){

       printf("Tuesday");

}
else if(n==5){

       printf("Wednesday");

}
else if(n==6){

       printf("Thursday");

}
else if(n==7){

       printf("Friday");

}




return 0;
}


*/
#include<stdio.h>
int main(){

int n;

scanf("%d",&n);

switch(n){


case 1:
    printf("Saturday");
    break;

case 2:
    printf("Sunday");
    break;

case 3:
    printf("Monday");
    break;

case 4:
    printf("Tuesday");
    break;


case 5:
    printf("Wednesday");
    break;

case 6:
    printf("Thursday");
    break;

case 7:
    printf("Friday");
    break;

default:
    printf("Not found");

}



return 0;
}


