#include <iostream>
using namespace std;
class Example
{
   public:
    int a;
    Example(int x)                // parameterized constructor
    {
      a=x;
    }
    Example(Example &ob)               // copy constructor
    {
        a = ob.a;
    }

};
int main()
{
 Example e1(36);               // Calling the parameterized constructor
 //Example e2(e1);
 Example e2(e1);

 Example e3(5);
 e3 = e1;

 cout<<e2.a<<endl;
 cout<<e3.a<<endl;
  return 0;
}
