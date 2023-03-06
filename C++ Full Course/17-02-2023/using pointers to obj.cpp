// Pointers to objects .
# include <iostream >
using namespace std;
class samp
{
int a, b;
public :
samp (int n, int m) { a = n; b = m; }
int get_a () { return a; }
int get_b () { return b; }
};

class Number{
    int n;
public:
    Number(int n){
     this->n=n;
    }
    void print(){
    cout<<"N="<<n<<endl;
    }
};

int main ()
{
 /*
samp ob [4] = { samp (1, 2) ,
samp (3, 4) ,
samp (5, 6) ,
samp (7, 8)
};
int i;
samp *p;
p = ob; // get starting address of array
for (i=0; i <4; i++)
{
cout << p-> get_a () << ' ';
cout << p-> get_b () << "\n";
p++; // advance to next object
}
cout << "\n";
*/
Number nm(6);
nm.print();

return 0;
}
