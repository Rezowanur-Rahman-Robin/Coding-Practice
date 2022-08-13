#include<bits/stdc++.h>
using namespace std;

void mergeArrays( int x[], int y[], int a[],int s,int e){

    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;

    while(i<=mid && j<=e){
        if(x[i]<y[j]){
            a[k]=x[i];
            i++;
            k++;
        }else{
            a[k]=y[j];
            j++;
            k++;
        }

    }
///adding the rest elements
    while(i<=mid){
        a[k]= x[i];
        k++;
        i++;
    }

    while(j<=e){
        a[k]= y[j];
        k++;
        j++;
    }

}

void mergeSort(int a[], int s, int e){
    /*
    length=0 means s>e
    length=1 means s=e
    */
    if( s>=e ){
        return;
    }

    int mid = (s+e)/2;

    ///Dividing the array into two parts
    int x[100],y[100];

    for(int i=s ; i<=mid ; i++){
        x[i]=a[i];
    }

    for(int i=mid+1 ; i<=e;i++){
        y[i]=a[i];
    }

    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);

    mergeArrays(x,y,a,s,e);


}

int main(){

int a[]={7,2,3,1,5,6,4};

mergeSort(a,0,6);
for(int i = 0 ; i<7 ; i++){
    cout<<a[i]<<" ";
}

return 0;
}
