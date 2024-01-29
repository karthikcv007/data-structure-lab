#include<iostream>
using namespace std;
class Complex
{
	public:
		float real,img;
		friend istream& operator >>(istream & is,Complex & c)
		{
			 cout<<"Enter the real part:";
			 is>>c.real;
			 cout<<"Enter imaginary part:";
			 is>>c.img;
			 return is;
		}
		friend ostream& operator <<(ostream & os,Complex & c)
		{
			os<<c.real<<"+"<<"("<<c.img<<")"<<"i"<<endl;
		}
		friend Complex operator +(Complex a,Complex b)
		{ 
		  Complex sum;
		  sum.real=a.real+b.real;
		  sum.img=a.img+b.img;
		  return sum;
		}
		friend Complex operator *(Complex a,Complex b)
		{
			Complex product;
			product.real=a.real*b.real-a.img*b.img;
			product.img=a.real*b.img+a.img*b.real;
			return product;
		}
};
