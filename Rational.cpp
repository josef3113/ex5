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

Rational::Rational(const Rational& inRat)    // Copy Constractor Added
{
	this->setnumerator(inRat.getnumerator());
	this->setdenominator(inRat.getdenominator());

}

 ostream&  operator << (ostream &output,const Rational &A)
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
Rational Rational::getRational()const
{
	Rational temp;
	temp=(*this);
	return temp;
}
int Rational::getdenominator()const
{
	return denominator;
}
int Rational::getnumerator()const
{
	return numerator;
}
/////////////////////////////////////////////////////////////////////////////////
Rational Rational:: operator + (const int & B)const
{
	Rational temp;
	temp=ItoR(B);
	temp=this->getRational()+temp;
	temp.reduction();
	return temp;
}
 Rational Rational::operator+  (const Rational &B)const
{
	Rational temp;
	temp.setdenominator(this->denominator*B.getdenominator());
	temp.setnumerator( (this->numerator*B.getdenominator()) + B.getnumerator()*this->denominator );
	temp.reduction();
	return temp;
}
 //////////////////////////////////////////////////////////////////////////
 Rational Rational:: operator -(const int &sub)const
 {
   Rational temp;
	temp=ItoR(sub);
	temp=this->getRational()-temp;
	temp.reduction();
	return temp;
 }

 Rational Rational:: operator -(const Rational &sub)const
 {
   Rational temp;
	temp.setdenominator(this->denominator*sub.getdenominator());
	temp.setnumerator( (this->numerator*sub.getdenominator()) - sub.getnumerator()*this->denominator );
	temp.reduction();
	return temp;
 }


 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


  Rational Rational:: operator * (const int &B)const
 {
	 Rational temp;
	temp=ItoR(B);
	temp=this->getRational()*temp;
	temp.reduction();
	return temp;

 }


 Rational Rational:: operator * (const Rational &B)const
 {
	 Rational temp;
	temp.setdenominator(this->denominator*B.getdenominator());
	temp.setnumerator(this->numerator*B.getnumerator());
	temp.reduction();
	return temp;

 }


 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


  Rational Rational:: operator / (const int &B)const
 {
	  Rational temp;
	  temp=ItoR(B);
	  temp=this->getRational()/temp;
	  temp.reduction();
	  return temp;

 }


 Rational Rational:: operator / (const Rational &B)const
 {
	  Rational temp;
	temp.setdenominator(this->denominator*B.getnumerator());
	temp.setnumerator(this->numerator*B.getdenominator());
	temp.reduction();
	return temp;

 }

 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 Rational Rational:: operator !()const
 {
	 Rational temp;
	 temp.setdenominator(this->numerator);
	 temp.setnumerator(this->denominator);

	 return temp;
 }

 int gcd(int a,int b)
 {
	 int temp,GCD=1;
	 if(a<b)
	 {
		 temp =a;
		 a=b;
		 b=temp;
	 }
	for(int i=b;i>0;i--)
	{
		if(a%i==0 && b%i==0)
		{
			GCD=i;
		    return GCD;
		}
	}
 }
 void Rational::reduction ()
 {
	int x;
	x=gcd (this->denominator,this->numerator);
	this->denominator=this->denominator/x;
	this->numerator=this->numerator/x;
	return;
 }

 Rational ItoR(int I)
 {
   Rational temp;
   temp.setdenominator(1).setnumerator(I);
   return temp;
 }