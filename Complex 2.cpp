#include<iostream>
#include"Complex 2.h"
using namespace std;
int main()
{
   Complex obj1,obj2;
   cin>>obj1;
   cin>>obj2;
   cout<<"The complex number is:"<<obj1;
   cout<<"The complex number is:"<<obj2;
   Complex obj3;
   obj3=obj1+obj2;
   cout<<"The sum:";
   cout<<obj3;
   Complex obj4;
   obj4=obj1*obj2;
   cout<<"The product :";
   cout<<obj4;
   -obj1;
   -obj2;
    return 0;
}
