// Returning an object
# include <iostream >
# include <cstring >
using namespace std;
class samp
{
char s [80];
public :
void show () {
    cout << s << "\n";
}
void set ( char *str ) {
     strcpy (s, str );
}
};
// Return an object of type samp
samp input ()
{
char p [80];
cout << " Enter a string : ";
cin >> p;

samp str ;
str .set (p);
return str;
}


int main ()
{
samp ob;
// assign returned object to ob
ob = input ();
ob. show ();
return 0;
}
