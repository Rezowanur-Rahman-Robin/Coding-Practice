#include<stdio.h>
#include <string.h>
#define SQR(x) x*x
struct Address
{
    int housenumber;
    int roadnumber;
    char block;
    char owner[20];
};
int main()
{
  struct Address address_list[10];

        address_list[2].housenumber=25;
        address_list[2].roadnumber=37;
        address_list[2].block='B';
        strcpy(address_list[2].owner, "Shamim");
        //address_list[2].owner = "Shamim"

        address_list[0].housenumber=25;
        address_list[0].roadnumber=13;
        address_list[0].block='B';
        strcpy(address_list[0].owner, "Shamim");

        address_list[1].housenumber=25;
        address_list[1].roadnumber=37;
        address_list[1].block='B';
        strcpy(address_list[1].owner, "Shamim");

        address_list[3].housenumber=25;
        address_list[3].roadnumber=13;
        address_list[3].block='B';
        strcpy(address_list[3].owner, "Shamim");

        for(int i=0;i<4;i++){
            if(address_list[i].roadnumber==37){
                printf("\nHouse number:%d\n",address_list[i].housenumber);
                printf("Road number:%d\n",address_list[i].roadnumber);
                printf("Block :%c\n",address_list[i].block);
                printf("Owner :%s\n\n",address_list[i].owner);
            }
        }

        printf("%d\n",SQR(2));




}
