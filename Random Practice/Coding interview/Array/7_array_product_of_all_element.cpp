#include<bits/stdc++.h>
using namespace std;

int * findProduct(int arr[], int size)  {
    int * product = new int[size];
      // Write your code here
    for(int i=0;i<size;i++){
      int rs = 1;
      for(int j=0;j<size;j++){

        if(i!=j){
          rs *= arr[j];
        }
      }
      product[i]=rs;
    }
    return product;
}

int * findProduct2(int arr[], int size)  {
    int * product = new int[size];
      // Write your code here
      int temp=1;
    for(int i=0;i<size;i++){
      temp *= arr[i];
    }

    for(int i=0;i<size;i++){
      product[i] = temp/arr[i];
    }
    return product;
}

int main(){
int a[]={1,21,3,14,5,60,7,6};
int* ptr;
ptr = findProduct(a,8);
for(int i=0;i<8;i++){
    cout<<ptr[i]<<endl;
}
cout<<endl;
//with time complexity n
ptr = findProduct2(a,8);
for(int i=0;i<8;i++){
    cout<<ptr[i]<<endl;
}
}
