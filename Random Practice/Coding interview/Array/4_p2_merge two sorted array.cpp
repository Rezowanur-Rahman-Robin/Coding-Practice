
#include <iostream>
using namespace std;

int * mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size)
{
    int newSize = arr1Size+arr2Size;
    int * arr3=new int[newSize]; // creating new array
    // Write your code here
    for(int i=0,k=0,j=0;i<newSize;i++){
        if(arr1[j]<arr2[k] && j<arr1Size){
            arr3[i]=arr1[j];
            j++;
        }else{
            arr3[i]=arr2[k];
            k++;
        }
    }


    return arr3; // returning array

}

int main(){

int a1[]={-3,0,1,4};
int a2[]={-9,-1,2,3,18};
int* ptr;
ptr = mergeArrays(a1,a2,4,5);

for(int i=0;i<9;i++){
    cout<<ptr[i]<<endl;
}
}
