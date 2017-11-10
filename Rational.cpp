#include <iostream>
#include "Rational.h"


using namespace std;


Rational::Rational()
{
	numerator=0;
	denominator=1;
}
Rational::Rational(int numerator,int denominator)
{
	this->setdenominator(denominator).setnumerator(numerator);
}

 ostream&  operator << (std::ostream &output,Rational A)
{
	output<<A.numerator<<"/"<<A.denominator<<endl;
	return output;
}
 istream& operator >>(istream&is,Rational &A)
 {
	 char c;
	 is>>A.numerator>>c>>A.denominator;
	 return is;
 }
Rational& Rational::setdenominator(int denominator)
{
	if(denominator==0)
		{
			cout<<"EROR:denominator can't be 0"<<endl;
		}
	else
		{
     		this->denominator=denominator;
		}
	return *this;
}
Rational& Rational::setnumerator(int numerator)
{
	this->numerator=numerator;
	return *this;
}
void Rational::printnum()
{
	cout<<numerator<<"/"<<denominator<<endl;
	//cout<<"_"<<endl;
	//cout<<denominator<<endl;
}
Rational Rational::getRational()
{
	Rational temp;
	temp=(*this);
	return temp;
}
int Rational::getdenominator()
{
	return denominator;
}
int Rational::getnumerator()
{
	return numerator;
}
 Rational operator + (Rational A,Rational B)
{
	Rational temp;
	temp.setdenominator(A.getdenominator()*B.getdenominator());
	temp.setnumerator( (A.getnumerator()*B.getdenominator()) + B.getnumerator()*A.getdenominator() );
	reduction(temp);
	return temp;
}

 Rational operator -(Rational lack, Rational sub)
 {
   Rational temp;
	temp.setdenominator(lack.getdenominator()*sub.getdenominator());
	temp.setnumerator( (lack.getnumerator()*sub.getdenominator()) - sub.getnumerator()*lack.getdenominator() );
	reduction(temp);
	return temp;
 }

 Rational operator * (Rational A,Rational B)
 {
	 Rational temp;
	temp.setdenominator(A.getdenominator()*B.getdenominator());
	temp.setnumerator(A.getnumerator()*B.getnumerator());
	reduction(temp);
	return temp;

 }

 Rational operator / (Rational A ,Rational B)
 {
	  Rational temp;
	temp.setdenominator(A.getdenominator()*B.getnumerator());
	temp.setnumerator(A.getnumerator()*B.getdenominator());
	reduction(temp);
	return temp;

 }

 Rational operator !(Rational A)
 {
	 Rational temp;
	 temp.setdenominator(A.getnumerator());
	 temp.setnumerator(A.getdenominator());

	 return temp;
 }

 int gcd(int a,int b)
 {
	 int temp,GCD;
	 if(a<b)
	 {
		 temp =a;
		 a=b;
		 b=temp;
	 }
	for(int i=1;i<=b;i++)
	{
		if(a%i==0 && b%i==0)
			GCD=i;
	}
	 return GCD;
 }
 void reduction (Rational &A)
 {
	int x;
	x=gcd (A.getdenominator(),A.getnumerator());
	A.setdenominator(A.getdenominator()/x);
	A.setnumerator(A.getnumerator()/x);
	return;
 }