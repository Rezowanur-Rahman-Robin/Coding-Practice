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

printf("Enter the number that you wanna search:");
scanf("%d",&k);
for(int i=0;i<n;i++){
    if(arr[i]== k){
        length++;
    }
}

printf("Frequency of %d is: %d",k,length);


return 0;
}

