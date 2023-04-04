#include<iostream>
using namespace std;
int main()
{
int k=1;
  while(1)
  {
      int n,arr[51],sum=0,average,diff=0,sd=0;
      cin>>n;
      if(n==0)
        break;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          sum+=arr[i];
      }
      average=sum/n;
      for(int i=0;i<n;i++)
      {
          if(arr[i]>average)
          {
            diff=arr[i]-average;
            sd+=diff;
          }
      }
      cout<<"Set #"<<k<<endl<<"The minimum number of moves is "<<sd<<"."<<endl<<endl;
      k++;
  }
}
