#include<iostream>
using namespace std;
class Arr{
    int *a;
public:
Arr(int n){
  a = (int *) malloc(n * sizeof(int));
  a[0] = 5;
}
~ Arr(){
  free(a);
}

int* getA(){
return a;
}
};

void test(Arr &x){
cout<<"This is a function"<<endl;
cout<<x.getA()[0]<<endl;
}

int main()
{
int x=5;
Arr ob(x);
test(ob);
test(ob);
test(ob);
test(ob);
test(ob);
test(ob);
return 0;
}


