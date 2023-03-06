#include<iostream>
using namespace std;

int middleOfThree(int a, int b, int c)
{

    if ((a < b && b < c) || (c < b && b < a))
       cout<< b<<endl;


    else if ((b < a && a < c) || (c < a && a < b))
       cout<< a<<endl;


    else
       cout<< c<<endl;

}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int A,B,C;
        cin>>A >>B >>C;
        middleOfThree(A,B,C);
    }
    return 0;
}
