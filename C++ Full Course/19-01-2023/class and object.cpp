#include<bits/stdc++.h>
using namespace std;

class Man{
public:
    int age;
    string name;

    void printMyName(){
     cout<<name<<endl;
    }
    void printMyAge(){
     cout<<age<<endl;
    }

};

int main(){


Man fahmida,nuzha;
fahmida.age=20;
fahmida.name="Fahmida";
fahmida.printMyName();
fahmida.printMyAge();


nuzha.age=21;
nuzha.name="Nuzha";
nuzha.printMyName();
nuzha.printMyAge();

return 0;
}

