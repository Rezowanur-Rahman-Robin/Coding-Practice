#include<stdio.h>
int main(){

int m,n,t;
printf("Enter first array size:");
scanf("%d",&m);

printf("Enter second array size:");
scanf("%d",&n);

t = m + n ;

int a[m],b[n],x[t];
///first array input
printf("Enter first array:");
for(int i = 0 ; i< m ; i++){
    scanf("%d", &a[i]);
}
///second array input
printf("Enter second array:");
for(int i = 0 ; i< n ; i++){
    scanf("%d", &b[i]);
}
///add two array
for(int i = 0; i<t ; i++){
    if(i<m){
        x[i] = a[i];
    }else{
        x[i] = b[i-m];
    }
}
///print the total array
for(int i = 0; i<t ; i++){
    printf("%d ",x[i]);
}


return 0;
}
