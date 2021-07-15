
#include <bits/stdc++.h>
using namespace std;

int gcdFinder(int a,int b){
 if(b==0)
    return a;

 return gcdFinder(b,a%b);
}



int main()
{

  int a,b;
  cin>>a>>b;
  cout<<"GCD is:"<<gcdFinder(a,b)<<endl;


    return 0;
}

