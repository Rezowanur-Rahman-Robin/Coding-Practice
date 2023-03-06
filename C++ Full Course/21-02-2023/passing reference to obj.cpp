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
~ myclass () {
     cout << " Destructing " << who << "\n";
    }
int id () {
    return who;
    }
};


// Now o is passed by reference .
void f( myclass &o)
{
// note that . operator is still used !!
cout << " Received " << o.id () << "\n";
}
int main ()
{
myclass x(1) ;
f(x);
return 0;
}
