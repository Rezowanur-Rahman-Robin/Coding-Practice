#include<stdio.h>
int main(){

int mx = -99999;
int n;
printf("Enter array size: ");
scanf("%d ",&n);
int arr[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++){
    if(arr[i]>mx){
        mx = arr[i];
    }
}

printf("Maximum Element is: %d",mx);


return 0;
}
