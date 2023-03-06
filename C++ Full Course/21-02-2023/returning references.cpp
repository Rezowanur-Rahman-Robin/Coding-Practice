// A simple example of a function returning a reference .
# include <iostream >
using namespace std;

int x;
int &f()
{
    return x; // returns a reference to x
}

int main ()
{
//int *p;
//p = &f();
//*p = 100; // assign 100 to reference returned by f()
f()=100;
cout << x << "\n";
//cout << *p << "\n";
return 0;
}
