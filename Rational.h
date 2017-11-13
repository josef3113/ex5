#ifndef RATIONAL_H
#define RATIONAL_H

using namespace std;

class Rational
{

private:
	int numerator,denominator;
public:
	Rational();
	Rational(int, int);
	Rational getRational()const;
	int getdenominator()const;
	int getnumerator()const;
	Rational& setdenominator(int);
	Rational& setnumerator(int);
	void printnum();
	 Rational operator + (const Rational&)const;
	 Rational operator + (const int & B)const;
	 Rational operator - (const Rational&)const;
	 Rational operator - (const int & B)const;
	 Rational operator * (const Rational&)const;
	 Rational operator * (const int &B)const;
	  Rational operator / (const Rational &)const;
	  Rational operator / (const int &B)const;
	  Rational operator ! ()const;
	  void reduction ();
	friend ostream& operator << (std::ostream&,Rational);
	friend istream& operator >>(std::istream&,Rational&);
	
};
 

 

 
 int gcd(int,int);
 Rational ItoR(int );



#endif