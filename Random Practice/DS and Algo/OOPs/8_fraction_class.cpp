#include<bits/stdc++.h>
using namespace std;

// Recursive function to return gcd of a and b
int gcd( int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers
 int LCM(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

class Fraction{

   private:
       int numerator;
       int denominator;




   public:
       Fraction(int numerator , int denominator){
          this->numerator = numerator;
          this->denominator = denominator;
       }



       void print(){

        cout<<this->numerator<<"/"<<this->denominator<<endl; //this is optional here
       }

       void add(Fraction s2){

           int lcm =LCM(this->denominator, s2.denominator) ;

           int  x= lcm/this->denominator;
           int  y= lcm/s2.denominator;

           int ansNumerator=this->numerator * x + s2.numerator * y;

           cout<<"Answer: "<<ansNumerator<<"/"<<lcm<<endl;

       }


};


int main(){

Fraction f1(2,3),f2(5,6);

f1.print();
f2.print();

f1.add(f2);


return 0;
}
