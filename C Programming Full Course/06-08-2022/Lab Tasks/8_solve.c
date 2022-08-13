#include<stdio.h>
#include<math.h>

int main(){

float base , height, hypo;

printf("Enter base and height of the Triangle:");
scanf("%f %f", &base,&height);

///hypo = sqrt(base*base + height*height);
hypo = sqrt(pow(base,2) + pow(height,2));

printf("Result: %.2f\n", hypo);

return 0;
}
