#include<stdio.h>
#include<math.h>
int main()
{

    float a,b,c,x1,x2;

    scanf("%f %f %f",&a,&b,&c);

    if(a==0 && b==0){

        printf("No solution\n");

    }else if(b*b - 4*a*c == 0){

        x1 = -b/2*a;

        printf("Only one root is %f\n",x1);

    }else if(b*b - 4*a*c < 0){

        printf("There are no real roots\n");

    }else{

        x1 = (-b + sqrt(b*b - 4*a*c))/2*a;
        x2 = (-b - sqrt(b*b - 4*a*c))/2*a;

        printf("Solution %.2f %.2f\n",x1,x2);

    }

    return 0;
}
