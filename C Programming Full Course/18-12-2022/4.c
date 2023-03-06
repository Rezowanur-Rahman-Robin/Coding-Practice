#include<stdio.h>
int main(){

int arr[5][5]={{1,2,3,4,5},{7,8,4,5,6},{9,8,7,6,5},{5,4,3,2,1},{1,3,5,7,9}};
int sumRow=0,sumCol=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i==2){
            sumRow+=arr[i][j];
        }
        if(j==2){
            sumCol+=arr[i][j];
        }
    }
}
printf("Sum Row:%d\n",sumRow);
printf("Sum Column:%d\n",sumCol);

return 0;
}
