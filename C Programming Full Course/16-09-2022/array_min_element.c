#include<stdio.h>
int main(){

int min = 99999999;
int n;
printf("Enter array size: ");
scanf("%d ",&n);
int arr[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++){
    if(arr[i]<min){
        min = arr[i];
    }
}

printf("Minimum Element is: %d",min);


return 0;
}
