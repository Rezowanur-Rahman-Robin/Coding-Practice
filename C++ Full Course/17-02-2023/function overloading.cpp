
#include <iostream>
using namespace std;

class Employee {
  protected:
    string name;
    int ID;
    int reportsTo;
  public:
    Employee(string name, int ID, int boss) : name(name), ID(ID), reportsTo(boss) { }
    string getName() { return name; }
    int getID() { return ID; }
    int getBoss() { return reportsTo; }
    void display() {
      cout << ID << " " << name << " reports to " << reportsTo << endl;
    }

    void display(string salutation)
    {
      cout << salutation << " ";
      display();
    }
};

class Manager : public Employee {
  protected:
    string teamName;
  public:
    Manager(string name, int ID, int boss, string teamName) : Employee(name, ID, boss), teamName(teamName) { }
    void display() {
      Employee::display("Mr");
      cout << "   Heads the team " << teamName << endl;
    }
};



int main() {
  Employee worker("John Smith", 10, 2);
  Manager ceo("Jack Hobbs", 0, 0, "Eats R Us");
  Manager cto("Elizabeth Shaw", 2, 0, "IT");
  worker.display("Mr");
  ceo.display();
  cto.display();
  //ceo.display("Mr")
  return 0;
}
