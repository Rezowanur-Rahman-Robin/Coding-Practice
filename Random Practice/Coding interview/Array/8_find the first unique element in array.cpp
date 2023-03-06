#include<bits/stdc++.h>
using namespace std;

int findFirstUnique(int arr[], int size) {
    // Write your code here
    unordered_map<int,int> mp ;
    for(int i=0;i<size;i++){
        mp[arr[i]]++;

    }

    for(int i=0;i<size;i++){
            //cout<<arr[i]<<"-----"<<mp[arr[i]]<<endl;
        if(mp[arr[i]]==1){
        return arr[i];

        }
    }




    return - 1;
}

int findFirstUnique2(int arr[], int size) {

    //Inside Inner Loop Check Each index of outerLoop If it's repeated in array
    //If it's not repeated then return this as first unique Integer
    bool isRepeated = false;

    for (int i = 0; i < size; i++) {

        for (int j = i+1; j < size; j++) {

            if (arr[i] == arr[j] ) {
                isRepeated = true;
            }
        } //end of InnerLoop

        if (isRepeated == false) {
            return arr[i];
        }
        isRepeated = false;

    } //end of OuterLoop
    return - 1;
}


int main(){
int a[]={2,3,9,2,3,6};
///O(n)
cout<<findFirstUnique(a,6)<<endl;
///O(n^2)
cout<<findFirstUnique2(a,6)<<endl;


}
