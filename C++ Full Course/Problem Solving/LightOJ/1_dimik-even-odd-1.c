#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int arr[n];
int i=0;
while(i<n){

    scanf("%d",&arr[i]);

    i++;
}

for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        printf("even\n");
    }else{
       printf("odd\n");
    }
}

return 0;
}
