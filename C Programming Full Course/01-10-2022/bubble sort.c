#include<stdio.h>
int main(){

int n;
printf("Enter array size ");
scanf("%d", &n);
int arr[n];

///input
for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
}

///sort
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i] > arr[j]){
            int temp ;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

///output
for(int i=0;i<n;i++){
    printf("%d ", arr[i]);
}



return 0;
}
