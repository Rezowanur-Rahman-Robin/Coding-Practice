#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float f(float x){

return x*x*x-3*x+1;
}
float g(float x){

return (x*x*x+1)/3;
}
int main()
{

    int step=1, N;
    float a,b,c;

    //input
    cout<< "Enter initial guess:  ";
    cin>>a;
    cout<< "Enter tolerable error: ";
    cin>>c;
    cout<< "Enter number of iteration: ";
    cin>>N;
    do
    {
       b=g(a);

       if(step>N)
       {
         cout<< "Not CONVERGENT ";
        break;
       }
       a=b;

 step=step+1;


    }while (fabs(f(b))>c);
    cout<< endl <<"So, required root is " <<b;
    return(0);


}

