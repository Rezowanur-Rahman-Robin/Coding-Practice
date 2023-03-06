#include<iostream>
using namespace std;


class X{
int x,y;
public:
    X(){}
    X(int a=0,int b=0)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
    };
int main()
{
    X s1,s2(3);
    s1.show();
    return 0;
}
