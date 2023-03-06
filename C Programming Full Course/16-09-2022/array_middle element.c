
#include<stdio.h>
int main(){

int length = 0;
int n,k;
printf("Enter array size: ");
scanf("%d ",&n);
int arr[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

if(n%2==0){
    printf("Middle elements are: %d and %d",arr[(n/2) -1],arr[n/2]);
}else{
    printf("Middle element is: %d",arr[n/2]);
}

return 0;
}

