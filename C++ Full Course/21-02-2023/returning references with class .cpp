# include <iostream >
# include <cstdlib >
using namespace std;
class array
{
///data members
int size ;
char *p;

public :
///constructor
array (int num){
p = new char [num];
if (!p)
{
cout << " Allocation error \n";
exit (1) ;
}
for(int i=0;i<num;i++){
   p[i]=' ';
}
size = num ;
}

///destructor
~array () {
     delete [] p;
}

///to asign value inside array
char &put (int i){
if(i <0 || i >= size )
{
cout << " Bounds error !!!\ n";
exit (1) ;
}
return p[i]; // return reference to p[i]
}

///return value from array
char get (int i){
if(i <0 || i >= size )
{
cout << " Bounds error !!!\ n";
exit (1) ;
}
return p[i];
}

void printMyString(){
for(int i=0;i<size;i++){
    cout<<p[i];
}
cout<<endl;
}

int getLength(){
    int cnt=0;
for(int i=0;i<size;i++){
    if(p[i]!=' '){
        cnt++;
    }
}
return cnt;

}

};

int main ()
{
array a (10) ;
a.put (3) = 'X';
a.put (2) = 'R';
a.put (1) = 'A';
cout << a.get (3) << a.get (2) ;
cout << "\n";
/// now generate run - time boundary error
a.printMyString();
cout<<a.getLength()<<endl;
a.put (11) = '!';
return 0;
}
