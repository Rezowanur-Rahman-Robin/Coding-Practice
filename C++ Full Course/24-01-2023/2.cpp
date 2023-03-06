#include<iostream>
using namespace std;
class versity
{
    int total_student;
    int rank_;
public:
    int settotal(int x)
    {
        total_student=x;
    }
    int gettotal()
    {
        return total_student;
    }
    int setranks(int y)
    {
        rank_=y;
    }

    int getranks()
    {
        return rank_;
    }
};
int main()
{
    versity obj;
    obj.settotal(100);
    obj.setranks(50);
    cout<<obj.gettotal()<<endl;
    cout<<obj.getranks();
    return 0;
}
