#include<bits/stdc++.h>
using namespace std;

class ArrayList{
int *arr;
int length;
int capacity;
public:
ArrayList(){
length=0;
capacity = 0;
}
ArrayList(int sz){
arr = new int[sz];
if(arr){
    length = 0;
    capacity = sz;
}else{
    cout<<"Array creating failed!"<<endl;
}
}
int getLength(){
return length;
}
void resizeArray(){
int* temp = new int[2*capacity];
capacity = 2* capacity;
for(int i=0;i<length;i++){
    temp[i] = arr[i];
}
delete [] arr;
arr = temp;
}
void insert(int element){
  if(length<capacity){
    arr[length] = element;
    length++;
  }else{
   resizeArray();
    arr[length] = element;
    length++;
  }
}
void print(){
for(int i=0;i<length;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int getAt(int index){

if(index<length){
    return arr[index];
}else{
    return -1;
}
}

void deleteLast(){
if(length>0){
arr[length] = -1;
length--;
}
}
};


int main(){
   ArrayList arr(1);
    cout << "Arr length : " << arr.getLength() << endl;
    arr.insert(1);
    arr.insert(2);
    arr.insert(3);
    arr.insert(4);
    arr.insert(5);
    arr.insert(6);
    arr.insert(7);
    arr.insert(8);
    cout <<  "Arr length : " << arr.getLength() << endl;
    cout << "Array : ";
    arr.print();
    cout << "Element at index 5 is " << arr.getAt(4) << endl;
    arr.deleteLast();
    arr.print();
}
