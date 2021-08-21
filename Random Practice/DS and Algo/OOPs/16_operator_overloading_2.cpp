#include<bits/stdc++.h>
using namespace std;

class Fraction {
	private :

		int numerator;
		int denominator;

	public :

		Fraction() {

		}

		Fraction(int numerator, int denominator) {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		int getNumerator() const {
			return numerator;
		}

		int getDenominator() const {
			return denominator;
		}

		void setNumerator(int n) {
			numerator = n;
		}

		void setDenominator(int d) {
			denominator = d;
		}

		void print() const {
			cout << this -> numerator << " / " << denominator << endl;
		}

		void simplify() {
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}

		void add(Fraction const &f2) {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			numerator = num;
			denominator = lcm;
			simplify();
		}

		void multiply(Fraction const &f2) {
			numerator = numerator * f2.numerator;
			denominator = denominator * f2.denominator;

			simplify();
		}

		///pre increment overloading
/*
		void operator++(){
		 numerator= numerator+denominator;
		 simplify();
		}

		*/

		///Fraction& means return by reference for ++(++f)
		Fraction& operator++(){
		 numerator= numerator+denominator;
		 simplify();

		 return *this;
		}

		///Post increment
		Fraction operator++(int){
		    Fraction newF(numerator,denominator);

		    numerator = numerator + denominator;

		    simplify();

		    newF.simplify();

		    return newF;

		}

};


int main(){


    Fraction f1(10,2);
    Fraction f2(15,4);
    //f1.print();
    //++f1;
    f1.print();

    Fraction f3 = ++f1;
    f3.print();




    Fraction f4= ++(++f1);

    f1.print();
    f4.print();




    Fraction f5;



    f5= f2++;


    f5.print();
    f2.print();




}
