#include<bits/stdc++.h>
using namespace std;

class Man{
private:
    string password;


public:
    void setPass(string str){
     password = str;
    }
    void printPass(){
     cout<<password<<endl;
    }

};

int main(){


Man fahmida,nuzha;
fahmida.setPass("12345678");
fahmida.printPass();


return 0;
}

