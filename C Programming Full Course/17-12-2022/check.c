
#include<string.h>

int main()
{
  while(1){
    char str[4];
    scanf("%s",&str);
    char age1= str[0];
    char age2= str[1];
    char tax= str[2];
    char land= str[3];
    if(tax =='T' && land=='N'){
        printf("Age = %c%c,TaxPayer,Not a landowner.\n",str[0],str[1]);
    }else if(tax =='T' && land=='L'){
        printf("Age = %c%c,TaxPayer,Landowner.",str[0],str[1]);
    }else if(tax =='N' && land=='L'){
        printf("Age = %c%c,Not a TaxPayer,Landowner.",str[0],str[1]);
    }else if(tax =='N' && land=='N'){
        printf("Age = %c%c,Not a TaxPayer,Not a landowner.",str[0],str[1]);
    }
  }
  return 0;
}

