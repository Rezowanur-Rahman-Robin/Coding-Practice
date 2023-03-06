
#include<stdio.h>
int main(){

int n,t;
printf("Enter array size:");
scanf("%d",&n);


int a[n];
///array input
printf("Enter array:");
for(int i = 0 ; i< n ; i++){
    scanf("%d", &a[i]);
}
printf("Enter replacing target value:");
scanf("%d",&t);
///replacing
for(int i = 0; i<n ; i++){
    if(a[i]==t){
        a[i] = 0;
    }
}
///printing
for(int i = 0 ; i< n ; i++){
    printf("%d ", a[i]);
}

return 0;
}
