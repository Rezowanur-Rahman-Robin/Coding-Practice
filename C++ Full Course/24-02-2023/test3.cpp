#include<iostream>
using namespace std;
class amb{
public:
int i, j;
amb(int x, int y){ i = x; j = y; }
};

void func(amb a, amb b){
cout << a.i << endl;
cout << a.j << endl;
cout << b.i << endl;
cout << b.j << endl;
}
int main(){
amb ob1(12, 13), ob2(14, 15);
func(ob1, ob2);
return 0;
}
