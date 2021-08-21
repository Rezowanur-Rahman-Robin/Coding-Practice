#include<bits/stdc++.h>
using namespace std;


class ComplexNumber{

private:
   int real,imaginary;

public:
    ComplexNumber(int real,int imaginary){

        this->real = real;
        this->imaginary=imaginary;

    }

    void print(){
        cout<<this->real<<"+"<<this->imaginary<<"i"<<endl;
    }

    //&z -> no new memory needed
    // const-> z will be unchanged
    void add(ComplexNumber const &z){
     this->real = this->real+ z.real;
     this->imaginary= this->imaginary+z.imaginary;  //this is not compulsory

    }

    void multiply(ComplexNumber const &z){
     int r = this->real * z.real - this->imaginary*z.imaginary;
     int i = this->real*z.imaginary + this->imaginary * z.real;

     this->real= r;
     this->imaginary = i;

    }


};


int main(){

    int real1,imaginary1,real2,imaginary2;

    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;

    ComplexNumber c1(real1,imaginary1);
    ComplexNumber c2(real2,imaginary2);

    int choice;
    cin>>choice;
    if(choice){
        c1.add(c2);
        c1.print();
    }else{

        c1.multiply(c2);
        c1.print();
    }




}
