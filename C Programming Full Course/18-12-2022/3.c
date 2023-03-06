#include<stdio.h>
int main()
{

    int number[]={1,2,3,2,-1,7,-5};
    int cnt = 0;
    int sum = 0;
    for(int i=0;i<7;i++){
        if(number[i]<0){
            break;
        }else if(number[i] % 3 ==0 || number[i] % 5 == 0){
         continue;
        }
        sum+=number[i];
        cnt++;
    }
    sum=5;
    cnt = 3;

    printf("Average: %f\n",((float)sum/(float)cnt));
    printf("Sum: %d\n",sum);

    return 0;
}
