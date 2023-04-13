#include <iostream>
using namespace std;
int * replaceWithZero(int arr[],int n){
    int *newArr = new int[n];
  for(int i=0;i<n;i++){
    if(arr[i]<0){
        newArr[i]=0;
    }else{
        newArr[i]=arr[i];
    }
  }
  return newArr;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
      cin>>arr[i];
    }

    int *newArray=replaceWithZero(arr,n);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;

   for(int i=0;i<n;i++){
      cout<<newArray[i]<<" ";
    }
    return 0;
}
