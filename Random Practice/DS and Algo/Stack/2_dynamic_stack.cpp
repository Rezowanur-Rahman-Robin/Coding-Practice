#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int *arr;
    int nextIndex;
    int capacity;
public:

    Stack(){
      capacity=4;
      arr = new int[capacity];
      nextIndex = 0;
    }
    int size(){
      return nextIndex;
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack empty."<<endl;
            return;
        }
      return arr[nextIndex-1];
    }

    bool isEmpty(){
      return nextIndex==0;
    }

    void push(int value){
      if(nextIndex==capacity){
        int *newArray = new int[capacity*2];
        for(int i=0;i<capacity;i++){
            newArray[i] = arr[i];
        }
        delete []arr;
        arr = newArray;
        capacity = 2*capacity;
      }
      arr[nextIndex] = value;
      nextIndex++;
    }



    void pop(){
       if(isEmpty()){
        cout<<"Stack is Empty."<<endl;
        return;
       }
       nextIndex--;
    }


};

int main(){

  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.size()<<endl;
  cout<<s.isEmpty()<<endl;

return 0;
}

