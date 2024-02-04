#include<iostream>
using namespace std;
class Complex {
      public:
      int real,img;
      friend istream& operator >>(istream& is,Complex& obj)
      { 
        cout<<"Enter real number:";
        is>>obj.real;
        cout<<"Enter imaginary number:";
        is>>obj.img;
        return is;
      }
      friend ostream& operator <<(ostream& os,Complex& obj)
      {
        os<<obj.real<<"+"<<"("<<obj.img<<")i"<<endl;
        return os;
      }
      friend Complex operator +(Complex a,Complex b)
      {
        Complex result1;
        result1.real=a.real+b.real;
        result1.img=a.img+b.img;
        return result1;
      }
      friend Complex operator *(Complex a,Complex b)
      { 
        Complex result;
        result.real=a.real*b.real;
        result.img=a.img*b.img;
        return result;
      }
      void operator -()
      {
        real=real;
        if (img<0)
        {
         img=-(+img);
         cout<<"The complement of the number is:"<<real<<"+"<<img<<"i"<<endl;
        }
        else
        {
         img=-img;
         cout<<"The complement of the number is:"<<real<<img<<"i"<<endl;
        }
      }
};
