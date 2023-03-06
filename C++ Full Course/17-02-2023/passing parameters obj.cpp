# include <iostream >
using namespace std;
class samp
{
int i;
public :
samp (int n) { i = n; }
int get_i () { return i; }
};


// Return square of o.i.
int sqr_it ( samp o)
{
return o. get_i () * o. get_i ();
}
int main ()
{
samp a (10) , b(2) ;
cout << sqr_it (a) << "\n";
cout << sqr_it (b) << "\n";
return 0;
}
