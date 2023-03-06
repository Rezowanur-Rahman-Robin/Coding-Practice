#include<stdio.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))

union a_type{
  char current;
  char savings;
};

struct member{
  int acc_no;
  float balance;
  char name[40];
  union a_type acc_type;
};
void main()
{
   struct member old,new;
   old.acc_no=13212;
   old.balance=4.56;
   strcpy(old.name,"Bangladesh" );
   old.acc_type.current='c';
   old.acc_type.savings='s';

   new.acc_no=13212;
   new.balance=4.56;
   strcpy(new.name,"Bangladesh" );
   new.acc_type.current='c';
   new.acc_type.savings='s';

   printf("Account no:%d\n",old.acc_no);
   printf("Balance:%f\n",old.balance);
   printf("Account name:%s\n",old.name);
   printf("Account type:%c\n",old.acc_type.current);
   printf("Account type:%c\n",old.acc_type.savings);

   printf("\n%d\n",min(2,5));
}



