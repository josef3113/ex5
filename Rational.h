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
	Rational getRational();
	int getdenominator();
	int getnumerator();
	Rational& setdenominator(int);
	Rational& setnumerator(int);
	void printnum();
	friend ostream& operator << (std::ostream&,Rational);
	friend istream& operator >>(std::istream&,Rational&);
	//Rational operator  ^ ();
	
};
 void reduction (Rational&);
 Rational operator + (Rational,Rational);
 Rational operator - (Rational,Rational);
 Rational operator * (Rational,Rational);
 Rational operator / (Rational,Rational);
 Rational operator ! (Rational);
 int gcd(int,int);



#endif