#include <iostream>
using namespace std;
int maxSumArr(int arr[], int arrSize) {

   // Write your code here
   int maxSum = -99999;

   for(int i=0;i<arrSize;i++){
      int sum = 0;
      int inisum = -9999;
      for(int j=i;j<arrSize;j++){
           sum +=arr[j];
           if(sum>inisum){
            inisum = sum;
           }
      }
      if(inisum>maxSum){
         maxSum = inisum;
      }

   }
   return maxSum;
}
int main(){

int a[]={-7,6,-2};

int ptr;
ptr = maxSumArr(a,3);

cout<<ptr<<endl;

}
