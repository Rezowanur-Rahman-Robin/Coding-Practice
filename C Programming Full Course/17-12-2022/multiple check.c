#include<stdio.h>

int check(int x,int y){

   if(y%x==0){
    return 1;
   }else{
    return 0;
   }
}
int main(){

    int a,b;
    static int p =10;
    while(1){
        scanf("%d %d",&a,&b);
        int temp = check(a,b);
        if(temp==1){
            printf("%d is multiple of %d.\n",b,a);
        }else{
            printf("%d is not multiple of %d.\n",b,a);

         }

    }


   printf("\n%d\n",min(2,5));

   return 0;
}



