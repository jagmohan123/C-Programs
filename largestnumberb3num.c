#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
system("cls");
printf("enter the value of a,b,c\n");
scanf("%d %d %d",&a,&b,&c);
if(a<b)
{
if(b<c)
{
printf("c is largest number%d\n",c);
}
else if(b>c)
{
printf("b is largest number%d\n",b);
}}
else
{
printf(" a is largest\n");
}
getch();
}
