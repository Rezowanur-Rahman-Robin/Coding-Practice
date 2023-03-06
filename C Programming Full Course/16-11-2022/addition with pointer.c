
#include <stdio.h>

int main () {

int x=3,y=5,result;

int *xp,*yp,*resultp;

xp = &x;
yp = &y;
result = *xp + *yp;
resultp =&result;




printf("x=%d  &x=%d   xp=%d   *xp=%d\n",x,&x,xp,*xp);
printf("y=%d  &y=%d   yp=%d   *yp=%d\n",y,&y,yp,*yp);
printf("resultp=%d   *resultp=%d\n",resultp,*resultp);

   return 0;
}

