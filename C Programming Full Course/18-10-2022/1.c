#include<stdio.h>

int main()
{
 int x=21,sum=0;
int j=0;
int evenDivisor = 0;
int allDivisor[20];
for(int n=1;n<=x;n++)
{
    if(x%n==0){
        allDivisor[j]=n;
        j++;
    if(n%2==0){
        evenDivisor = 1;
        sum=sum+n;
       }
    }
}
if(evenDivisor==1){
   for(int i=0; i<j; i++){
    printf("%d ",allDivisor[i]);
   }
   printf("\nSum=%d\n",sum);

}else{
   printf("\n NULL\n");
}
return 0;
}
