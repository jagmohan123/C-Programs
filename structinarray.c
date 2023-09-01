#include<stdio.h>
#include<conio.h>
struct array
{
int a[10];
int n,i;
};
void main()
{
struct array a1;
system("cls");
printf("enter the value of n \n");
scanf("%d",&a1.n);
printf("enter the element in array \n");
for(a1.i=0;a1.i<a1.n;a1.i++)
{
scanf("%d",&a1.a[a1.i]);	
}
printf("the element of array is \n");
for(a1.i=0;a1.i<a1.n;a1.i++)
{
printf("%d\n",a1.a[a1.i]);	
}
getch();
}
