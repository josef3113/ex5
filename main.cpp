#include <iostream>
#include "Rational.h"


using namespace std;


void main ()
{
	int x=7;
	Rational num1,num2(3,4),num3;
	num1.setdenominator(2).setnumerator(1);
	cout<<"num1"<<endl;
	num1.printnum();
	cout<<"num2"<<endl;
	num2.printnum();

	cout<<"test whit int\n"<<"num2 is: "<<num2<<"x is:"<<x<<endl;
	cout<<"num2+x=";
	num2=num2+x;
	cout<<num2;
	cout<<"\nnum2 is: "<<num2<<"x is:"<<x<<endl;
	cout<<"num2-x=";
	num2=num2-x;
	cout<<num2;
	cout<<"\nnum2 is: "<<num2<<"x is:"<<x<<endl;
	cout<<"num2*x=";
	num2=num2*x;
    cout<<num2;
	cout<<"\nnum2 is: "<<num2<<"x is:"<<x<<endl;
	cout<<"num2/x=";
	num2=num2/x;
	cout<<num2;


	cout<<"\ntest whit Rational\n"<<"num1 is: "<<num1<<"num2 is:"<<num2<<endl;
	cout<<"num1+num2=";
	num1=num1+num2;
	//num1.printnum();
	cout<<num1;
	cout<<"\nnum1 is: "<<num1<<"num2 is:"<<num2<<endl;
	cout<<"num1-num2=";
	num1=num1-num2;
	//num1.printnum();
	cout<<num1;
	cout<<"\nnum1 is: "<<num1<<"num2 is:"<<num2<<endl;
	cout<<"num1*num2=";
	num1=num1*num2;
	//num1.printnum();
	cout<<num1;
	cout<<"\nnum1 is: "<<num1<<"num2 is:"<<num2<<endl;
	cout<<"num1/num2=";
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