#include<bits/stdc++.h>
using namespace std;

int arr[]={1,2,6,7,9,9,9,9,9,10,16,19};

int first_last_occurance(int l,int r,int target,bool firstOc){
 int ans;
while(l<=r){
    int midpoint = (l+r)/2;

    if(arr[midpoint]==target){
        ans = midpoint;
        if(firstOc){
            r = midpoint - 1;
        }else{
            l = midpoint + 1;
        }

    }
    if(arr[midpoint]<target){
        l=midpoint+1;
    }
    if(arr[midpoint]>target){
        r=midpoint-1;
    }
}

return ans;
}

int binarySearch(int l, int r,int target){
 int midpoint = (l+r)/2;


 if(arr[midpoint]==target){
    return midpoint;
 }
 if(arr[midpoint]<target){
   binarySearch(midpoint+1,r,target);
 }

 if(arr[midpoint]>target){
    binarySearch(l,midpoint-1,target);
 }


}

int binarySearch2(int l, int r,int target){


while(l<r){
    int midpoint = (l+r)/2;

    if(arr[midpoint]==target){
        return midpoint;
    }
    if(arr[midpoint]<target){
        l=midpoint+1;
    }
    if(arr[midpoint]>target){
        r=midpoint-1;
    }
}


}

int main(){

int n;

cin>>n;
cout<<first_last_occurance(0,11,n,true) << "   "<<first_last_occurance(0,9,n,false);


return 0;
}
