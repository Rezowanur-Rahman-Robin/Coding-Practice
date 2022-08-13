#include<bits/stdc++.h>
using namespace std;



int partitioning(int a[],int s, int e){
    int pivot = a[e];
    int countSmaller = 0;
    for(int i=s; i<=e;i++){
        if(a[i]<pivot){
            countSmaller++;
        }
    }
    int pivotIndex = s + countSmaller;
    swap(a[pivotIndex],a[e]);

    int i=s;
    int j=e;

    while(i<=pivotIndex && j>=pivotIndex){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
        i++;
        j--;
    }
    return pivotIndex;

}
///another way of partitioning
/*
int partition(int a[],int s,int e){
     int i=s;
     int pivot = a[e];
     for(int j=s;j<=e-1;j++){
        if(a[j] < pivot){
            swap(a[i],a[j]);
            i++;
        }
     }
     swap(a[i],a[e]);
     return i;
}

*/

void quickSort(int a[],int s, int e){
    if(s>=e){
        return;
    }
    int p = partitioning(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int main(){
int a[]={7,2,3,1,5,6,4};

quickSort(a,0,6);
for(int i = 0 ; i<7 ; i++){
    cout<<a[i]<<" ";
}

return 0;
}
