#include<stdio.h>
int main(){

int r,c;

scanf("%d %d",&r,&c);
int mat[r][c];
int X;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&mat[i][j]);
    }
}
scanf("%d",&X);


int status = 1;

int count;
for(int i=0;i<r;i++){
count =0;
    for(int j=0;j<c;j++){

        if(mat[i][j]==X){
            count++;
        }
    }
    if(count == 0){
       status = 0;
       break;
    }
}
if(status == 1){
    printf("YES\n");
}else{
    printf("NO\n");
}


return 0;
}
