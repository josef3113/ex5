#include <iostream>
#include "Rational.h"


using namespace std;


void main ()
{
	Rational num1,num2(3,4),num3;
	num1.setdenominator(2).setnumerator(1);
	cout<<"num1"<<endl;
	num1.printnum();
	cout<<"num2"<<endl;
	num2.printnum();

	cout<<"add is "<<endl;
	num1=num1+num2;
	//num1.printnum();
	cout<<num1;
	cout<<"after lack is"<<endl;
	num1=num1-num2;
	//num1.printnum();
	cout<<num1;
	cout<<"after multiplication is"<<endl;
	num1=num1*num2;
	//num1.printnum();
	cout<<num1;
	cout<<"after divison"<<endl;
	num1=num1/num2;
	num1.printnum();
	
	cout<<"the opposite is"<<endl;
	num1=!(num1);
	//num1.printnum();
	cout<<num1;
	cout<<"insert num3"<<endl;
	cin>>num3;
	cout<<num3;
    system ("pause");

	
}