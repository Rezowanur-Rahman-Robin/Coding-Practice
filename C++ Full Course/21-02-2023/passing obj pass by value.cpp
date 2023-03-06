# include <iostream >
using namespace std;
class myclass
{
int who ;
public :
myclass (int n)
{
who = n;
cout << " Constructing " << who << "\n";
}
~ myclass () { cout << " Destructing " << who << "\n"; }
int id () { return who; }
};
// o is passed by value .
void f( myclass o)
{
cout << " Received " << o.id () << "\n";
}
int main ()
{
myclass x(1) ;
f(x);
return 0;
}
