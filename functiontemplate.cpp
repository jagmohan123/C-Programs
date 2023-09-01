#include<iostream>
#include<conio.h>
using namespace std ;
template <class x,class y>
x func(x a, y b)
{
x c;
c=a+b;
return c;
}
int main()
{
cout<<func(10.6,20.6);
getch();
}
