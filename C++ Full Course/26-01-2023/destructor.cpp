
#include <iostream>
#include <string>
using namespace std;

class Collector {
  int * list;
  int size;
  int capacity;

  public:
  // Default constructor
  Collector(){
    // We must define the default values for the data members
    list = nullptr;
    size = 0;
    capacity = 0;
  }

  // Parameterized constructor
  Collector(int cap){
    // The arguments are used as values
    capacity = cap;
    size = 0;
    list = new int[capacity];
  }

  bool append(int v){
    if (size < capacity) {
      list [ size++ ] = v;
      cout<<"size"<<size<<"  "<<endl;
      return true;
    }
    return false;
  }

  // A simple print function
  void dump(){
    for(int i = 0 ; i < size ; i++) {
      cout << list[i] << " ";
    }
    cout << endl;
  }

  ~Collector(){
    cout << "Deleting the object " << endl;
    if (capacity > 0)
      delete[] list;
  }
};

int main(){
    /*
  Collector c(10);

  for (int i = 0 ; i < 15 ; i++){
    cout << c.append(i) << endl;
  }
  c.dump();
  */


  int *n = new int[20];
  n[0]=4;
  n[1]=5;
  n[2]=6;
  n[3]=7;
  delete[] n;




}
