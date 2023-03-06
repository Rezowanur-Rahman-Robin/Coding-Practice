#include<stdio.h>
#include<string.h>
int main(){

int n;
scanf("%d",&n);
char data1[n][15];
char data2[n][15];
for(int i=0;i<n;i++){
    scanf("%s %s",&data1[i],&data2[i]);
}
int t;
scanf("%d",&t);
for(int i = 0;i<t;i++){
    char testString[15];
    scanf("%s",&testString);
    for(int j=0; j<n;j++){
        if(strcmp(testString,data1[j])==0){
        ///found
        printf("%s\n",data2[j]);
        break;
      }
    }
}



return 0;
}
