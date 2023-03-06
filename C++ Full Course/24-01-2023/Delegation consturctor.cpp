#include <iostream>
using namespace std;

class Collector {
  private:
    int size;
    int capacity;
    int* list;

  public:
    Collector() : Collector(0) {}
    Collector(int cap) : capacity(cap), size(0)  {
      if (cap > 0) {
        list = new int[cap];
      }
      else
        capacity = 0;
    }

    bool append(int v) {
      if (size < capacity) {
        list [ size++ ] = v;
        return true;
      }
      else
        return false;
    }

    ~Collector() {
      if (size > 0) {
        delete[] list;
      }
    }
};

int main() {
  // A useless Collector object of 0 capacity
  Collector c1;
  // Another Collector object, this time with a capacity of 10
  Collector c2(10);

  for(int i = 0 ; i < 15 ; i++) {
    cout << c2.append(i) << endl;
  }

  return 0;
}
