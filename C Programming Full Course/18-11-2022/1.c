#include<stdio.h>
void main(){
    float x,y;
    printf("Enter two numbers:");
    scanf("%f %f",&x,&y);
    int mx,my,*mxp,*myp;
    mx = (int)x; ///type casting
    my = (int)y;

    mxp = &mx;
    myp = &my;
    float *xp=&x,*yp=&y,r,*rp;
    float rx,*rpx;
    int rslt,*rsl;


    r =(*xp)+(*yp);
    rp=&r;
    printf("%.2f\n",*rp);
    r =(*xp)-(*yp);
    rp=&r;
    printf("%.0f\n",*rp);
    r =(*xp)*(*yp);
    rp=&r;
    printf("%.0f\n",*rp);
    rx =(*xp)/(*yp);
    rpx=&rx;
    printf("%.2f\n",*rpx);


    rslt =(*mxp)%(*myp);
    rsl=&rslt;
    printf("%d\n",*rsl);
}
