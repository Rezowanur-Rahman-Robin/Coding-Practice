#include <iostream>
using namespace std;

// Write classes code here
// make base class functions virtual

class Account{
protected:
    float balance;

public:
    Account(float n){
     balance = n;
    }
    virtual void Withdraw(float amount){
    }
    virtual void Deposit(float amount){
    }
    virtual void printBalance(){
    }
};

class Savings : public Account{
float interest_rate  = 0.8;
public:
    Savings(float t):Account(t){
    }
    void Withdraw(float amount){
       balance = balance -amount- (interest_rate * amount);
    }
    void Deposit(float amount){
        balance =  balance + amount+ (interest_rate * amount);
    }
    void printBalance(){
        cout<<"Balance in saving account: "<<balance<<endl;
    }
};

class Current : public Account{
    public:
    Current(float t):Account(t){
    }
    void Withdraw(float amount){
       balance =   balance -amount;
    }
    void Deposit(float amount){
       balance =   balance + amount;
    }
    void printBalance(){
        cout<<"Balance in current account: "<<balance<<endl;
    }
};


int main() {
  // make instances of classes here
  // call their traits functions here

 Savings s1(50000);


  Account * acc = &s1;
  acc->Deposit(1000);
  acc->printBalance();

  acc->Withdraw(3000);
  acc->printBalance();


  Current c1(50000);
  acc = &c1;
  acc->Deposit(1000);
  acc->printBalance();

  acc->Withdraw(3000);
  acc->printBalance();
  return 0;
}
