#include<bits/stdc++.h>
using namespace std;

int* rightRotate(int arr[], int size) {

    //Store Last Element of Array.
    //Start from last and Right Shift the Array by one.
    //Store the last element saved to be the first element of array.
    int lastElement = arr[size - 1];

    for (int i = size - 1; i > 0; i--) {
      arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;
    return arr;

}
int main(){
int a[]={2,3,9,2,3,6};
int * ptr;
///O(n)
ptr = rightRotate(a,6);
for(int i=0;i<6;i++){
    cout<<ptr[i]<<" ";
}

}
