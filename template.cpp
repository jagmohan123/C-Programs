#include<iostream>
#include<conio.h>
using namespace std ;
//template <class x,class y>
class arraylist
{
private:
struct controlblock
{
int capacity;
int *ptr;	
};
controlblock *s;
public:
arraylist(int capacity)
{
s=new controlblock;
s->capacity=capacity;
s->ptr=new int[s->capacity];
}
void addelement(int index ,int data)
{
if(index>=0 && index<=s->capacity-1)
{
s->ptr[index]=data;
}
else
{
cout<<"\n array index is not valied";
}
}
void showdata(int index,int &data)
{
if(index>=0&&index<=s->capacity-1)
{
data=s->ptr[index];
}
else
{
cout<<"\n array index is not valied ";
}
}
void displaylist()
{
int i;
for(i=0;i<=s->capacity;i++)
{
cout<<" "<<s->ptr[i];
}
}
};
int main()
{
int data;
arraylist list1(4);
list1.addelement(0,10);
list1.addelement(1,20);
list1.addelement(2,30);
list1.addelement(3,40);
list1.displaylist();
getch();
}
