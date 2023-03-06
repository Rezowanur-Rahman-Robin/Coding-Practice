#include <iostream>
#include <string>
using namespace std;
class Vehicle {
  protected:
  string Make;
  string Color;
  int Year;
  string Model;

  public:
  Vehicle(){
    Make = "";
    Color = "";
    Year = 0;
    Model = "";
  }

  Vehicle(string mk, string col, int yr, string mdl){
    Make = mk;
    Color = col;
    Year = yr;
    Model = mdl;
  }

  void print_details(){
    cout << "Manufacturer: " << Make << endl;
    cout << "Color: " << Color << endl;
    cout << "Year: " << Year << endl;
    cout << "Model: " << Model << endl;
  }
};

class Car: protected Vehicle{
  string trunk_size;

  public:
  Car(){
    trunk_size = "";
  }

  Car(string mk, string col, int yr, string mdl, string ts)
    :Vehicle(mk, col, yr, mdl){
      trunk_size = ts;
    }

  void car_details(){
    cout << "Trunk size: " << trunk_size << endl;
  }
};

class Honda: protected Car{
  int top_speed;

  public:
  Honda(){
    top_speed = 0;
  }

  Honda(string mk, string col, int yr, string mdl, string na, int ts)
    :Car(mk, col, yr, mdl, na){
      top_speed = ts;
    }

  void Honda_details(){
    print_details();
    car_details();
    cout << "Top speed of the car: " << top_speed << endl;
  }
};
