#include <stdio.h>
#include <string.h>

struct family{
   char  father[50];
   char  mother[50];
   char  daughter[50];
   char   son[50];
};

void myfamily(struct family f,int i){
    printf("Family Info of family No:%d\n",i+1);
    printf("Father name:%s\n",f.father);
    printf("Mother name:%s\n",f.mother);
    printf("Daughter name:%s\n",f.daughter);
    printf("Son name:%s\n",f.son);
    printf("\n\n");
}

int main( ) {

   struct family entirefamily[5];

   for(int i=0;i<5;i++){
    printf("Enter Family info for Neighbor %d\n",i+1);
    printf("Enter Father's name:");
    scanf("%s",&entirefamily[i].father);

    printf("Enter Mother's name:");
    scanf("%s",&entirefamily[i].mother);

    printf("Enter daughter's name:");
    scanf("%s",&entirefamily[i].daughter);

    printf("Enter son's name:");
    scanf("%s",&entirefamily[i].son);
    printf("\n \n");
   }

   for(int i=0;i<5;i++){
    myfamily(entirefamily[i],i);
   }


   return 0;
}
