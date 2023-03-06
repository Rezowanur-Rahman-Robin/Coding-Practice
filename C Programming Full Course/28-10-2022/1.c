#include<stdio.h>
int main(){

int n;
scanf("%d",&n);

int c = 2*n -  1;
int m = c/2 + 1;
int k=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=c;j++){
            //printf("i = %d    j = %d\n",i,j);
        if(j>m-i && j<m+i){

            printf(" %d ",k);
            k++;
        }else{
            printf("   ");
        }
    }
    printf("\n");
}

return 0;
}
