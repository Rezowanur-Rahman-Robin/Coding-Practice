#include<stdio.h>
int main(){

int arr[50];
int n;
printf("Enter n:");
scanf("%d",&n);

arr[0]=1;
arr[1]=2;

int i=2;
while(i<n){

    arr[i] = arr[i-1] * arr[i-2];

    i++;
}

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
