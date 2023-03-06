#include<bits/stdc++.h>
using namespace std;



int findSecondMaximum(int arr[], int size) {
    int secondmax = INT_MIN;
    int firstmax = INT_MIN;
    // Write your code here
    for(int i=0;i<size;i++){
        if(arr[i]> firstmax){
          secondmax = firstmax;
          firstmax = arr[i];
        }
        if(arr[i]>secondmax && arr[i]<firstmax){
            secondmax = arr[i];
        }
    }
    return secondmax;
}


int main(){
int a[]={2,3,9,2,3,6};
///O(n)
cout<<findSecondMaximum(a,6)<<endl;


}
