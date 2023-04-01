#include <iostream>
using namespace std;

class Engine{
  int capacity;

  public:
  Engine(){
    capacity = 0;
  }

  Engine(int cap) {
    capacity = cap;
  }

  void Engine_details() {
    cout << "Engine details: " << capacity << endl;
  }
};

class Tyres{
  int No_of_tyres;

  public:
  Tyres(){
    No_of_tyres = 0;
  }

  Tyres(int nt) {
    No_of_tyres = nt;
  }

  void Tyre_details() {
    cout << "Number of tyres: " << No_of_tyres << endl;
  }
};

class Doors{
  int No_of_doors;

  public:
  Doors(){
    No_of_doors = 0;
  }

  Doors(int nod) {
    No_of_doors = nod;
  }

  void Door_details() {
    cout << "Number of Doors: " << No_of_doors << endl;
  }
};

class Car{
  Engine Eobj;
  Tyres Tobj;
  Doors Dobj;
  string color;

  public:
  Car(Engine eng, Tyres tr, int dr, string col)
    : Eobj(eng), Tobj(tr), Dobj(dr){

    color = col;
  }

  void Car_detail(){
    Eobj.Engine_details();
    Tobj.Tyre_details();
    Dobj.Door_details();
    cout << "Car color: " << color << endl;
  }
};

int main(){
  Engine Eobj(1600);
  Tyres Tobj(4);
  Doors Dobj(4);
  Car Cobj(Eobj, Tobj, 4, "Black");
  Cobj.Car_detail();
  Eobj.Engine_details();

}
