#include<iostream>
#include"Complex.h"
using namespace std;
int main()
{
	Complex c1,c2,c3;
	cin>>c1;
	cin>>c2;
	cout<<"Complex number 1:"<<c1;
	cout<<"Complex number 2:"<<c2;
	c3=c1+c2;
	cout<<"Sum of complex number:";
	cout<<c3;
	Complex c4;
	c4=c1*c2;
	cout<<"Product of complex number:";
	cout<<c4;
	return 0;
}
