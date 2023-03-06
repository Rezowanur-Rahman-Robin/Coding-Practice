#include<iostream>
using namespace std;
class versity
{
  public:
  int total_student;
  int rank_;
};
int main()
{
    versity obj;
    obj.total_student=50;
    obj.rank_=43;
    cout<<obj.total_student<<endl<<obj.rank_;
    return 0;
}
