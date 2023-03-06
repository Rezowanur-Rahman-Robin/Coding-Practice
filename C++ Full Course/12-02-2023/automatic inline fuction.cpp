# include <iostream >
using namespace std;

class samp
{
int i, j;
public :
samp (int a, int b);
/*
divisible () is defined here and automatically
in - lined .
*/
int divisible () {
     return !(i%j);
}
};
 samp :: samp (int a, int b)
{
i = a;
j = b;
}
int main ()
{
samp ob1 (10 , 2) , ob2 (10 , 3);
// this is true
if( ob1. divisible ())
cout << "10 divisible by 2\n";
// this is false
if( ob2. divisible ())
cout << "10 divisible by 3\n";
return 0;
}
