#include <iostream>
using namespace std;

int*  removeEven( int Arr[], int size ) {
  // Write your code here
  for(int i=0;i<size;i++){
    if(Arr[i]%2==0){
       for(int j=i;j<size-1;j++){
         Arr[j]=Arr[j+1];
       }
    }
  }
  return Arr;
}

int main(){

int arr[] = {1,2,3,4,5,6,7,8};
int* ptr;
ptr = removeEven(arr,8);

for(int i=0;i<4;i++){
    cout<<ptr[i]<<endl;
}

}
