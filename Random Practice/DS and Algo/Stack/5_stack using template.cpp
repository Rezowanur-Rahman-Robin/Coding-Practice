#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Stack{
private:
    T *arr;
    int nextIndex;
    int capacity;
public:

    Stack(){
      capacity=4;
      arr = new T[capacity];
      nextIndex = 0;
    }
    int size(){
      return nextIndex;
    }

    T top(){
        if(isEmpty()){
            cout<<"Stack empty."<<endl;
            return 0;
        }
      return arr[nextIndex-1];
    }

    bool isEmpty(){
      return nextIndex==0;
    }

    void push(T value){
      if(nextIndex==capacity){
        T *newArray = new T[capacity*2];
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

  Stack<char> s;
  s.push('A');
  s.push('B');
  s.push('C');
  s.push('D');
  s.push('E');

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


