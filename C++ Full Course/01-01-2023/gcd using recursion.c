#include<stdio.h>
int gcd(int x, int y){
//printf("X=%d y=%d\n",x,y);
if(y==0){
    return x;
}else{
    return gcd(y,x%y);
}

}

int lcm(int x, int y){
 return (x*y)/gcd(x,y);
}
int d = 1;
int lcm2(int x, int y){

 if(d%x ==0 && d%y==0){
    return d;
 }
 d++;
 lcm2(x,y);
}

int main(){

int m=6,n=8;

printf("GCD OF %d and %d is %d\n",m,n,gcd(6,8));
printf("LCM OF %d and %d is %d\n",m,n,lcm(6,8));
printf("LCM OF %d and %d is %d\n",m,n,lcm2(6,8));

return 0;

}
